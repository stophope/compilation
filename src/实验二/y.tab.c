/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include "header.h"
#include "y.tab.h"
extern int yylineno;

#line 76 "y.tab.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 248 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   98

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  100

#define YYUNDEFTOK  2
#define YYMAXUTOK   317

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    61,    64,    68,    71,    75,    78,    84,
      90,    95,   101,   106,   111,   116,   121,   126,   132,   139,
     145,   154,   159,   170,   175,   182,   192,   197,   204,   213,
     219,   225,   230,   236,   242,   247,   251,   256,   260,   264,
     271,   279,   285,   293,   299,   304,   312,   315,   318,   335,
     340,   400,   404,   408,   412,   416,   420,   427,   429,   431
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ARRAY", "BEGIN_", "BOOL", "CALL",
  "CASE", "CHAR", "CONSTANT", "DIM", "DO", "ELSE", "END", "FALSE", "FOR",
  "IF", "INPUT", "NOT", "OF", "OR", "OUTPUT", "PROCEDURE", "PROGRAM",
  "READ", "REAL", "REPEAT", "SET", "STOP", "THEN", "TO", "TRUE", "UNTIL",
  "VAR", "WHILE", "WRITE", "NOT_EQUAL", "LESS_OR_EQUAL", "OVER_OR_EQUAL",
  "ASSIGN", "R_NOTE", "L_NOTE", "ADD", "SUB", "MUL", "DIV", "EQUAL",
  "LESS", "OVER", "L_BRACKET", "R_BRACKET", "L_SQUARE", "R_SQUARE",
  "COLON", "DOT", "SEMICOLON", "COMMA", "PRIME", "IDENTIFIER", "INTEGER",
  "BOOL_CONST", "CHAR_CONST", "$accept", "START", "VARIABLE_EXPLAIN",
  "VARIABLE_DEFINITION", "IDENTIFIER_LIST", "COMPOUND_SENTENCE",
  "SENTENCE_LIST", "SUB_SENTENCE_LIST", "SENTENCE", "ASSIGN_SENTENCE",
  "C_IF_SENTENCE", "T_IF_SENTENCE", "IF_SENTENCE", "W", "D_WHILE_SENTENCE",
  "WHILE_SENTENCE", "R", "T_REPEAT_SENTENCE", "REPEAT_SENTENCE",
  "CAL_EXPRESSION", "ITEM", "FACTOR", "CAL_NUM", "BOOL_EXPRESSION",
  "BOOL_ITEM", "BOOL_FACTOR", "BOOL_NUM", "OP", "TYPE", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF -40

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))

#define YYTABLE_NINF -49

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      15,   -38,    26,   -15,   -40,    17,     4,    50,     7,   -40,
      11,    -5,    18,     4,    -4,   -12,   -40,   -40,    39,   -40,
     -10,    -5,   -40,   -40,    -5,    -5,   -40,   -12,    -5,   -40,
      -5,   -12,   -40,   -40,   -40,   -40,   -40,   -40,    22,   -40,
     -12,   -40,    -7,   -12,     3,   -40,    38,   -17,   -40,   -40,
      -3,    77,   -40,   -40,    -7,   -40,   -40,   -40,    70,   -40,
       2,   -40,    51,    68,     4,   -40,    -7,   -40,   -40,    23,
     -11,   -40,   -40,   -40,    -7,    -7,   -40,   -40,   -40,    -7,
      -7,    -7,   -12,   -40,   -12,    14,   -40,   -40,   -40,   -40,
      -9,   -40,   -40,   -17,   -17,    14,   -40,   -40,    77,   -40
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,     0,     8,     3,
       0,     0,     0,     0,     0,     0,    26,    23,     0,    17,
       0,     0,    11,    13,     0,     0,    14,     0,     0,    15,
       0,     0,    16,     2,     7,    58,    59,    57,     0,    47,
       0,    46,     0,     0,    38,    37,     0,    31,    34,    35,
       0,    41,    43,    44,     0,     9,    12,    10,    21,    22,
       0,    25,     0,    28,     6,    45,     0,    38,    36,     0,
       0,    52,    53,    54,     0,     0,    56,    51,    55,     0,
       0,     0,     0,    19,     0,    18,    20,    24,    27,     5,
       0,    39,    49,    29,    30,    50,    32,    33,    40,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,   -40,    29,    81,    83,   -40,   -40,    67,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -35,
      -6,   -31,   -40,   -18,    16,   -39,   -40,   -40,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     9,    10,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    46,
      47,    48,    49,    50,    51,    52,    53,    79,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      11,    65,    35,    39,    55,    36,   -48,    40,    69,    60,
      82,    68,    15,    63,    87,   -48,   -48,   -48,    82,    85,
      41,     3,    16,    82,   -48,    70,     4,    83,    80,    81,
      17,    90,    42,   -48,    74,    75,   -48,    42,    43,     1,
      92,     5,    91,    66,    95,    99,    56,    44,    45,    96,
      97,     6,    67,    45,    18,    11,    37,    74,    75,   -48,
      71,    72,    73,     8,    13,    14,    74,    75,    93,    94,
      76,    77,    78,    33,    91,    71,    72,    73,    64,    54,
      84,    74,    75,    86,    88,    76,    77,    78,    57,    82,
      12,    58,    59,    89,    34,    61,     0,    62,    98
};

static const yytype_int8 yycheck[] =
{
       5,    40,     6,    15,    14,     9,     3,    19,    43,    27,
      21,    42,    17,    31,    12,    12,    13,    14,    21,    54,
      32,    59,    27,    21,    21,    43,     0,    30,    45,    46,
      35,    66,    44,    30,    43,    44,    33,    44,    50,    24,
      51,    56,    51,    50,    79,    84,    56,    59,    60,    80,
      81,    34,    59,    60,    59,     5,    60,    43,    44,    56,
      37,    38,    39,    59,    57,    54,    43,    44,    74,    75,
      47,    48,    49,    55,    51,    37,    38,    39,    56,    40,
       3,    43,    44,    13,    33,    47,    48,    49,    21,    21,
       7,    24,    25,    64,    13,    28,    -1,    30,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    64,    59,     0,    56,    34,    65,    59,    66,
      67,     5,    68,    57,    54,    17,    27,    35,    59,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    55,    67,     6,     9,    60,    91,    15,
      19,    32,    44,    50,    59,    60,    82,    83,    84,    85,
      86,    87,    88,    89,    40,    14,    56,    71,    71,    71,
      86,    71,    71,    86,    56,    88,    50,    59,    84,    82,
      86,    37,    38,    39,    43,    44,    47,    48,    49,    90,
      45,    46,    21,    30,     3,    82,    13,    12,    33,    66,
      82,    51,    51,    83,    83,    82,    84,    84,    87,    88
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    67,    67,    68,
      69,    69,    70,    71,    71,    71,    71,    71,    72,    73,
      74,    75,    75,    76,    77,    78,    79,    80,    81,    82,
      82,    82,    83,    83,    83,    84,    84,    85,    85,    85,
      86,    86,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     2,     0,     5,     4,     3,     1,     3,
       2,     1,     2,     1,     1,     1,     1,     1,     3,     3,
       3,     2,     2,     1,     3,     2,     1,     3,     2,     3,
       3,     1,     3,     3,     1,     1,     2,     1,     1,     3,
       3,     1,     3,     1,     1,     2,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 47 "parser.y"
    {
	printf("\nResult:\n");
    SYLIST[0].op="program";
    SYLIST[0].arg1=(yyvsp[-4].str);
    SYLIST[0].arg2="-";
    SYLIST[0].target="-";
    tot=tot+1;
    emit("sys","-","-","-");
    backpatch((yyvsp[-1].exp)->chain,tot);
    printSYL();
    system("pause");
    exit(0);
}
#line 1430 "y.tab.c"
    break;

  case 3:
#line 61 "parser.y"
    {
	print_rule(1);
}
#line 1438 "y.tab.c"
    break;

  case 4:
#line 64 "parser.y"
    {
	print_rule(2);
}
#line 1446 "y.tab.c"
    break;

  case 5:
#line 68 "parser.y"
    {
	print_rule(3);
}
#line 1454 "y.tab.c"
    break;

  case 6:
#line 71 "parser.y"
    {
	print_rule(4);
}
#line 1462 "y.tab.c"
    break;

  case 7:
#line 75 "parser.y"
    {
	print_rule(5);
}
#line 1470 "y.tab.c"
    break;

  case 8:
#line 78 "parser.y"
    {
	print_rule(6);
}
#line 1478 "y.tab.c"
    break;

  case 9:
#line 84 "parser.y"
    {
	print_rule(7);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=(yyvsp[-1].exp)->chain;
}
#line 1488 "y.tab.c"
    break;

  case 10:
#line 90 "parser.y"
    {
    print_rule(8);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=(yyvsp[0].exp)->chain;
}
#line 1498 "y.tab.c"
    break;

  case 11:
#line 95 "parser.y"
    {
	print_rule(9);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=(yyvsp[0].exp)->chain;
}
#line 1508 "y.tab.c"
    break;

  case 12:
#line 101 "parser.y"
    {
	//print_rule(9);
    backpatch((yyvsp[-1].exp)->chain,tot+1);
}
#line 1517 "y.tab.c"
    break;

  case 13:
#line 106 "parser.y"
    {
	print_rule(10);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=NULL;
}
#line 1527 "y.tab.c"
    break;

  case 14:
#line 111 "parser.y"
    {
	print_rule(11);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=(yyvsp[0].exp)->chain;
}
#line 1537 "y.tab.c"
    break;

  case 15:
#line 116 "parser.y"
    {
	print_rule(12);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=(yyvsp[0].exp)->chain;
}
#line 1547 "y.tab.c"
    break;

  case 16:
#line 121 "parser.y"
    {
	print_rule(13);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=(yyvsp[0].exp)->chain;
}
#line 1557 "y.tab.c"
    break;

  case 17:
#line 126 "parser.y"
    {
	print_rule(14);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=(yyvsp[0].exp)->chain;
}
#line 1567 "y.tab.c"
    break;

  case 18:
#line 132 "parser.y"
    {
    print_rule(15);
    tot=tot+1;
    emit(":=",(yyvsp[0].str),"-",(yyvsp[-2].str));
}
#line 1577 "y.tab.c"
    break;

  case 19:
#line 139 "parser.y"
    {
    backpatch((yyvsp[-1].exp)->true_out,tot+1);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=(yyvsp[-1].exp)->false_out;
}
#line 1587 "y.tab.c"
    break;

  case 20:
#line 145 "parser.y"
    {
    tot=tot+1;
    struct ListNode* q=create_listnode(tot);
    emit("j","-","-","-");
    backpatch((yyvsp[-2].exp)->chain,tot+1);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=merge(q,(yyvsp[-1].exp)->chain);
}
#line 1600 "y.tab.c"
    break;

  case 21:
#line 154 "parser.y"
    {
    print_rule(16);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=merge((yyvsp[-1].exp)->chain,(yyvsp[0].exp)->chain);
}
#line 1610 "y.tab.c"
    break;

  case 22:
#line 159 "parser.y"
    {
    print_rule(17);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->chain=merge((yyvsp[-1].exp)->chain,(yyvsp[0].exp)->chain);
    //tot=tot+1;
    //struct ListNode* q=create_listnode(tot);
    //emit("j","-","-","-");
    //$$->chain=merge(temp,q);
}
#line 1624 "y.tab.c"
    break;

  case 23:
#line 170 "parser.y"
    {
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->codebegin=tot+1;
}
#line 1633 "y.tab.c"
    break;

  case 24:
#line 175 "parser.y"
    {
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->codebegin=(yyvsp[-2].exp)->codebegin;
    backpatch((yyvsp[-1].exp)->true_out,tot+1);
    (yyval.exp)->chain=(yyvsp[-1].exp)->false_out;
}
#line 1644 "y.tab.c"
    break;

  case 25:
#line 182 "parser.y"
    {
	print_rule(18);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    backpatch((yyvsp[0].exp)->chain,(yyvsp[-1].exp)->codebegin);
    tot=tot+1;
    emit("j","-","-",numbers[(yyvsp[-1].exp)->codebegin]);
    (yyval.exp)->chain=(yyvsp[-1].exp)->chain;
}
#line 1657 "y.tab.c"
    break;

  case 26:
#line 192 "parser.y"
    {
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)->codebegin=tot+1;
}
#line 1666 "y.tab.c"
    break;

  case 27:
#line 197 "parser.y"
    {
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    backpatch((yyvsp[-1].exp)->chain,tot+1);
    //$$->chain=$2->chain;
    (yyval.exp)->codebegin=(yyvsp[-2].exp)->codebegin;
}
#line 1677 "y.tab.c"
    break;

  case 28:
#line 204 "parser.y"
    {
	print_rule(19);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    backpatch((yyvsp[0].exp)->false_out,(yyvsp[-1].exp)->codebegin);
    (yyval.exp)->chain=(yyvsp[0].exp)->true_out;
}
#line 1688 "y.tab.c"
    break;

  case 29:
#line 213 "parser.y"
    {
    print_rule(20);
    (yyval.str) = arr[pop];
    tot=tot+1;
    emit("+",(yyvsp[-2].str),(yyvsp[0].str),arr[pop++]);
}
#line 1699 "y.tab.c"
    break;

  case 30:
#line 219 "parser.y"
    {
	print_rule(21);
    (yyval.str) = arr[pop];
    tot=tot+1;
    emit("-",(yyvsp[-2].str),(yyvsp[0].str),arr[pop++]);
}
#line 1710 "y.tab.c"
    break;

  case 31:
#line 225 "parser.y"
    {
    print_rule(22);
    (yyval.str) = (yyvsp[0].str);
}
#line 1719 "y.tab.c"
    break;

  case 32:
#line 230 "parser.y"
    {
    print_rule(23);
    (yyval.str) = arr[pop];
    tot=tot+1;
    emit("*",(yyvsp[-2].str),(yyvsp[0].str),arr[pop++]);
}
#line 1730 "y.tab.c"
    break;

  case 33:
#line 236 "parser.y"
    {
	print_rule(24);
    (yyval.str) = arr[pop];
    tot=tot+1;
    emit("/",(yyvsp[-2].str),(yyvsp[0].str),arr[pop++]);
}
#line 1741 "y.tab.c"
    break;

  case 34:
#line 242 "parser.y"
    {
    print_rule(25);
    (yyval.str) = (yyvsp[0].str); 
}
#line 1750 "y.tab.c"
    break;

  case 35:
#line 247 "parser.y"
    {
    print_rule(26);
     (yyval.str) = (yyvsp[0].str); 
}
#line 1759 "y.tab.c"
    break;

  case 36:
#line 251 "parser.y"
    {
	print_rule(27);
    (yyval.str) = (yyvsp[0].str);
}
#line 1768 "y.tab.c"
    break;

  case 37:
#line 256 "parser.y"
    {
    print_rule(28);
    (yyval.str) = (yyvsp[0].str);
}
#line 1777 "y.tab.c"
    break;

  case 38:
#line 260 "parser.y"
    {
    print_rule(29);
    (yyval.str) = (yyvsp[0].str);
}
#line 1786 "y.tab.c"
    break;

  case 39:
#line 264 "parser.y"
    {
    print_rule(30);
    (yyval.str)=(yyvsp[-1].str);
}
#line 1795 "y.tab.c"
    break;

  case 40:
#line 271 "parser.y"
    {
    print_rule(31);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)=create_express((yyvsp[-2].exp)->codebegin);
    backpatch((yyvsp[-2].exp)->false_out,(yyvsp[0].exp)->codebegin);
    (yyval.exp)->false_out=(yyvsp[0].exp)->false_out;
    (yyval.exp)->true_out=merge((yyvsp[-2].exp)->true_out,(yyvsp[0].exp)->true_out);
}
#line 1808 "y.tab.c"
    break;

  case 41:
#line 279 "parser.y"
    {
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)=(yyvsp[0].exp);
    print_rule(32);
}
#line 1818 "y.tab.c"
    break;

  case 42:
#line 285 "parser.y"
    {
    print_rule(33);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)=create_express((yyvsp[-2].exp)->codebegin);
    backpatch((yyvsp[-2].exp)->true_out,(yyvsp[0].exp)->codebegin);
    (yyval.exp)->true_out=(yyvsp[0].exp)->true_out;
    (yyval.exp)->false_out=merge((yyvsp[-2].exp)->false_out,(yyvsp[0].exp)->false_out);
}
#line 1831 "y.tab.c"
    break;

  case 43:
#line 293 "parser.y"
    {
    print_rule(34);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)=(yyvsp[0].exp);
}
#line 1841 "y.tab.c"
    break;

  case 44:
#line 299 "parser.y"
    {
    print_rule(35);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)=(yyvsp[0].exp);
}
#line 1851 "y.tab.c"
    break;

  case 45:
#line 304 "parser.y"
    {
    print_rule(36);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)=create_express((yyvsp[0].exp)->codebegin);
    (yyval.exp)->true_out=(yyvsp[0].exp)->false_out;
    (yyval.exp)->false_out=(yyvsp[0].exp)->true_out;
}
#line 1863 "y.tab.c"
    break;

  case 46:
#line 312 "parser.y"
    {
    print_rule(37);
}
#line 1871 "y.tab.c"
    break;

  case 47:
#line 315 "parser.y"
    {
    print_rule(37);
}
#line 1879 "y.tab.c"
    break;

  case 48:
#line 318 "parser.y"
    {
    print_rule(38);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    int nextstat,nextstat__;

    tot=tot+1;
    nextstat=tot;
    emit("jnz",(yyvsp[0].str),"-","-");

    tot=tot+1;
    nextstat__=tot;
    emit("j","-","-","-");

    (yyval.exp)=create_express(nextstat);
    (yyval.exp)->true_out=create_listnode(nextstat);
    (yyval.exp)->false_out=create_listnode(nextstat__);
}
#line 1901 "y.tab.c"
    break;

  case 49:
#line 335 "parser.y"
    {
    print_rule(39);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    (yyval.exp)=(yyvsp[-1].exp);
}
#line 1911 "y.tab.c"
    break;

  case 50:
#line 340 "parser.y"
    {
    print_rule(40);
    (yyval.exp)=(struct express*)malloc(sizeof(struct express));
    int nextstat,nextstat__;
    if (strcmp((yyvsp[-1].str), "LESS") == 0) {// A<C
        tot=tot+1;
        nextstat=tot;
        emit("j<",(yyvsp[-2].str),(yyvsp[0].str),"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp((yyvsp[-1].str), "OVER") == 0) {// A>C
        tot=tot+1;
        nextstat=tot;
        emit("j>",(yyvsp[-2].str),(yyvsp[0].str),"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp((yyvsp[-1].str), "EQUAL") == 0) {// A=C
        tot=tot+1;
        nextstat=tot;
        emit("j=",(yyvsp[-2].str),(yyvsp[0].str),"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp((yyvsp[-1].str), "NOT_EQUAL") == 0) {// A<>C
        tot=tot+1;
        nextstat=tot;
        emit("j<>",(yyvsp[-2].str),(yyvsp[0].str),"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp((yyvsp[-1].str), "LESS_OR_EQUAL") == 0) {// A<=C
        tot=tot+1;
        nextstat=tot;
        emit("j<=",(yyvsp[-2].str),(yyvsp[0].str),"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    if (strcmp((yyvsp[-1].str), "OVER_OR_EQUAL") == 0) {// A>=C
        tot=tot+1;
        nextstat=tot;
        emit("j>=",(yyvsp[-2].str),(yyvsp[0].str),"-");
        tot=tot+1;
        nextstat__=tot;
        emit("j","-","-","-");
    }
    
    (yyval.exp)=create_express(nextstat);
    (yyval.exp)->true_out=create_listnode(nextstat);
    (yyval.exp)->false_out=create_listnode(nextstat__);
}
#line 1973 "y.tab.c"
    break;

  case 51:
#line 400 "parser.y"
    {
    print_rule(43);
    (yyval.str)="LESS";
}
#line 1982 "y.tab.c"
    break;

  case 52:
#line 404 "parser.y"
    {
    print_rule(44);
    (yyval.str)="NOT_EQUAL";
}
#line 1991 "y.tab.c"
    break;

  case 53:
#line 408 "parser.y"
    {
    print_rule(45);
    (yyval.str)="LESS_OR_EQUAL";
}
#line 2000 "y.tab.c"
    break;

  case 54:
#line 412 "parser.y"
    {
    print_rule(46);
    (yyval.str)="OVER_OR_EQUAL";
}
#line 2009 "y.tab.c"
    break;

  case 55:
#line 416 "parser.y"
    {
    print_rule(47);
    (yyval.str)="OVER";
}
#line 2018 "y.tab.c"
    break;

  case 56:
#line 420 "parser.y"
    {
    print_rule(48);
    (yyval.str)="EQUAL";
}
#line 2027 "y.tab.c"
    break;

  case 57:
#line 427 "parser.y"
    {
    print_rule(49);
}
#line 2035 "y.tab.c"
    break;

  case 58:
#line 429 "parser.y"
    {
    print_rule(50);
}
#line 2043 "y.tab.c"
    break;

  case 59:
#line 431 "parser.y"
    {
    print_rule(51);
}
#line 2051 "y.tab.c"
    break;


#line 2055 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 436 "parser.y"




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
