%{
#include "header.h"
#include "y.tab.h"
extern int yylineno;
%}

%union{
	char* str;
    struct express *exp;
}

%error-verbose


%token AND ARRAY BEGIN_ BOOL CALL CASE CHAR CONSTANT DIM DO ELSE END FALSE FOR IF INPUT NOT OF OR OUTPUT PROCEDURE PROGRAM READ REAL REPEAT SET STOP THEN TO TRUE UNTIL VAR WHILE WRITE


//双界符  <> <= >= := /* */
%token NOT_EQUAL LESS_OR_EQUAL OVER_OR_EQUAL ASSIGN R_NOTE L_NOTE

//单界符 +-*/=<>()[]:.;,'
%token ADD SUB MUL DIV EQUAL LESS OVER L_BRACKET R_BRACKET L_SQUARE R_SQUARE COLON DOT SEMICOLON COMMA PRIME
//
%token IDENTIFIER INTEGER BOOL_CONST CHAR_CONST



%type <str>INTEGER
%type <str>CHAR_CONST
%type <str>BOOL_CONST
%type <str>IDENTIFIER BOOL_ELEMENT
%type <str>CAL_NUM
%type <str>FACTOR
%type <str>ITEM
%type <str>CAL_EXPRESSION
%type <str>OP

%type <exp>BOOL_NUM BOOL_FACTOR BOOL_ITEM BOOL_EXPRESSION
%type <exp>SENTENCE SENTENCE_LIST SUB_SENTENCE_LIST ASSIGN_SENTENCE COMPOUND_SENTENCE
%type <exp>IF_SENTENCE C_IF_SENTENCE T_IF_SENTENCE
%type <exp>WHILE_SENTENCE D_WHILE_SENTENCE W
%type <exp>REPEAT_SENTENCE R T_REPEAT_SENTENCE

%start START

%%
START:PROGRAM IDENTIFIER SEMICOLON VARIABLE_EXPLAIN COMPOUND_SENTENCE DOT{
	printf("\nResult:\n");
    SYLIST[0].op="program";
    SYLIST[0].arg1=$2;
    SYLIST[0].arg2="-";
    SYLIST[0].target="-";
    tot=tot+1;
    emit("sys","-","-","-");
    backpatch($5->chain,tot);
    printSYL();
    system("pause");
    exit(0);
};

VARIABLE_EXPLAIN:VAR VARIABLE_DEFINITION{
	print_rule(1);
}
| {
	print_rule(2);
};

VARIABLE_DEFINITION:IDENTIFIER_LIST COLON TYPE SEMICOLON VARIABLE_DEFINITION {
	print_rule(3);
}
| IDENTIFIER_LIST COLON TYPE SEMICOLON{
	print_rule(4);
};

IDENTIFIER_LIST:IDENTIFIER COMMA IDENTIFIER_LIST{
	print_rule(5);
} 
| IDENTIFIER{
	print_rule(6);
};



COMPOUND_SENTENCE:BEGIN_ SENTENCE_LIST END {
	print_rule(7);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=$2->chain;
};

SENTENCE_LIST:SUB_SENTENCE_LIST SENTENCE{
    print_rule(8);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=$2->chain;
}
| SENTENCE{
	print_rule(9);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=$1->chain;
};

SUB_SENTENCE_LIST:SENTENCE_LIST SEMICOLON {
	//print_rule(9);
    backpatch($1->chain,tot+1);
};

SENTENCE:ASSIGN_SENTENCE {
	print_rule(10);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=NULL;
}
| IF_SENTENCE {
	print_rule(11);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=$1->chain;
}
| WHILE_SENTENCE {
	print_rule(12);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=$1->chain;
}
| REPEAT_SENTENCE {
	print_rule(13);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=$1->chain;
}
| COMPOUND_SENTENCE{
	print_rule(14);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=$1->chain;
};

ASSIGN_SENTENCE:IDENTIFIER ASSIGN CAL_EXPRESSION{
    print_rule(15);
    tot=tot+1;
    emit(":=",$3,"-",$1);
};

//if then else
C_IF_SENTENCE:IF BOOL_EXPRESSION THEN{
    backpatch($2->true_out,tot+1);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=$2->false_out;
};

T_IF_SENTENCE:C_IF_SENTENCE SENTENCE ELSE{
    tot=tot+1;
    struct ListNode* q=create_listnode(tot);
    emit("j","-","-","-");
    backpatch($1->chain,tot+1);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=merge(q,$2->chain);
};

IF_SENTENCE:C_IF_SENTENCE SENTENCE{
    print_rule(16);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=merge($1->chain,$2->chain);
}
|T_IF_SENTENCE SENTENCE{
    print_rule(17);
    $$=(struct express*)malloc(sizeof(struct express));
    $$->chain=merge($1->chain,$2->chain);
    //tot=tot+1;
    //struct ListNode* q=create_listnode(tot);
    //emit("j","-","-","-");
    //$$->chain=merge(temp,q);
};

//while do
W: WHILE {
    $$=(struct express*)malloc(sizeof(struct express));
    $$->codebegin=tot+1;
};

D_WHILE_SENTENCE:W BOOL_EXPRESSION DO {
    $$=(struct express*)malloc(sizeof(struct express));
    $$->codebegin=$1->codebegin;
    backpatch($2->true_out,tot+1);
    $$->chain=$2->false_out;
};

WHILE_SENTENCE:D_WHILE_SENTENCE SENTENCE{
	print_rule(18);
    $$=(struct express*)malloc(sizeof(struct express));
    backpatch($2->chain,$1->codebegin);
    tot=tot+1;
    emit("j","-","-",numbers[$1->codebegin]);
    $$->chain=$1->chain;
};

//repeat do
R:REPEAT{
    $$=(struct express*)malloc(sizeof(struct express));
    $$->codebegin=tot+1;
};//记住入口

T_REPEAT_SENTENCE:R SENTENCE UNTIL{
    $$=(struct express*)malloc(sizeof(struct express));
    backpatch($2->chain,tot+1);
    //$$->chain=$2->chain;
    $$->codebegin=$1->codebegin;
};

REPEAT_SENTENCE:T_REPEAT_SENTENCE BOOL_EXPRESSION{
	print_rule(19);
    $$=(struct express*)malloc(sizeof(struct express));
    backpatch($2->false_out,$1->codebegin);
    $$->chain=$2->true_out;
};//回填BOOL_S.false，留下truelist



CAL_EXPRESSION:CAL_EXPRESSION ADD ITEM {
    print_rule(20);
    $$ = arr[pop];
    tot=tot+1;
    emit("+",$1,$3,arr[pop++]);
}
| CAL_EXPRESSION SUB ITEM {
	print_rule(21);
    $$ = arr[pop];
    tot=tot+1;
    emit("-",$1,$3,arr[pop++]);
}
| ITEM {
    print_rule(22);
    $$ = $1;
};

ITEM:ITEM MUL FACTOR {
    print_rule(23);
    $$ = arr[pop];
    tot=tot+1;
    emit("*",$1,$3,arr[pop++]);
}
| ITEM DIV FACTOR {
	print_rule(24);
    $$ = arr[pop];
    tot=tot+1;
    emit("/",$1,$3,arr[pop++]);
}
| FACTOR{
    print_rule(25);
    $$ = $1; 
};

FACTOR:CAL_NUM {
    print_rule(26);
     $$ = $1; 
} 
| SUB FACTOR {
	print_rule(27);
    $$ = $2;
};

CAL_NUM:INTEGER {
    print_rule(28);
    $$ = $1;
} 
| IDENTIFIER {
    print_rule(29);
    $$ = $1;
} 
| L_BRACKET CAL_EXPRESSION R_BRACKET{
    print_rule(30);
    $$=$2;
} ;



BOOL_EXPRESSION:BOOL_EXPRESSION OR BOOL_ITEM {
    print_rule(31);
    $$=(struct express*)malloc(sizeof(struct express));
    $$=create_express($1->codebegin);
    backpatch($1->false_out,$3->codebegin);
    $$->false_out=$3->false_out;
    $$->true_out=merge($1->true_out,$3->true_out);
}
| BOOL_ITEM {
    $$=(struct express*)malloc(sizeof(struct express));
    $$=$1;
    print_rule(32);
};

BOOL_ITEM:BOOL_ITEM AND BOOL_FACTOR {
    print_rule(33);
    $$=(struct express*)malloc(sizeof(struct express));
    $$=create_express($1->codebegin);
    backpatch($1->true_out,$3->codebegin);
    $$->true_out=$3->true_out;
    $$->false_out=merge($1->false_out,$3->false_out);
}
| BOOL_FACTOR{
    print_rule(34);
    $$=(struct express*)malloc(sizeof(struct express));
    $$=$1;
};

BOOL_FACTOR:BOOL_NUM {
    print_rule(35);
    $$=(struct express*)malloc(sizeof(struct express));
    $$=$1;
}
| NOT BOOL_FACTOR{
    print_rule(36);
    $$=(struct express*)malloc(sizeof(struct express));
    $$=create_express($2->codebegin);
    $$->true_out=$2->false_out;
    $$->false_out=$2->true_out;
};

BOOL_NUM:TRUE {
    print_rule(37);
}
| FALSE {
    print_rule(37);
}
| IDENTIFIER {
    print_rule(38);
    $$=(struct express*)malloc(sizeof(struct express));
    int nextstat,nextstat__;

    tot=tot+1;
    nextstat=tot;
    emit("jnz",$1,"-","-");

    tot=tot+1;
    nextstat__=tot;
    emit("j","-","-","-");

    $$=create_express(nextstat);
    $$->true_out=create_listnode(nextstat);
    $$->false_out=create_listnode(nextstat__);
}
| L_BRACKET BOOL_EXPRESSION R_BRACKET {
    print_rule(39);
    $$=(struct express*)malloc(sizeof(struct express));
    $$=$2;
}
| CAL_EXPRESSION OP CAL_EXPRESSION {
    print_rule(40);
    $$=(struct express*)malloc(sizeof(struct express));
    int nextstat,nextstat__;
    if (strcmp($2, "LESS") == 0) {// A<C
        tot=tot+1;
        nextstat=tot;
        emit("j<",$1,$3,"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp($2, "OVER") == 0) {// A>C
        tot=tot+1;
        nextstat=tot;
        emit("j>",$1,$3,"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp($2, "EQUAL") == 0) {// A=C
        tot=tot+1;
        nextstat=tot;
        emit("j=",$1,$3,"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp($2, "NOT_EQUAL") == 0) {// A<>C
        tot=tot+1;
        nextstat=tot;
        emit("j<>",$1,$3,"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp($2, "LESS_OR_EQUAL") == 0) {// A<=C
        tot=tot+1;
        nextstat=tot;
        emit("j<=",$1,$3,"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp($2, "OVER_OR_EQUAL") == 0) {// A>=C
        tot=tot+1;
        nextstat=tot;
        emit("j>=",$1,$3,"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    
    $$=create_express(nextstat);
    $$->true_out=create_listnode(nextstat);
    $$->false_out=create_listnode(nextstat__);
};

//BOOL_ELEMENT:IDENTIFIER | CAL_EXPRESSION ;

OP:LESS{
    print_rule(43);
    $$="LESS";
} 
| NOT_EQUAL{
    print_rule(44);
    $$="NOT_EQUAL";
}
| LESS_OR_EQUAL{
    print_rule(45);
    $$="LESS_OR_EQUAL";
} 
| OVER_OR_EQUAL{
    print_rule(46);
    $$="OVER_OR_EQUAL";
} 
| OVER {
    print_rule(47);
    $$="OVER";
}
| EQUAL{
    print_rule(48);
    $$="EQUAL";
};

//CHAR_EXPRESSION:CHAR_CONST | IDENTIFIER;

TYPE:INTEGER{
    print_rule(49);
} | BOOL {
    print_rule(50);
}| CHAR{
    print_rule(51);
};


%%



int main() {
    printf("CREATORS:\n");
    printf("NAME:Wang Guoyuan\tCLASS:Computer Science and Technology Class 2\tID:202230442470\n");
    printf("NAME:Wu Quanxi\t\tCLASS:Computer Science and Technology Class 2\tID:202230443040\n");
    printf("NAME:Zhou Xiaoyang\tCLASS:Computer Science and Technology Class 2\tID:202230444054\n");

    char filename[100];    
    FILE *file;
    extern FILE *yyin;

    printf("Please enter the test file:\n>");
    scanf("%s",filename);
    file=fopen(filename,"r");
    if (file == NULL) {
    printf("failed to open file\n");
    system("pause");
    exit(1);
    }
  
    FILE* fp=fopen(filename,"r");
    char ch;
    printf("\nThe code in %s:\n",filename);
    fscanf(fp,"%c",&ch);
    while(!feof(fp)){
        putchar(ch);
        fscanf(fp,"%c",&ch);
    }

    yyin = file;
    yyparse();
    system("pause");
}

void yyerror(char *msg) {
    printf("\nError encountered around line %d: %s \n", yylineno, msg);
}

int yywrap(){
    return 1;
}
