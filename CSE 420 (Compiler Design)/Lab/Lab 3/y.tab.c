/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "syntax_analyzer.y"


#include"symbol_info.h"

#define YYSTYPE symbol_info*

int yyparse(void);
int yylex(void);

extern FILE *yyin;


ofstream outlog;

int lines = 1;

// declare any other variables or functions needed here



void yyerror(const char* msg) {
    outlog << "Syntax Error at line " << lines << ": " << msg << " near '" << "'" << endl;
}



/* Line 371 of yacc.c  */
#line 95 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     ID = 261,
     LPAREN = 262,
     RPAREN = 263,
     COMMA = 264,
     LCURL = 265,
     RCURL = 266,
     SEMICOLON = 267,
     INT = 268,
     FLOAT = 269,
     VOID = 270,
     LTHIRD = 271,
     RTHIRD = 272,
     CONST_INT = 273,
     CONST_FLOAT = 274,
     DEFAULT = 275,
     WHILE = 276,
     PRINTLN = 277,
     RETURN = 278,
     ASSIGNOP = 279,
     LOGICOP = 280,
     RELOP = 281,
     ADDOP = 282,
     MULOP = 283,
     NOT = 284,
     INCOP = 285,
     DECOP = 286,
     DO = 287,
     BREAK = 288,
     CONTINUE = 289,
     CHAR = 290,
     DOUBLE = 291,
     SWITCH = 292,
     CASE = 293
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define ID 261
#define LPAREN 262
#define RPAREN 263
#define COMMA 264
#define LCURL 265
#define RCURL 266
#define SEMICOLON 267
#define INT 268
#define FLOAT 269
#define VOID 270
#define LTHIRD 271
#define RTHIRD 272
#define CONST_INT 273
#define CONST_FLOAT 274
#define DEFAULT 275
#define WHILE 276
#define PRINTLN 277
#define RETURN 278
#define ASSIGNOP 279
#define LOGICOP 280
#define RELOP 281
#define ADDOP 282
#define MULOP 283
#define NOT 284
#define INCOP 285
#define DECOP 286
#define DO 287
#define BREAK 288
#define CONTINUE 289
#define CHAR 290
#define DOUBLE 291
#define SWITCH 292
#define CASE 293



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 237 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    21,    27,
      32,    36,    39,    41,    45,    48,    52,    54,    56,    58,
      62,    69,    71,    76,    78,    81,    83,    85,    87,    95,
     101,   109,   115,   121,   125,   127,   130,   132,   137,   139,
     143,   145,   149,   151,   155,   157,   161,   163,   167,   170,
     173,   175,   177,   182,   186,   188,   190,   193,   196,   198,
     199,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    41,    -1,    41,    42,    -1,    42,    -1,
      46,    -1,    43,    -1,    47,     6,     7,    44,     8,    45,
      -1,    47,     6,     7,     8,    45,    -1,    44,     9,    47,
       6,    -1,    44,     9,    47,    -1,    47,     6,    -1,    47,
      -1,    10,    49,    11,    -1,    10,    11,    -1,    47,    48,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    48,     9,
       6,    -1,    48,     9,     6,    16,    18,    17,    -1,     6,
      -1,     6,    16,    18,    17,    -1,    50,    -1,    49,    50,
      -1,    46,    -1,    51,    -1,    45,    -1,     5,     7,    51,
      51,    53,     8,    50,    -1,     3,     7,    53,     8,    50,
      -1,     3,     7,    53,     8,    50,     4,    50,    -1,    21,
       7,    53,     8,    50,    -1,    22,     7,     6,     8,    12,
      -1,    23,    53,    12,    -1,    12,    -1,    53,    12,    -1,
       6,    -1,     6,    16,    53,    17,    -1,    54,    -1,    52,
      24,    54,    -1,    55,    -1,    55,    25,    55,    -1,    56,
      -1,    56,    26,    56,    -1,    57,    -1,    56,    27,    57,
      -1,    58,    -1,    57,    28,    58,    -1,    27,    58,    -1,
      29,    58,    -1,    59,    -1,    52,    -1,     6,     7,    60,
       8,    -1,     7,    53,     8,    -1,    18,    -1,    19,    -1,
      52,    30,    -1,    52,    31,    -1,    61,    -1,    -1,    61,
       9,    54,    -1,    54,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    39,    46,    55,    62,    72,    79,    89,
      96,   103,   110,   119,   126,   135,   144,   151,   158,   167,
     174,   181,   188,   196,   203,   212,   219,   226,   233,   240,
     247,   254,   261,   268,   277,   284,   293,   300,   309,   316,
     325,   332,   341,   348,   357,   364,   373,   380,   389,   396,
     403,   412,   419,   426,   433,   440,   447,   454,   463,   471,
     479,   486
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "ID", "LPAREN",
  "RPAREN", "COMMA", "LCURL", "RCURL", "SEMICOLON", "INT", "FLOAT", "VOID",
  "LTHIRD", "RTHIRD", "CONST_INT", "CONST_FLOAT", "DEFAULT", "WHILE",
  "PRINTLN", "RETURN", "ASSIGNOP", "LOGICOP", "RELOP", "ADDOP", "MULOP",
  "NOT", "INCOP", "DECOP", "DO", "BREAK", "CONTINUE", "CHAR", "DOUBLE",
  "SWITCH", "CASE", "$accept", "start", "program", "unit",
  "func_definition", "parameter_list", "compound_statement",
  "var_declaration", "type_specifier", "declaration_list", "statements",
  "statement", "expression_statement", "variable", "expression",
  "logic_expression", "rel_expression", "simple_expression", "term",
  "unary_expression", "factor", "argument_list", "arguments", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    43,    43,    44,
      44,    44,    44,    45,    45,    46,    47,    47,    47,    48,
      48,    48,    48,    49,    49,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     5,     4,
       3,     2,     1,     3,     2,     3,     1,     1,     1,     3,
       6,     1,     4,     1,     2,     1,     1,     1,     7,     5,
       7,     5,     5,     3,     1,     2,     1,     4,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     2,     2,
       1,     1,     4,     3,     1,     1,     2,     2,     1,     0,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    16,    17,    18,     0,     2,     4,     6,     5,     0,
       1,     3,    21,     0,     0,     0,     0,    15,     0,     0,
      12,     0,    19,     0,     8,     0,     0,    11,    22,     0,
       0,     0,    36,     0,    14,    34,    54,    55,     0,     0,
       0,     0,     0,    27,    25,     0,     0,    23,    26,    51,
       0,    38,    40,    42,    44,    46,    50,     7,    10,     0,
       0,     0,    59,     0,     0,     0,     0,     0,    51,    48,
      49,    21,    13,    24,     0,    56,    57,    35,     0,     0,
       0,     0,     9,    20,     0,     0,    61,     0,    58,     0,
      53,     0,     0,    33,    39,    41,    43,    45,    47,     0,
       0,    52,     0,    37,     0,     0,    29,     0,    60,    31,
      32,     0,     0,    30,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    19,    43,    44,    45,    13,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    87,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -59
static const yytype_int16 yypact[] =
{
      44,   -59,   -59,   -59,    11,    44,   -59,   -59,   -59,    23,
     -59,   -59,     1,    19,    38,    -3,    27,   -59,    37,    41,
      31,    43,    48,    67,   -59,    37,    44,   -59,   -59,    69,
      59,    64,     3,   135,   -59,   -59,   -59,   -59,    84,    85,
     135,   135,   135,   -59,   -59,    87,    92,   -59,   -59,    -6,
      88,   -59,    76,    49,    80,   -59,   -59,   -59,   103,    95,
     135,    36,   135,   135,   108,   135,   111,   106,    53,   -59,
     -59,   109,   -59,   -59,   135,   -59,   -59,   -59,   135,   135,
     135,   135,   -59,   -59,   118,    36,   -59,   120,   124,   126,
     -59,   129,   137,   -59,   -59,   -59,   107,    80,   -59,   117,
     135,   -59,   135,   -59,   117,   136,   143,   141,   -59,   -59,
     -59,   117,   117,   -59,   -59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,   -59,   -59,   145,   -59,   -59,    -5,    21,     9,   -59,
     -59,   -43,   -49,   -40,   -33,   -58,    73,    77,    72,   -36,
     -59,   -59,   -59
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      64,    68,    68,    73,    86,    69,    70,    67,    14,     9,
      62,    10,    85,    24,     9,    21,    94,    15,    74,    63,
      57,     8,    68,    20,    75,    76,     8,    84,    16,    12,
      89,    17,    91,    22,    68,    58,   100,    27,    68,    68,
      68,    68,    32,    33,   108,    98,    18,    23,    35,    25,
      26,     1,     2,     3,    36,    37,   106,     1,     2,     3,
      28,   109,    68,    41,    29,    42,    60,   107,   113,   114,
      30,    61,    31,    32,    33,    79,    80,    23,    34,    35,
       1,     2,     3,    75,    76,    36,    37,    59,    38,    39,
      40,    65,    66,    71,    41,    30,    42,    31,    32,    33,
      77,    78,    23,    72,    35,     1,     2,     3,    81,    82,
      36,    37,    83,    38,    39,    40,    90,    92,    93,    41,
      30,    42,    31,    32,    33,    15,    99,    23,   101,    35,
       1,     2,     3,   102,    80,    36,    37,   104,    38,    39,
      40,    32,    33,   103,    41,   105,    42,   111,   110,   112,
      11,    95,    97,    36,    37,     0,    96,     0,     0,     0,
       0,     0,    41,     0,    42
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-59)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      33,    41,    42,    46,    62,    41,    42,    40,     7,     0,
       7,     0,    61,    18,     5,    18,    74,    16,    24,    16,
      25,     0,    62,    14,    30,    31,     5,    60,     9,     6,
      63,    12,    65,     6,    74,    26,    85,     6,    78,    79,
      80,    81,     6,     7,   102,    81,     8,    10,    12,     8,
       9,    13,    14,    15,    18,    19,    99,    13,    14,    15,
      17,   104,   102,    27,    16,    29,     7,   100,   111,   112,
       3,     7,     5,     6,     7,    26,    27,    10,    11,    12,
      13,    14,    15,    30,    31,    18,    19,    18,    21,    22,
      23,     7,     7,     6,    27,     3,    29,     5,     6,     7,
      12,    25,    10,    11,    12,    13,    14,    15,    28,     6,
      18,    19,    17,    21,    22,    23,     8,     6,    12,    27,
       3,    29,     5,     6,     7,    16,     8,    10,     8,    12,
      13,    14,    15,     9,    27,    18,    19,     8,    21,    22,
      23,     6,     7,    17,    27,     8,    29,     4,    12,     8,
       5,    78,    80,    18,    19,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    14,    15,    40,    41,    42,    43,    46,    47,
       0,    42,     6,    48,     7,    16,     9,    12,     8,    44,
      47,    18,     6,    10,    45,     8,     9,     6,    17,    16,
       3,     5,     6,     7,    11,    12,    18,    19,    21,    22,
      23,    27,    29,    45,    46,    47,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    45,    47,    18,
       7,     7,     7,    16,    53,     7,     7,    53,    52,    58,
      58,     6,    11,    50,    24,    30,    31,    12,    25,    26,
      27,    28,     6,    17,    53,    51,    54,    60,    61,    53,
       8,    53,     6,    12,    54,    55,    56,    57,    58,     8,
      51,     8,     9,    17,     8,     8,    50,    53,    54,    50,
      12,     4,     8,    50,    50
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
      yychar = YYLEX;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 34 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" start : program "<<endl<<endl;
	}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 40 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" program : program unit "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()+"\n"+(yyvsp[(2) - (2)])->getname()<<endl<<endl;
		
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+"\n"+(yyvsp[(2) - (2)])->getname(),"program");
	}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 47 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " program : unit " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "program");
	}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 56 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " unit : var_declaration " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "unit");
	}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 63 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " unit : func_definition " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "unit");
	}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 73 "syntax_analyzer.y"
    {	
		outlog << "At line no: " << lines << " func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement " << endl << endl;
		outlog << (yyvsp[(1) - (6)])->getname() << (yyvsp[(2) - (6)])->getname() << "(" << (yyvsp[(4) - (6)])->getname() << ")\n" << (yyvsp[(6) - (6)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (6)])->getname() + (yyvsp[(2) - (6)])->getname() + "(" + (yyvsp[(4) - (6)])->getname() + ")\n" + (yyvsp[(6) - (6)])->getname(), "func_definition");
	}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 80 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN RPAREN compound_statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (5)])->getname()<<" "<<(yyvsp[(2) - (5)])->getname()<<"()\n"<<(yyvsp[(5) - (5)])->getname()<<endl<<endl;
			
		(yyval) = new symbol_info((yyvsp[(1) - (5)])->getname()+" "+(yyvsp[(2) - (5)])->getname()+"()\n"+(yyvsp[(5) - (5)])->getname(),"func_def");	
	}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 90 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " parameter_list : parameter_list COMMA type_specifier ID " << endl << endl;
		outlog << (yyvsp[(1) - (4)])->getname() << ", " + (yyvsp[(3) - (4)])->getname() << " " << (yyvsp[(4) - (4)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname() + ", " + (yyvsp[(3) - (4)])->getname() + " " + (yyvsp[(4) - (4)])->getname(), "parameter_list");
	}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 97 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " parameter_list : parameter_list COMMA type_specifier " << endl << endl;
		outlog << (yyvsp[(1) - (3)])->getname() << ", " + (yyvsp[(3) - (3)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname() + ", " + (yyvsp[(3) - (3)])->getname(), "parameter_list");
	}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 104 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " parameter_list : type_specifier ID " << endl << endl;
		outlog << (yyvsp[(1) - (2)])->getname() << (yyvsp[(2) - (2)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname() + (yyvsp[(2) - (2)])->getname(), "parameter_list");
	}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 111 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " parameter_list : type_specifier " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "parameter_list");
	}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 120 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " compound_statement : LCURL statements RCURL " << endl << endl;
		outlog << "{\n" + (yyvsp[(2) - (3)])->getname() + "}\n" << endl << endl;

		(yyval) = new symbol_info("{\n" + (yyvsp[(2) - (3)])->getname() + "}\n", "compound_statement");
	}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 127 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " compound_statement : LCURL RCURL " << endl << endl;
		outlog << "{}" << endl << endl;

		(yyval) = new symbol_info("{}", "compound_statement");
	}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 136 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " var_declaration : type_specifier declaration_list SEMICOLON " << endl << endl;
		outlog << (yyvsp[(1) - (3)])->getname() << (yyvsp[(2) - (3)])->getname() << ";"  << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname() + (yyvsp[(2) - (3)])->getname() + ";\n", "var_declaration");
	}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 145 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " type_specifier : INT " << endl << endl;
		outlog << "int " << endl << endl;

		(yyval) = new symbol_info("int ", "type_specifier");
	}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 152 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " type_specifier : FLOAT " << endl << endl;
		outlog << "float " << endl << endl;

		(yyval) = new symbol_info("float ", "type_specifier");
	}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 159 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " type_specifier : VOID " << endl << endl;
		outlog << "void " << endl << endl;

		(yyval) = new symbol_info("void ", "type_specifier");
	}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 168 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " declaration_list : declaration_list COMMA ID " << endl << endl;
		outlog << (yyvsp[(1) - (3)])->getname() << ", " << (yyvsp[(3) - (3)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname() + ", " + (yyvsp[(3) - (3)])->getname(), "declaration_list");
	}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 175 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD " << endl << endl;
		outlog << (yyvsp[(1) - (6)])->getname() << ", " << (yyvsp[(3) - (6)])->getname() << "[" << (yyvsp[(5) - (6)])->getname() << "]" << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (6)])->getname() + ", " + (yyvsp[(3) - (6)])->getname() + "[" + (yyvsp[(5) - (6)])->getname() + "]", "declaration_list");
	}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 182 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " declaration_list : ID " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "declaration_list");
	}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 189 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " declaration_list : ID LTHIRD CONST_INT RTHIRD " << endl << endl;
		outlog << (yyvsp[(1) - (4)])->getname() << "[" << (yyvsp[(3) - (4)])->getname() << "]" << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname() + "[" + (yyvsp[(3) - (4)])->getname() + "]", "declaration_list");
	}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 197 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statements : statement " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "statements");
	}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 204 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statements : statements statement " << endl << endl;
		outlog << (yyvsp[(1) - (2)])->getname() << (yyvsp[(2) - (2)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname() + (yyvsp[(2) - (2)])->getname(), "statements");
	}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 213 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statement : var_declaration " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "statement");
	}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 220 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statement : expression_statement " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "statement");
	}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 227 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statement : compound_statement " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "statement");
	}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 234 "syntax_analyzer.y"
    {
	    	outlog<<"At line no: "<<lines<<" statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement "<<endl<<endl;
			outlog<<"for("<<(yyvsp[(3) - (7)])->getname()<<(yyvsp[(4) - (7)])->getname()<<(yyvsp[(5) - (7)])->getname()<<")\n"<<(yyvsp[(7) - (7)])->getname()<<endl<<endl;
			
			(yyval) = new symbol_info("for("+(yyvsp[(3) - (7)])->getname()+(yyvsp[(4) - (7)])->getname()+(yyvsp[(5) - (7)])->getname()+")\n"+(yyvsp[(7) - (7)])->getname(),"statement");
	  }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 241 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statement : IF LPAREN expression RPAREN statement " << endl << endl;
		outlog<<"if("<<(yyvsp[(3) - (5)])->getname()<<")\n"<<(yyvsp[(5) - (5)])->getname()<<endl<<endl;
		
		(yyval) = new symbol_info("if(" + (yyvsp[(3) - (5)])->getname() + ")\n" + (yyvsp[(5) - (5)])->getname(), "statement");
	}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 248 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statement : IF LPAREN expression RPAREN statement ELSE statement " << endl << endl;
		outlog << "if("<<(yyvsp[(3) - (7)])->getname()<<")\n"<<(yyvsp[(5) - (7)])->getname()<<"else\n" << (yyvsp[(7) - (7)])->getname()<<endl<<endl;

		(yyval) = new symbol_info("if(" + (yyvsp[(3) - (7)])->getname() + ")\n" + (yyvsp[(5) - (7)])->getname() + "else\n" + (yyvsp[(7) - (7)])->getname(), "statement");
	}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 255 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statement : WHILE LPAREN expression RPAREN statement " << endl << endl;
		outlog << "while(" << (yyvsp[(3) - (5)])->getname() + ")\n" << (yyvsp[(5) - (5)])->getname() << endl << endl;
		
		(yyval) = new symbol_info("while(" + (yyvsp[(3) - (5)])->getname() + ")\n" + (yyvsp[(5) - (5)])->getname(), "statement");
	}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 262 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statement : PRINTLN LPAREN ID RPAREN SEMICOLON " << endl << endl;
		outlog << "printf(" << (yyvsp[(3) - (5)])->getname() << ");" << endl << endl;

		(yyval) = new symbol_info("printf(" + (yyvsp[(3) - (5)])->getname() + ");\n", "statement");
	}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 269 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " statement : RETURN expression SEMICOLON " << endl << endl;
		outlog << "return " << (yyvsp[(2) - (3)])->getname() << ";" << endl << endl;
		
		(yyval) = new symbol_info("return " + (yyvsp[(2) - (3)])->getname() + ";\n", "statement");
	}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 278 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " expression_statement : SEMICOLON " << endl << endl;
		outlog << ";" << endl << endl;

		(yyval) = new symbol_info(";\n", "expression_statement");
	}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 285 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " expression_statement : expression SEMICOLON " << endl << endl;
		outlog << (yyvsp[(1) - (2)])->getname() << ";\n" << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname() + ";\n", "expression_statement");
	}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 294 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " variable : ID " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "variable");
	}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 301 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " variable : ID LTHIRD expression RTHIRD " << endl << endl;
		outlog << (yyvsp[(1) - (4)])->getname() << "[" << (yyvsp[(3) - (4)])->getname() << "]" << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname() + "[" + (yyvsp[(3) - (4)])->getname() + "]", "variable");
	}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 310 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " expression : logic_expression " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "expression");
	}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 317 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " expression : variable ASSIGNOP logic_expression " << endl << endl;
		outlog << (yyvsp[(1) - (3)])->getname() << "=" << (yyvsp[(3) - (3)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname() + "=" + (yyvsp[(3) - (3)])->getname(), "expression");
	}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 326 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " logic_expression : rel_expression " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "logic_expression");
	}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 333 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " logic_expression : rel_expression LOGICOP rel_expression " << endl << endl;
		outlog << (yyvsp[(1) - (3)])->getname() << (yyvsp[(2) - (3)])->getname() << (yyvsp[(3) - (3)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname() + (yyvsp[(2) - (3)])->getname() + (yyvsp[(3) - (3)])->getname(), "logic_expression");
	}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 342 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " rel_expression : simple_expression " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "rel_expression");
	}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 349 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " rel_expression : simple_expression RELOP simple_expression " << endl << endl;
		outlog << (yyvsp[(1) - (3)])->getname() << (yyvsp[(2) - (3)])->getname() << (yyvsp[(3) - (3)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname() + (yyvsp[(2) - (3)])->getname() + (yyvsp[(3) - (3)])->getname(), "rel_expression");
	}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 358 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " simple_expression : term " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "simple_expression");
	}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 365 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " simple_expression : simple_expression ADDOP term " << endl << endl;
		outlog << (yyvsp[(1) - (3)])->getname() << "+" << (yyvsp[(3) - (3)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname() + "+" + (yyvsp[(3) - (3)])->getname(), "simple_expression");
	}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 374 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " term : unary_expression " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "term");
	}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 381 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " term : term MULOP unary_expression " << endl << endl;
		outlog << (yyvsp[(1) - (3)])->getname() << (yyvsp[(2) - (3)])->getname() << (yyvsp[(3) - (3)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname() + (yyvsp[(2) - (3)])->getname() + (yyvsp[(3) - (3)])->getname(), "term");
	}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 390 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " unary_expression : ADDOP unary_expression " << endl << endl;
		outlog << "+" << (yyvsp[(2) - (2)])->getname() << endl << endl;

		(yyval) = new symbol_info("+" + (yyvsp[(2) - (2)])->getname(), "unary_expression");
	}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 397 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " unary_expression : NOT unary_expression " << endl << endl;
		outlog << (yyvsp[(1) - (2)])->getname() << (yyvsp[(2) - (2)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname() + (yyvsp[(2) - (2)])->getname(), "unary_expression");
	}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 404 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " unary_expression : factor " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "unary_expression");
	}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 413 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " factor : variable " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "factor");
	}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 420 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " factor : ID LPAREN argument_list RPAREN " << endl << endl;
		outlog << (yyvsp[(1) - (4)])->getname() << "(" << (yyvsp[(3) - (4)])->getname() << ")" << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname() + "(" + (yyvsp[(3) - (4)])->getname() + ")", "factor");
	}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 427 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " factor : LPAREN expression RPAREN " << endl << endl;
		outlog << "(" << (yyvsp[(2) - (3)])->getname() << ")" << endl << endl;

		(yyval) = new symbol_info("(" + (yyvsp[(2) - (3)])->getname() + ")\n", "factor");
	}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 434 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " factor : CONST_INT " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "factor");
	}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 441 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " factor : CONST_FLOAT " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "factor");
	}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 448 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " factor : variable INCOP " << endl << endl;
		outlog << (yyvsp[(1) - (2)])->getname() << (yyvsp[(2) - (2)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname() + (yyvsp[(2) - (2)])->getname(), "factor");
	}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 455 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " factor : variable DECOP " << endl << endl;
		outlog << (yyvsp[(1) - (2)])->getname() << (yyvsp[(2) - (2)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname() + (yyvsp[(2) - (2)])->getname(), "factor");
	}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 464 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " argument_list : arguments " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "argument_list");
	}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 471 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " argument_list : ; " << endl << endl;
		outlog << "EMPTY" << endl << endl;

		(yyval) = new symbol_info("EMPTY", "argument_list");
	}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 480 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " arguments : arguments COMMA logic_expression " << endl << endl;
		outlog << (yyvsp[(1) - (3)])->getname() << ", " << (yyvsp[(3) - (3)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname() + ", " + (yyvsp[(3) - (3)])->getname(), "arguments");
	}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 487 "syntax_analyzer.y"
    {
		outlog << "At line no: " << lines << " arguments : logic_expression " << endl << endl;
		outlog << (yyvsp[(1) - (1)])->getname() << endl << endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "arguments");
	}
    break;


/* Line 1792 of yacc.c  */
#line 2198 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 496 "syntax_analyzer.y"


int main(int argc, char *argv[])
{
	if(argc != 2) 
	{
        // check if filename given
	}
	yyin = fopen(argv[1], "r");
	outlog.open("20301099_log.txt", ios::trunc);
	
	if(yyin == NULL)
	{
		cout<<"Couldn't open file"<<endl;
		return 0;
	}
    
	yyparse();
	
	//print number of lines
	outlog << "Total lines: " << lines;
	
	outlog.close();
	
	fclose(yyin);
	
	return 0;
}