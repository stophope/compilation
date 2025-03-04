%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "y.tab.h"
%}
letter [A-Za-z]
digit [0-9]

%option yylineno

 // <标识符> → <字母>│<标识符> <数字>│<标识符> <字母>
identifier {letter}({letter}|{digit})*
INTEGER ([1-9]({digit})*)|0

character_in_string [A-Za-z0-9()*/+,-./:=;<>\[\] \t\r\a]
STRING [']{character_in_string}+[']
illegal_string [']{character_in_string}+

legal_character [A-Za-z0-9'()*/+,-./:=<>\[\]]
illegal_character [^A-Za-z0-9'()*/+,-.:=;<>\[\] \t\r\a\n]
illegal ({illegal_character}|{legal_character})*{illegal_character}+({illegal_character}|{legal_character})*

%%
[ \t\r\a]+     ; // 空白字符
[\n]    ; // 换行符
and 	return AND;
array 	return ARRAY;
begin 	return BEGIN_;
bool 	return BOOL;
call 	return CALL;
case 	return CASE;
char 	return CHAR;
constant	return CONSTANT;
dim 	return DIM;
do 	return DO;
else 	return ELSE;
end 	return END;
false 	return FALSE;
for 	return FOR;
if 	return IF;
input 	return INPUT;
integer return INTEGER;
not 	return NOT;
of 	return OF;
or 	return OR;
output 	return OUTPUT;
procedure 	return PROCEDURE;
program 	return PROGRAM;
read 	return READ;
real 	return REAL;
repeat 	return REPEAT;
set 	return SET;
stop 	return STOP;
then 	return THEN;
to 	return TO;
true 	return TRUE;
until 	return UNTIL;
var 	return VAR;
while 	return WHILE;
write 	return WRITE;
{identifier} 	yylval.str = strdup(yytext); return IDENTIFIER;
{INTEGER} 	yylval.str = strdup(yytext); return INTEGER;
{STRING} 	yylval.str = strdup(yytext); return CHAR_CONST;
"(" 	return L_BRACKET;
")" 	return R_BRACKET;
"*" 	return MUL;
"*/" 	return R_NOTE;
"+" 	return ADD;
"," 	return COMMA;
"-" 	return SUB;
"." 	return DOT;
".." 	;
"/" 	return DIV;
"/*" 	return L_NOTE;
":" 	return COLON;
":=" 	return ASSIGN;
";" 	return SEMICOLON;
"<" 	return LESS;
"<=" 	return LESS_OR_EQUAL;
"<>" 	return NOT_EQUAL;
"=" 	return EQUAL;
">" 	return OVER;
">=" 	return OVER_OR_EQUAL;
"[" 	return L_SQUARE;
"]" 	return R_SQUARE;
{illegal_string} ;
{illegal} ;

%%
