/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AND = 258,
    ARRAY = 259,
    BEGIN_ = 260,
    BOOL = 261,
    CALL = 262,
    CASE = 263,
    CHAR = 264,
    CONSTANT = 265,
    DIM = 266,
    DO = 267,
    ELSE = 268,
    END = 269,
    FALSE = 270,
    FOR = 271,
    IF = 272,
    INPUT = 273,
    NOT = 274,
    OF = 275,
    OR = 276,
    OUTPUT = 277,
    PROCEDURE = 278,
    PROGRAM = 279,
    READ = 280,
    REAL = 281,
    REPEAT = 282,
    SET = 283,
    STOP = 284,
    THEN = 285,
    TO = 286,
    TRUE = 287,
    UNTIL = 288,
    VAR = 289,
    WHILE = 290,
    WRITE = 291,
    NOT_EQUAL = 292,
    LESS_OR_EQUAL = 293,
    OVER_OR_EQUAL = 294,
    ASSIGN = 295,
    R_NOTE = 296,
    L_NOTE = 297,
    ADD = 298,
    SUB = 299,
    MUL = 300,
    DIV = 301,
    EQUAL = 302,
    LESS = 303,
    OVER = 304,
    L_BRACKET = 305,
    R_BRACKET = 306,
    L_SQUARE = 307,
    R_SQUARE = 308,
    COLON = 309,
    DOT = 310,
    SEMICOLON = 311,
    COMMA = 312,
    PRIME = 313,
    IDENTIFIER = 314,
    INTEGER = 315,
    BOOL_CONST = 316,
    CHAR_CONST = 317
  };
#endif
/* Tokens.  */
#define AND 258
#define ARRAY 259
#define BEGIN_ 260
#define BOOL 261
#define CALL 262
#define CASE 263
#define CHAR 264
#define CONSTANT 265
#define DIM 266
#define DO 267
#define ELSE 268
#define END 269
#define FALSE 270
#define FOR 271
#define IF 272
#define INPUT 273
#define NOT 274
#define OF 275
#define OR 276
#define OUTPUT 277
#define PROCEDURE 278
#define PROGRAM 279
#define READ 280
#define REAL 281
#define REPEAT 282
#define SET 283
#define STOP 284
#define THEN 285
#define TO 286
#define TRUE 287
#define UNTIL 288
#define VAR 289
#define WHILE 290
#define WRITE 291
#define NOT_EQUAL 292
#define LESS_OR_EQUAL 293
#define OVER_OR_EQUAL 294
#define ASSIGN 295
#define R_NOTE 296
#define L_NOTE 297
#define ADD 298
#define SUB 299
#define MUL 300
#define DIV 301
#define EQUAL 302
#define LESS 303
#define OVER 304
#define L_BRACKET 305
#define R_BRACKET 306
#define L_SQUARE 307
#define R_SQUARE 308
#define COLON 309
#define DOT 310
#define SEMICOLON 311
#define COMMA 312
#define PRIME 313
#define IDENTIFIER 314
#define INTEGER 315
#define BOOL_CONST 316
#define CHAR_CONST 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "parser.y"

	char* str;
    struct express *exp;

#line 186 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
