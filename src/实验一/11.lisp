%{
#include <stdio.h>
%}




letter      [A-Za-z]
digit       [0-9]
 // <标识符> → <字母>│<标识符> <数字>│<标识符> <字母>
identifier {letter}({letter}|{digit})*
intdentifier -?([1-9]{digit}*)
Character  [^'\n]*
STRING [']{Character}+[']
illegal_string [']{Character}+

clamp_illegal [A-Za-z0-9()*/+,-./:=<>\[\]]
illegal {clamp_illegal}*[^A-Za-z0-9()*/+,-./:=;'<>\[\] \t\r\a\n]+{clamp_illegal}*


%%
[ \t\r\a]+     ; // 空白字符
[\n]           ; // 换行符
and             return 1;
array           return 2;
begin           return 3;
bool            return 4;
call            return 5;
case            return 6;
char            return 7;
constant        return 8;
dim             return 9;
do              return 10;
else            return 11;
end             return 12;
false           return 13;
for             return 14;
if              return 15;
input           return 16;
integer         return 17;
not             return 18;
of              return 19;
or              return 20;
output          return 21;
procedure       return 22;
program         return 23;
read            return 24;
real            return 25;
repeat          return 26;
set             return 27;
stop            return 28;
then            return 29;
to              return 30;
true            return 31;
until           return 32;
var             return 33;
while           return 34;
write           return 35;
{identifier}    return 36;
{intdentifier}  return 37;
{STRING}        return 38;
"("             return 39;
")"             return 40;
"*"             return 41;
"/*"            return 42;
"+"             return 43;
","             return 44;
"-"             return 45;
"."             return 46;
".."            return 47;
"/"             return 48;
"*/"            return 49;
":"             return 50;
":="            return 51;
";"             return 52;
"<"             return 53;
"<="            return 54;
"<>"            return 55;
"="             return 56;
">"             return 57;
">="            return 58;
"["             return 59;
"]"             return 60;
{illegal_string} return 61;
{illegal}        return 62;

%%
int main(int argc, char const *argv[])
{
    int linecount=1;
    printf("name: wuquanxi\n");
    printf("class: 2\n");
    printf("number: 202230443040\n");
    char filename[100];
    while (1)
    {
        printf("Please enter a filename: ");
        if (scanf("%s", filename) == 1)
        {
            char a1[100][100];
            int i = 0;
            int type;
            int number = 0;
            int in_comment=0;
            FILE *file = fopen(filename, "r");
            if (file == NULL)
            {
                printf("Failed to open file: %s\n", filename);
                return 1;
            }
            yyin=file;
            while ((type = yylex()))
            {
                if (number % 5 == 0)
                {
                    printf("\n");
                }
                
                //注释错误
                if (!in_comment)
                {
                    if (strcmp(yytext, "/*") == 0)
                    {
                        in_comment = 1;
                        continue;
                    }
                }
                else
                {
                    if (strcmp(yytext, "\n") == 0)
                    {
                        printf("zhushi error\n");
                    }
                    if (strcmp(yytext, "*/") == 0)
                    {
                        in_comment = 0;
                        continue;
                    }
                    continue;
                }

                //字符常数缺右边的单引号
                if (type == 61)
                {
                    printf("ERROR:Character Constant Error     Position:%d\n",number);  
                    continue;
                }

                if (type == 62)
                {
                    printf("ERROR:Illegal Character     Position:%d\n",number);
                    continue;
                }

                number++;

                if (type < 36 || type > 38)
                {
                    printf("(%d ,'%s')\t", type, "-");
                    continue;
                }
                else
                {
                    int ok = 0;
                    int j;
                    for (j = 0; j < i; j++)
                    {
                        if (strcmp(a1[j], yytext) == 0)
                        {
                            ok = 1;
                            break;
                        }
                    }
                    if (ok == 0)
                    {
                        strcpy(a1[i], yytext);
                        i++;
                    }
                    printf("(%d , %d )\t", type, ok == 0 ? i : j + 1);
                }
            }
            fclose(file);
        }
        printf("\n");
    }
    return 0;
}

int yywrap()
{
    return 1;
}