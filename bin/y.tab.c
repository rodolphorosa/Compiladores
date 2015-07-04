/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/sintatica.y" /* yacc.c:339  */

#include <iostream>
#include <string>
//#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <stack>

#define YYSTYPE _atributos

using namespace std;

int nlinha = 1;
int nivel = -1;

// Estrutura dos atributos de um token

typedef struct
{
    string label;
    string traducao;
    string tipo;
    int tamanho;
} _atributos;

bool erro = false;
int yylex(void);
void yyerror(string);

// Estrutura de informações de uma variável
typedef struct _info_variavel
{
    string tipo;
    string nome_temp;
    int tamanho;
} info_variavel;

// Estrutura de operações
typedef struct _info_operacoes
{
    string tipo;
    int operando;
} info_operacoes;

// Mapa de variáveis
map<string, info_variavel> mapa_variaveis = map<string, info_variavel>();
map<string, string> mapa_variaveis_declaracao = map<string, string>();

vector< map<string, info_variavel> > pilha_variaveis = vector< map<string, info_variavel> >();
// Mapa de operações
map<string, info_operacoes> mapa_operacoes = map<string, info_operacoes>();
stack<string> pilha_labels_loop = stack<string>();
stack<string> pilha_labels_condicional = stack<string>();

vector<string> pilha_inicio_loop = vector<string>();
vector<string> pilha_fim_loop = vector<string>();
stack<string> label_final = stack<string>();
// Função para gerar nomes temporários para as variáveis
string gera_variavel_temporaria(string tipo, string nome="", int tamanho=0);
void adiciona_biblioteca_cabecalho(string nome_biblioteca);
void gera_mapa_cast();
info_variavel buscaID(string id);
void alteraID(string id, info_variavel nova_varivavel);
string geraLabel();

stringstream cabecalho;


#line 136 "bin/y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
#ifndef YY_YY_BIN_Y_TAB_H_INCLUDED
# define YY_YY_BIN_Y_TAB_H_INCLUDED
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
    TK_NUM = 258,
    TK_REAL = 259,
    TK_CHAR = 260,
    TK_STRING = 261,
    TK_ID = 262,
    TK_MAIN = 263,
    TK_BEGIN = 264,
    TK_END = 265,
    TK_ATR = 266,
    TK_SOMA = 267,
    TK_SUB = 268,
    TK_MUL = 269,
    TK_DIV = 270,
    TK_LOGICO = 271,
    TK_AND = 272,
    TK_OR = 273,
    TK_MENOR = 274,
    TK_MAIOR = 275,
    TK_MENOR_IGUAL = 276,
    TK_MAIOR_IGUAL = 277,
    TK_IGUAL = 278,
    TK_DIFERENTE = 279,
    TK_NOT = 280,
    TK_PLUSPLUS = 281,
    TK_SUBSUB = 282,
    TK_TIPO_INT = 283,
    TK_TIPO_STRING = 284,
    TK_TIPO_FLOAT = 285,
    TK_TIPO_CHAR = 286,
    TK_TIPO_BOOL = 287,
    TK_CONST = 288,
    TK_FUNCTION = 289,
    TK_WHILE = 290,
    TK_FOR = 291,
    TK_DO = 292,
    TK_IF = 293,
    TK_ELSE = 294,
    TK_ELIF = 295,
    TK_BREAK = 296,
    TK_CONTINUE = 297,
    TK_SUPERBREAK = 298,
    TK_SUPERCONTINUE = 299,
    TK_WRITE = 300,
    TK_WRITELN = 301,
    TK_READ = 302,
    TK_GLOBAL = 303
  };
#endif
/* Tokens.  */
#define TK_NUM 258
#define TK_REAL 259
#define TK_CHAR 260
#define TK_STRING 261
#define TK_ID 262
#define TK_MAIN 263
#define TK_BEGIN 264
#define TK_END 265
#define TK_ATR 266
#define TK_SOMA 267
#define TK_SUB 268
#define TK_MUL 269
#define TK_DIV 270
#define TK_LOGICO 271
#define TK_AND 272
#define TK_OR 273
#define TK_MENOR 274
#define TK_MAIOR 275
#define TK_MENOR_IGUAL 276
#define TK_MAIOR_IGUAL 277
#define TK_IGUAL 278
#define TK_DIFERENTE 279
#define TK_NOT 280
#define TK_PLUSPLUS 281
#define TK_SUBSUB 282
#define TK_TIPO_INT 283
#define TK_TIPO_STRING 284
#define TK_TIPO_FLOAT 285
#define TK_TIPO_CHAR 286
#define TK_TIPO_BOOL 287
#define TK_CONST 288
#define TK_FUNCTION 289
#define TK_WHILE 290
#define TK_FOR 291
#define TK_DO 292
#define TK_IF 293
#define TK_ELSE 294
#define TK_ELIF 295
#define TK_BREAK 296
#define TK_CONTINUE 297
#define TK_SUPERBREAK 298
#define TK_SUPERCONTINUE 299
#define TK_WRITE 300
#define TK_WRITELN 301
#define TK_READ 302
#define TK_GLOBAL 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BIN_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 283 "bin/y.tab.c" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,    50,     2,     2,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,   110,   136,   143,   149,   154,   158,   164,
     171,   178,   184,   195,   205,   215,   226,   231,   236,   255,
     260,   266,   272,   290,   301,   312,   334,   340,   358,   376,
     394,   413,   419,   429,   435,   443,   448,   452,   471,   475,
     493,   499,   506,   533,   537,   569,   585,   598,   603,   616,
     621,   634,   639,   652,   657,   670,   676,   684,   692,   700,
     707,   766,   774,   819,   827,   851,   860,   872,   881,   890,
     901,   909,   927,   933,   941,   948,   956,   963,   970,   978,
     992,   998,  1004,  1010,  1018,  1023,  1028,  1033,  1038,  1043,
    1050,  1055,  1061,  1066
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_NUM", "TK_REAL", "TK_CHAR",
  "TK_STRING", "TK_ID", "TK_MAIN", "TK_BEGIN", "TK_END", "TK_ATR",
  "TK_SOMA", "TK_SUB", "TK_MUL", "TK_DIV", "TK_LOGICO", "TK_AND", "TK_OR",
  "TK_MENOR", "TK_MAIOR", "TK_MENOR_IGUAL", "TK_MAIOR_IGUAL", "TK_IGUAL",
  "TK_DIFERENTE", "TK_NOT", "TK_PLUSPLUS", "TK_SUBSUB", "TK_TIPO_INT",
  "TK_TIPO_STRING", "TK_TIPO_FLOAT", "TK_TIPO_CHAR", "TK_TIPO_BOOL",
  "TK_CONST", "TK_FUNCTION", "TK_WHILE", "TK_FOR", "TK_DO", "TK_IF",
  "TK_ELSE", "TK_ELIF", "TK_BREAK", "TK_CONTINUE", "TK_SUPERBREAK",
  "TK_SUPERCONTINUE", "TK_WRITE", "TK_WRITELN", "TK_READ", "TK_GLOBAL",
  "'('", "')'", "';'", "','", "$accept", "S", "BLOCO", "BEGIN", "END",
  "COMANDOS", "COMANDO", "WRITE", "LOOP", "WHILE", "W", "FOR", "F", "D",
  "CONDICIONAL", "ELSE", "ELIF", "IF", "I", "ATRIBUICAO", "DECLARACAO",
  "E_OR", "E_AND", "E_REL", "E", "E_TEMP", "UNAL_OP", "UNAL", "VAL",
  "E_CAST", "TK_REL_OP", "TK_ARIT_OP_S", "TK_ARIT_OP_M", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,    40,
      41,    59,    44
};
# endif

#define YYPACT_NINF -90

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-90)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,    15,    37,    10,   -90,    11,    64,   -90,   -90,   120,
     -90,   -90,   -90,   -90,    69,   172,   -90,   167,    74,    75,
      76,    77,    79,    80,    82,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   167,   167,    83,    85,    63,   120,    86,
      46,   -90,    64,    49,    64,    50,    64,   -90,    64,    56,
     -90,   -90,    88,    93,   -90,    96,    20,   -90,   -90,   -90,
       6,   -90,   106,   -90,    88,   -90,   -90,   103,   110,   111,
     117,   123,    87,    88,    87,   -90,   124,   -90,   -90,   -90,
     -90,   -11,    90,   -90,   -90,   -90,   120,   -90,   167,   -90,
      -3,   102,   -90,   167,   167,   167,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   167,   167,   -90,   -90,   167,    88,
     -90,   -90,   167,   167,   167,   133,   167,   167,     6,   -90,
     172,   -90,     2,    69,   135,   108,   130,    95,    18,    28,
      93,   -90,    52,    20,   -90,   -90,    52,   -90,   -90,    88,
      88,    88,   -90,   -90,   -90,   124,   167,   167,   167,    64,
     104,   -90,   -90,   -10,    -4,    35,   -90,   167,    23,    23,
     -90,    38,   132,   134,   136,   137,    64,   -90,   -90,   -90,
     -90,   -90
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     4,     2,     7,
      73,    74,    75,    77,    78,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    31,    32,    40,    12,
      13,    14,    15,     0,     0,     0,     0,     0,     7,     0,
       0,    21,     0,     0,     0,     0,     0,    33,     0,     0,
      41,     9,    10,    57,    59,    61,    63,    11,    65,    70,
       0,    78,     0,    69,    66,    67,    68,    47,    55,    49,
      53,    51,    16,    20,    17,    18,    79,    81,    80,    82,
      83,     0,     0,     8,     5,     3,     7,    24,     0,    23,
       0,     0,    38,     0,     0,     0,    90,    91,    84,    85,
      86,    87,    88,    89,     0,     0,    92,    93,     0,    42,
      43,    79,     0,     0,     0,     0,     0,     0,     0,    72,
       0,     6,     0,     0,     0,     0,     0,     0,    36,     0,
      56,    58,    60,    62,    64,    46,    54,    48,    52,    50,
      19,    44,    45,    71,    25,     0,     0,     0,     0,     0,
       0,    34,    39,     0,     0,     0,    35,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,    27,    28,    30,
      29,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,    -6,   -90,   -90,   -35,   -90,   151,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -84,
      99,   -16,    60,   -52,   -89,    89,   -55,    84,   -13,   -90,
     -90,   -90,   -90
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    38,     9,    85,    39,    40,    72,    41,    42,
      43,    44,    45,    46,    47,   151,   128,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    82,
     104,   105,   108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       8,    64,    63,    83,   123,   110,   125,    94,    94,    10,
      11,    12,    13,    61,    94,   132,     1,    73,    73,    15,
      94,    81,    16,     3,   136,    20,    21,    22,    23,    24,
     123,    17,    18,    19,   106,   107,    87,     4,    89,   119,
      91,   158,    92,   131,   109,   124,    94,   159,    17,    18,
      19,   121,   144,    94,    62,    37,    94,   149,   150,     5,
     135,     6,   137,   142,    96,    97,    10,    11,    12,    13,
      61,   124,   122,     7,   162,   164,    15,   129,   152,    16,
      60,    65,    66,    67,    68,   160,    69,    70,   166,    71,
      75,    77,    76,    78,    79,    80,    84,    86,    88,    90,
     139,   140,   141,   163,   165,    93,    94,   143,    96,    97,
      95,    62,    37,   111,   112,    98,    99,   100,   101,   102,
     103,   113,   114,    10,    11,    12,    13,    14,   115,     7,
     153,   154,   155,    15,   116,   118,    16,   127,   138,   117,
     120,   161,   145,   156,   148,    17,    18,    19,    20,    21,
      22,    23,    24,   157,   130,    25,    26,    27,    28,   146,
     171,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      10,    11,    12,    13,    61,    10,    11,    12,    13,    61,
      15,   147,   167,    16,   168,    74,   169,   170,    16,   126,
       0,     0,   134,     0,   133,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    37,     0,     0,     0,
      62,    37
};

static const yytype_int16 yycheck[] =
{
       6,    17,    15,    38,     7,    60,    90,    18,    18,     3,
       4,     5,     6,     7,    18,   104,    28,    33,    34,    13,
      18,    37,    16,     8,   113,    28,    29,    30,    31,    32,
       7,    25,    26,    27,    14,    15,    42,     0,    44,    50,
      46,    51,    48,    95,    60,    48,    18,    51,    25,    26,
      27,    86,    50,    18,    48,    49,    18,    39,    40,    49,
     112,    50,   114,   118,    12,    13,     3,     4,     5,     6,
       7,    48,    88,     9,   158,   159,    13,    93,    50,    16,
      11,     7,     7,     7,     7,    50,     7,     7,    50,     7,
       7,    28,     7,    30,    31,    32,    10,    51,    49,    49,
     116,   117,   118,   158,   159,    49,    18,   120,    12,    13,
      17,    48,    49,     7,    11,    19,    20,    21,    22,    23,
      24,    11,    11,     3,     4,     5,     6,     7,    11,     9,
     146,   147,   148,    13,    11,    11,    16,    35,     5,    52,
      50,   157,     7,   149,    49,    25,    26,    27,    28,    29,
      30,    31,    32,    49,    94,    35,    36,    37,    38,    51,
     166,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       3,     4,     5,     6,     7,     3,     4,     5,     6,     7,
      13,    51,    50,    16,    50,    34,    50,    50,    16,    90,
      -1,    -1,   108,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    54,     8,     0,    49,    50,     9,    55,    56,
       3,     4,     5,     6,     7,    13,    16,    25,    26,    27,
      28,    29,    30,    31,    32,    35,    36,    37,    38,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    55,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      11,     7,    48,    81,    74,     7,     7,     7,     7,     7,
       7,     7,    60,    74,    60,     7,     7,    28,    30,    31,
      32,    74,    82,    58,    10,    57,    51,    55,    49,    55,
      49,    55,    55,    49,    18,    17,    12,    13,    19,    20,
      21,    22,    23,    24,    83,    84,    14,    15,    85,    74,
      79,     7,    11,    11,    11,    11,    11,    52,    11,    50,
      50,    58,    74,     7,    48,    72,    73,    35,    69,    74,
      75,    76,    77,    78,    80,    76,    77,    76,     5,    74,
      74,    74,    79,    81,    50,     7,    51,    51,    49,    39,
      40,    68,    50,    74,    74,    74,    55,    49,    51,    51,
      50,    74,    72,    79,    72,    79,    50,    50,    50,    50,
      50,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    56,    57,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      60,    59,    61,    61,    61,    62,    63,    64,    64,    64,
      64,    65,    66,    59,    67,    68,    68,    69,    69,    70,
      71,    59,    72,    72,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      84,    84,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     3,     1,     1,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     3,
       1,     1,     6,     2,     2,     4,     1,     8,     8,     8,
       8,     1,     1,     1,     4,     2,     0,     6,     0,     4,
       1,     1,     3,     3,     4,     4,     4,     2,     4,     2,
       4,     2,     4,     2,     4,     2,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     2,     2,     2,
       1,     4,     3,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
| yyreduce -- Do a reduction.  |
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
#line 87 "src/sintatica.y" /* yacc.c:1646  */
    {
                //ofstream myfile;
                //myfile.open ("example.c");
                //myfile << "Writing this to a file.\n";
                //printf(\"Resultado: %d\", " << tipo[contador] << ");\n\t 
                //cout << "$5.traducao";
                //cout << contador << "\n";

                //cout << $5.traducao << "\n\n";
                stringstream variaveis;
                for (std::map<string, string>::iterator it=mapa_variaveis_declaracao.begin(); it!=mapa_variaveis_declaracao.end(); ++it)
                        variaveis << it->second;
                adiciona_biblioteca_cabecalho("stdio.h");
                adiciona_biblioteca_cabecalho("string.h");
                adiciona_biblioteca_cabecalho("iostream");
                if(!erro) {
                    //cout << "/*Compilador FOCA*/\n" << "#include <iostream>\n#include<string.h>\n#include<stdio.h>\nint main(void)\n{\n" << $5.traducao << "\n\treturn 0;\n}" << endl; 
                    cout << cabecalho.str() << "\nusing namespace std;\nint main(void)\n{\n" << variaveis.str() << (yyvsp[0]).traducao << "\n\treturn 0;\n}\n\t" << endl; 
                } 
                //myfile.close();
            }
#line 1518 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "src/sintatica.y" /* yacc.c:1646  */
    {
                
                int i;
                for(i = 0; i < pilha_variaveis.size(); i++)
                for (std::map<string, info_variavel>::iterator it=pilha_variaveis[i].begin(); it!=pilha_variaveis[i].end(); ++it)
                {
                    stringstream variaveis;
                    if(it->second.tipo == "boolean")
                        variaveis << "\tint " << it->second.nome_temp << ";\n";
                    else if(it->second.tipo == "string")
                        variaveis << "\tchar " << it->second.nome_temp << "[" << it->second.tamanho << "];\n";
                    else if(it->second.tipo != "")
                        variaveis << "\t" << it->second.tipo << " " << it->second.nome_temp << ";\n";
                    if(mapa_variaveis_declaracao.find(variaveis.str()) == mapa_variaveis_declaracao.end())
                    {
                        mapa_variaveis_declaracao[variaveis.str()] = variaveis.str();
                    }
                }

                
                (yyval).traducao = (yyvsp[-1]).traducao;
                nivel--;
                pilha_variaveis.pop_back();
            }
#line 1547 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 137 "src/sintatica.y" /* yacc.c:1646  */
    {
                nivel++;
                pilha_variaveis.push_back(mapa_variaveis);
                (yyval).traducao = (yyvsp[0]).traducao;
            }
#line 1557 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 144 "src/sintatica.y" /* yacc.c:1646  */
    {
                mapa_variaveis.clear();
                (yyval).traducao = (yyvsp[0]).traducao;
            }
#line 1566 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 150 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao;
            }
#line 1574 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 154 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = "";
                (yyval).label = "";
            }
#line 1583 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 159 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[-1]).traducao + (yyvsp[0]).traducao;
            }
#line 1591 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 165 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
            }
#line 1600 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 172 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
            }
#line 1609 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 179 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
            }
#line 1618 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 185 "src/sintatica.y" /* yacc.c:1646  */
    {
				if(pilha_fim_loop.size() > 0)
					(yyval).traducao = "\n\tgoto " + pilha_fim_loop.back() + ";\n";
				else
				{
					erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
				}

			}
#line 1633 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 196 "src/sintatica.y" /* yacc.c:1646  */
    {
				if(pilha_inicio_loop.size() > 0)
					(yyval).traducao = "\n\tgoto " + pilha_inicio_loop.back() + ";\n";
				else
				{
					erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
				}
			}
#line 1647 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 206 "src/sintatica.y" /* yacc.c:1646  */
    {
				if(pilha_fim_loop.size() > 0)
					(yyval).traducao = "\n\tgoto " + pilha_fim_loop[0] + ";\n";
				else
				{
					erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
				}
			}
#line 1661 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 216 "src/sintatica.y" /* yacc.c:1646  */
    {
				if(pilha_inicio_loop.size() > 0)
					(yyval).traducao = "\n\tgoto " + pilha_inicio_loop[0] + ";\n";
				else
				{
					erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
				}
			}
#line 1675 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 227 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
            }
#line 1684 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 232 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao + "\n\tcout << endl;\n";
            }
#line 1693 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 237 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel var = buscaID((yyvsp[0]).label);
                (yyval).label = var.nome_temp;
                (yyval).tipo = var.tipo;
                if(var.tipo == "string")
                {
                    (yyval).tamanho = 1024;
                    var.tamanho = 1024;
                    alteraID((yyvsp[0]).label, var);
                    (yyval).traducao = "\n\tcin.getline(" + var.nome_temp + ", 1024);\n\t";
                }
                else
                {
                	(yyval).traducao = "\n\tcin >> " + var.nome_temp + ";\n\t";
                    (yyval).tamanho = var.tamanho;
                }
            }
#line 1715 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 256 "src/sintatica.y" /* yacc.c:1646  */
    {
				(yyval).label = (yyvsp[0]).label;
				(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\tcout << " + (yyvsp[0]).label + ";\n";
			}
#line 1724 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 261 "src/sintatica.y" /* yacc.c:1646  */
    {
				(yyval).label = (yyvsp[0]).label;
				(yyval).traducao = (yyvsp[0]).traducao + "\n\tcout << " + (yyvsp[0]).label + ";\n";
			}
#line 1733 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 267 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
            }
#line 1742 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 273 "src/sintatica.y" /* yacc.c:1646  */
    {
                if((yyvsp[-1]).tipo != "boolean")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }

                (yyval).traducao = "\n\n" + pilha_labels_loop.top() + ":\n\n\t" + (yyvsp[-4]).traducao + (yyvsp[-1]).traducao;
                pilha_labels_loop.pop();
                (yyval).traducao += "\n\tif(" + (yyvsp[-1]).label + ") goto " + pilha_labels_loop.top() + ";\n"; 
                pilha_labels_loop.pop();
                (yyval).traducao += pilha_labels_loop.top() + ":\n";
                pilha_labels_loop.pop();
                pilha_inicio_loop.pop_back();
                pilha_fim_loop.pop_back();

            }
#line 1764 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 291 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = "\n\n" + (yyvsp[-1]).traducao + (yyvsp[0]).traducao + pilha_labels_loop.top();
                pilha_labels_loop.pop();
                (yyval).traducao += "\n\tgoto " + pilha_labels_loop.top() + ";\n";
                pilha_labels_loop.pop();
                (yyval).traducao += "\n" + pilha_labels_loop.top() + ":\n";
                pilha_labels_loop.pop();
                pilha_inicio_loop.pop_back();
                pilha_fim_loop.pop_back();
            }
#line 1779 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 302 "src/sintatica.y" /* yacc.c:1646  */
    {

                (yyval).traducao = "\n\n" + (yyvsp[-1]).traducao + (yyvsp[0]).traducao + "\n\tgoto " + pilha_labels_loop.top() + ";\n";
                pilha_labels_loop.pop();
                (yyval).traducao += "\n" + pilha_labels_loop.top() + ":\n";
                pilha_labels_loop.pop();
                pilha_inicio_loop.pop_back();
                pilha_fim_loop.pop_back();
            }
#line 1793 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 313 "src/sintatica.y" /* yacc.c:1646  */
    {

                if((yyvsp[-1]).tipo != "boolean")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }

                
                string a = geraLabel();
                string b = geraLabel();
                pilha_labels_loop.push(a); pilha_labels_loop.push(b); pilha_labels_loop.push(a); pilha_labels_loop.push(b);
                pilha_inicio_loop.push_back(pilha_labels_loop.top());
                pilha_fim_loop.push_back(a);
                (yyval).traducao = "\n" + pilha_labels_loop.top() + ":\n\t" + (yyvsp[-1]).traducao + "\t";
                pilha_labels_loop.pop();
                (yyval).traducao += (yyvsp[-1]).label + " = !" + (yyvsp[-1]).label + ";\n\tif(" + (yyvsp[-1]).label + ") goto " + pilha_labels_loop.top() + ";\n"; 
                pilha_labels_loop.pop();

            }
#line 1818 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 335 "src/sintatica.y" /* yacc.c:1646  */
    {
                nivel++;
                pilha_variaveis.push_back(mapa_variaveis);
            }
#line 1827 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 341 "src/sintatica.y" /* yacc.c:1646  */
    {
                if((yyvsp[-3]).tipo != "boolean")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }
                string a = geraLabel();
                string b = geraLabel();
                pilha_labels_loop.push(a); pilha_labels_loop.push(b); pilha_labels_loop.push(a); pilha_labels_loop.push(b);
                pilha_inicio_loop.push_back(pilha_labels_loop.top());
                pilha_fim_loop.push_back(a);
                (yyval).traducao = (yyvsp[-5]).traducao + pilha_labels_loop.top() + ":\n\t" + (yyvsp[-3]).traducao + "\t";
                pilha_labels_loop.pop();
                (yyval).traducao += (yyvsp[-3]).label + " = !" + (yyvsp[-3]).label + ";\n\tif(" + (yyvsp[-3]).label + ") goto " + pilha_labels_loop.top() + ";\n";
                pilha_labels_loop.pop();
                pilha_labels_loop.push((yyvsp[-1]).traducao);
            }
#line 1849 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 359 "src/sintatica.y" /* yacc.c:1646  */
    {
                if((yyvsp[-3]).tipo != "boolean")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }
                string a = geraLabel();
                string b = geraLabel();
                pilha_labels_loop.push(a); pilha_labels_loop.push(b); pilha_labels_loop.push(a); pilha_labels_loop.push(b);
                pilha_inicio_loop.push_back(pilha_labels_loop.top());
                pilha_fim_loop.push_back(a);
                (yyval).traducao = (yyvsp[-5]).traducao + pilha_labels_loop.top() + ":\n\t" + (yyvsp[-3]).traducao + "\t";
                pilha_labels_loop.pop();
                (yyval).traducao += (yyvsp[-3]).label + " = !" + (yyvsp[-3]).label + ";\n\tif(" + (yyvsp[-3]).label + ") goto " + pilha_labels_loop.top() + ";\n";
                pilha_labels_loop.pop();
                pilha_labels_loop.push((yyvsp[-1]).traducao);
            }
#line 1871 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 377 "src/sintatica.y" /* yacc.c:1646  */
    {
                if((yyvsp[-3]).tipo != "boolean")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }
                string a = geraLabel();
                string b = geraLabel();
                pilha_labels_loop.push(a); pilha_labels_loop.push(b); pilha_labels_loop.push(a); pilha_labels_loop.push(b);
                pilha_inicio_loop.push_back(pilha_labels_loop.top());
                pilha_fim_loop.push_back(a);
                (yyval).traducao = (yyvsp[-5]).traducao + "\n" + pilha_labels_loop.top() + ":\n\t" + (yyvsp[-3]).traducao + "\t";
                pilha_labels_loop.pop();
                (yyval).traducao += (yyvsp[-3]).label + " = !" + (yyvsp[-3]).label + ";\n\tif(" + (yyvsp[-3]).label + ") goto " + pilha_labels_loop.top() + ";\n";
                pilha_labels_loop.pop();
                pilha_labels_loop.push((yyvsp[-1]).traducao);
            }
#line 1893 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 395 "src/sintatica.y" /* yacc.c:1646  */
    {
                if((yyvsp[-3]).tipo != "boolean")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }
                string a = geraLabel();
                string b = geraLabel();
                pilha_labels_loop.push(a); pilha_labels_loop.push(b); pilha_labels_loop.push(a); pilha_labels_loop.push(b);
                pilha_inicio_loop.push_back(pilha_labels_loop.top());
                pilha_fim_loop.push_back(a);
                (yyval).traducao = (yyvsp[-5]).traducao + "\n" + pilha_labels_loop.top() + ":\n\t" + (yyvsp[-3]).traducao + "\t";
                pilha_labels_loop.pop();
                (yyval).traducao += (yyvsp[-3]).label + " = !" + (yyvsp[-3]).label + ";\n\tif(" + (yyvsp[-3]).label + ") goto " + pilha_labels_loop.top() + ";\n";
                pilha_labels_loop.pop();
                pilha_labels_loop.push((yyvsp[-1]).traducao);
            }
#line 1915 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 414 "src/sintatica.y" /* yacc.c:1646  */
    {
                nivel++;
                pilha_variaveis.push_back(mapa_variaveis);
            }
#line 1924 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 420 "src/sintatica.y" /* yacc.c:1646  */
    {
            	string a = geraLabel(); string b = geraLabel();
                pilha_labels_loop.push(b); pilha_labels_loop.push(a);	pilha_labels_loop.push(a);
                pilha_inicio_loop.push_back(pilha_labels_loop.top());
                pilha_fim_loop.push_back(b);
                nivel++;
                pilha_variaveis.push_back(mapa_variaveis);
            }
#line 1937 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 430 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
            }
#line 1946 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 436 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = "\n\n" + (yyvsp[-3]).traducao + (yyvsp[-2]).traducao + "\ngoto " + label_final.top() + ";\n" + pilha_labels_condicional.top() + ":\n";
                pilha_labels_condicional.pop();
                label_final.pop();
               	(yyval).traducao += (yyvsp[-1]).traducao + (yyvsp[0]).traducao + label_final.top() + ":\n";
			}
#line 1957 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 444 "src/sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 1965 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 448 "src/sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "";
			}
#line 1973 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 453 "src/sintatica.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2]).tipo != "boolean")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }

                string a = geraLabel();
                label_final.push(label_final.top());	label_final.push(label_final.top());
                pilha_labels_condicional.push(a); pilha_labels_condicional.push(a);
        
                (yyval).traducao = "\n\t" + (yyvsp[-5]).traducao + "\n\t" + (yyvsp[-2]).traducao + "\t" + (yyvsp[-2]).label + " = !" + (yyvsp[-2]).label + ";\n\tif(" + (yyvsp[-2]).label + ") goto " + pilha_labels_condicional.top() + ";\n"; 
                pilha_labels_condicional.pop();
                (yyval).traducao += (yyvsp[0]).traducao + "\ngoto " + label_final.top() + ";\n" + pilha_labels_condicional.top() + ":\n";
                pilha_labels_condicional.pop();
                label_final.pop();
			}
#line 1995 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 471 "src/sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "";
			}
#line 2003 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 476 "src/sintatica.y" /* yacc.c:1646  */
    {
				if((yyvsp[-1]).tipo != "boolean")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }


                string a = geraLabel();	string b = geraLabel();
                label_final.push(a);	label_final.push(a);
                pilha_labels_condicional.push(b); pilha_labels_condicional.push(b);
        
                (yyval).traducao = (yyvsp[-1]).traducao + "\t" + (yyvsp[-1]).label + " = !" + (yyvsp[-1]).label + ";\n\tif(" + (yyvsp[-1]).label + ") goto " + pilha_labels_condicional.top() + ";\n"; 
                pilha_labels_condicional.pop();

			}
#line 2024 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 494 "src/sintatica.y" /* yacc.c:1646  */
    {
				nivel++;
                pilha_variaveis.push_back(mapa_variaveis);
			}
#line 2033 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 500 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
            }
#line 2042 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 507 "src/sintatica.y" /* yacc.c:1646  */
    {
            	if((buscaID((yyvsp[-2]).label).tipo == "string" && (yyvsp[0]).tipo == "string")||(buscaID((yyvsp[-2]).label).tipo == "string" && (yyvsp[0]).tipo == "char"))
                {
                    info_variavel var = buscaID((yyvsp[-2]).label);
                    var.tamanho = (yyvsp[0]).tamanho;   alteraID((yyvsp[-2]).label, var);                 
                    (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\tstrcpy(" + buscaID((yyvsp[-2]).label).nome_temp + ", " + (yyvsp[0]).label + ");\n";
                }
                else    
                {
                    string tipo = buscaID((yyvsp[-2]).label).tipo;

                    if(mapa_operacoes[tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 1)
                        (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + buscaID((yyvsp[-2]).label).nome_temp + " = " + "(" + mapa_operacoes[tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[0]).label + ";\n";
                    else if(mapa_operacoes[tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0)
                        (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + buscaID((yyvsp[-2]).label).nome_temp + " = " + (yyvsp[0]).label + ";\n";
                    else{
                        erro = true;
                        cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                    }
                }
                if((yyvsp[0]).tipo == "null" || (yyvsp[0]).tipo == "")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                }
            }
#line 2073 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 534 "src/sintatica.y" /* yacc.c:1646  */
    {
            	(yyval).traducao = (yyvsp[0]).traducao + "\n\t" + buscaID((yyvsp[-2]).label).nome_temp + " = " + (yyvsp[0]).label + ";\n";
            }
#line 2081 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 538 "src/sintatica.y" /* yacc.c:1646  */
    {
            	info_variavel var = pilha_variaveis[0][(yyvsp[-2]).label];
                if(var.nome_temp == "")
                {
                	erro = true;
                	cout << "Erro na linha " << nlinha <<": Variável \"" << (yyvsp[-2]).label << "\" não declarada." << endl << endl;
                }
            	if((yyvsp[0]).tipo == "null" || (yyvsp[0]).tipo == "")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                }
            	if((var.tipo == "string" && (yyvsp[0]).tipo == "string")||(var.tipo == "string" && (yyvsp[0]).tipo == "char"))
                {
                    var.tamanho = (yyvsp[-1]).tamanho;   alteraID((yyvsp[-2]).label, var);                 
                    (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\tstrcpy(" + buscaID((yyvsp[-3]).label).nome_temp + ", " + (yyvsp[0]).label + ");\n";
                }
                else    
                {
                    string tipo = var.tipo;

                    if(mapa_operacoes[tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 1)
                        (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + var.nome_temp + " = " + "(" + mapa_operacoes[tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[0]).label + ";\n";
                    else if(mapa_operacoes[tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0)
                        (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + var.nome_temp + " = " + (yyvsp[0]).label + ";\n";
                    else{
                        erro = true;
                        cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                    }
                }
            }
#line 2117 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 570 "src/sintatica.y" /* yacc.c:1646  */
    {
            	info_variavel var = pilha_variaveis[0][(yyvsp[-2]).label];
                if(var.nome_temp == "")
                {
                	erro = true;
                	cout << "Erro na linha " << nlinha <<": Variável \"" << (yyvsp[-2]).label << "\" não declarada." << endl << endl;
                }
            	if((yyvsp[0]).tipo == "null" || (yyvsp[0]).tipo == "")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                }
            	(yyval).traducao = (yyvsp[0]).traducao + "\n\t" + var.nome_temp + " = " + (yyvsp[0]).label + ";\n";
            }
#line 2136 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 586 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-3]).label, gera_variavel_temporaria((yyvsp[-3]).label, (yyvsp[-2]).label)};

                if(mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 1)
                    (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + atributos.nome_temp + " = " + "(" + mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[0]).label + ";";
                else if(mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0)
                    (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + atributos.nome_temp + " = " + (yyvsp[0]).label + ";";
                else{
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                }
            }
#line 2153 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 599 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-1]).label, gera_variavel_temporaria((yyvsp[-1]).label, (yyvsp[0]).label)};
                (yyval).traducao = "\n\t" + atributos.nome_temp + " = " + "0" + ";";
            }
#line 2162 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 604 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-3]).label, gera_variavel_temporaria((yyvsp[-3]).label, (yyvsp[-2]).label)};

                if(mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 1)
                    (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + atributos.nome_temp + " = " + "(" + mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[0]).label + ";";
                else if(mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0)
                    (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + atributos.nome_temp + " = " + (yyvsp[0]).label + ";";
                else{
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                }
            }
#line 2179 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 617 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-1]).label, gera_variavel_temporaria((yyvsp[-1]).label, (yyvsp[0]).label)};
                (yyval).traducao = "\n\t" + atributos.nome_temp + " = " + "0.0" + ";";
            }
#line 2188 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 622 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-3]).label, gera_variavel_temporaria((yyvsp[-3]).label, (yyvsp[-2]).label)};

                if(mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 1)
                    (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + atributos.nome_temp + " = " + "(" + mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[0]).label + ";";
                else if(mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0)
                    (yyval).traducao = "\t" + (yyvsp[0]).traducao + "\n\t" + atributos.nome_temp + " = " + (yyvsp[0]).label + ";";
                else{
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                }
            }
#line 2205 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 635 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-1]).label, gera_variavel_temporaria((yyvsp[-1]).label, (yyvsp[0]).label)};
                (yyval).traducao = "\n\t" + atributos.nome_temp + " = " + "1" + ";";
            }
#line 2214 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 640 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-3]).label, gera_variavel_temporaria((yyvsp[-3]).label, (yyvsp[-2]).label,1)};
                
                if(mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 1)
                    (yyval).traducao = "\n\t" + atributos.nome_temp + " = " + "(" + mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[0]).label + ";";
                else if(mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0)
                    (yyval).traducao = "\n\t" + atributos.nome_temp + " = " + (yyvsp[0]).label + ";";
                else{
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                }
            }
#line 2231 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 653 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-1]).label, gera_variavel_temporaria((yyvsp[-1]).label, (yyvsp[0]).label,1)};
                (yyval).traducao = "\n\t" + atributos.nome_temp + " = " + "\'\'" + ";";
            }
#line 2240 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 658 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-3]).label, gera_variavel_temporaria((yyvsp[-3]).label, (yyvsp[-2]).label, (yyvsp[0]).tamanho)};
                if((mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0) && (mapa_operacoes[(yyvsp[-3]).label+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo != ""))
                {
                    (yyval).traducao = (yyvsp[0]).traducao + "\n\tstrcpy(" + atributos.nome_temp + ", " + (yyvsp[0]).label + ");\n";
                }
                else
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Atribuição inválida!\n";
                }
            }
#line 2257 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 671 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel atributos = { (yyvsp[-1]).label, gera_variavel_temporaria((yyvsp[-1]).label, (yyvsp[0]).label,0)};
                (yyval).traducao = "\n\tstrcpy(" + atributos.nome_temp + ", \"\");\n";
            }
#line 2266 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 677 "src/sintatica.y" /* yacc.c:1646  */
    {
            
                string nome_variavel_temporaria = gera_variavel_temporaria(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo);
                (yyval).label = nome_variavel_temporaria;
                (yyval).tipo = mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo;
                (yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\t" + (yyval).label + " = " +(yyvsp[-2]).label + " " + (yyvsp[-1]).traducao + " " + (yyvsp[0]).label + ";\n";
            }
#line 2278 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 685 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).tamanho = (yyvsp[0]).tamanho;
            }
#line 2289 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 693 "src/sintatica.y" /* yacc.c:1646  */
    {
                string nome_variavel_temporaria = gera_variavel_temporaria(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo);
                (yyval).label = nome_variavel_temporaria;
                (yyval).tipo = mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo;

                (yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\t" + (yyval).label + " = " +(yyvsp[-2]).label + " " + (yyvsp[-1]).traducao + " " + (yyvsp[0]).label + ";\n";
            }
#line 2301 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 701 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).tipo = (yyvsp[0]).tipo;
            }
#line 2311 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 708 "src/sintatica.y" /* yacc.c:1646  */
    {
            	if(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo == "" || mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo == "null")
            	{
            		erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
            	}
            	if(((yyvsp[-2]).tipo == "string") && ((yyvsp[0]).tipo == "string"))
            	{
            		//Maior
            		string nome_variavel_temporaria = gera_variavel_temporaria(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo);
	                (yyval).label = nome_variavel_temporaria;
	                (yyval).tipo = mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo;
	                if((yyvsp[-1]).label == ">")
	                {
	                	(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\t" + nome_variavel_temporaria + " = strcmp(" +(yyvsp[-2]).label + ", " + (yyvsp[0]).label + ");\n";		
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " > 0) " + nome_variavel_temporaria + " = 1;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " == 0) " + nome_variavel_temporaria + " = 0;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " < 0) " + nome_variavel_temporaria + " = 0;\n";
	                } else if ((yyvsp[-1]).label == "<")
	                {
	                	(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\t" + nome_variavel_temporaria + " = strcmp(" +(yyvsp[-2]).label + ", " + (yyvsp[0]).label + ");\n";		
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " > 0) " + nome_variavel_temporaria + " = 0;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " == 0) " + nome_variavel_temporaria + " = 0;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " < 0) " + nome_variavel_temporaria + " = 1;\n";
	                } else if ((yyvsp[-1]).label == "==")
	                {
	                	(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\t" + nome_variavel_temporaria + " = strcmp(" +(yyvsp[-2]).label + ", " + (yyvsp[0]).label + ");\n";		
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " > 0) " + nome_variavel_temporaria + " = 0;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " == 0) " + nome_variavel_temporaria + " = 1;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " < 0) " + nome_variavel_temporaria + " = 0;\n";
	                } else if ((yyvsp[-1]).label == "!=")
	                {
	                	(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\t" + nome_variavel_temporaria + " = strcmp(" +(yyvsp[-2]).label + ", " + (yyvsp[0]).label + ");\n";		
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " > 0) " + nome_variavel_temporaria + " = 1;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " == 0) " + nome_variavel_temporaria + " = 0;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " < 0) " + nome_variavel_temporaria + " = 1;\n";
	                } else if ((yyvsp[-1]).label == ">=")
	                {
	                	(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\t" + nome_variavel_temporaria + " = strcmp(" +(yyvsp[-2]).label + ", " + (yyvsp[0]).label + ");\n";		
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " > 0) " + nome_variavel_temporaria + " = 1;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " == 0) " + nome_variavel_temporaria + " = 1;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " < 0) " + nome_variavel_temporaria + " = 0;\n";
	                } else if ((yyvsp[-1]).label == "<=")
	                {
	                	(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\t" + nome_variavel_temporaria + " = strcmp(" +(yyvsp[-2]).label + ", " + (yyvsp[0]).label + ");\n";		
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " > 0) " + nome_variavel_temporaria + " = 0;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " == 0) " + nome_variavel_temporaria + " = 1;\n";
	                	(yyval).traducao += "\tif(" + nome_variavel_temporaria + " < 0) " + nome_variavel_temporaria + " = 1;\n";
	                }
            	}
            	else
            	{
	                string nome_variavel_temporaria = gera_variavel_temporaria(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo);
	                (yyval).label = nome_variavel_temporaria;
	                (yyval).tipo = mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo;
	                (yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao + "\n\t" + nome_variavel_temporaria + " = " +(yyvsp[-2]).label + " " + (yyvsp[-1]).label + " " + (yyvsp[0]).label + ";\n";
	            }
            }
#line 2374 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 767 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).tamanho = (yyvsp[0]).tamanho;
            }
#line 2385 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 775 "src/sintatica.y" /* yacc.c:1646  */
    {
                if(((yyvsp[-2]).tipo == "string" && (yyvsp[0]).tipo == "string")||((yyvsp[-2]).tipo == "string" && (yyvsp[0]).tipo == "char")||((yyvsp[-2]).tipo == "char" && (yyvsp[0]).tipo == "string"))
                {
                    string nome_variavel_temporaria = gera_variavel_temporaria(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo, "", (yyvsp[-2]).tamanho+(yyvsp[0]).tamanho);
                    (yyval).label = nome_variavel_temporaria;

                    (yyval).tamanho = (yyvsp[-2]).tamanho+(yyvsp[0]).tamanho;
                    if(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0) 
                    {
                        (yyval).traducao = (yyvsp[0]).traducao + "\t" + (yyvsp[-2]).traducao + "\n";
                        (yyval).traducao += "\tstrcpy(" + nome_variavel_temporaria + ", strcat(" + (yyvsp[-2]).label + ", " + (yyvsp[0]).label + "));\n";
                    }
                    else if (mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando != 0 || mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo == "")
                    {
                        erro = true;
                        cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                    }
                    (yyval).tipo = "string";

                } else
                {
                    string nome_variavel_temporaria = gera_variavel_temporaria(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo);
                    (yyval).label = nome_variavel_temporaria;

                    if(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0) {
                        (yyval).traducao = (yyvsp[0]).traducao + "\t" + (yyvsp[-2]).traducao + "\n\t" + nome_variavel_temporaria + " = " + (yyvsp[-2]).label + " " + (yyvsp[-1]).label + " " + (yyvsp[0]).label + ";";
                    }
                    else if(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 1) 
                    {
                        (yyval).traducao = (yyvsp[0]).traducao + "\t" + (yyvsp[-2]).traducao + "\n\t" + nome_variavel_temporaria + " = " + "(" + mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[-2]).label + ";\n\t";
                        (yyval).traducao += nome_variavel_temporaria + " = " + nome_variavel_temporaria + " " + (yyvsp[-1]).label + " " + (yyvsp[0]).label + ";";
                    } else {
                        (yyval).traducao = (yyvsp[0]).traducao + "\t" + (yyvsp[-2]).traducao + "\n\t" + nome_variavel_temporaria + " = " + "(" + mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[0]).label + ";";
                        (yyval).traducao += "\n\t" + nome_variavel_temporaria + " = " + (yyvsp[-2]).label + " " + (yyvsp[-1]).label + " " + nome_variavel_temporaria + ";";
                    }

                    if (mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando != 0 || mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo == "")
                    {
                        erro = true;
                        cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                    }
                    (yyval).tipo = mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo;
                }
            }
#line 2434 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 820 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).tamanho = (yyvsp[0]).tamanho;
            }
#line 2445 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 828 "src/sintatica.y" /* yacc.c:1646  */
    {
                string nome_variavel_temporaria = gera_variavel_temporaria(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo);
                (yyval).label = nome_variavel_temporaria;

                if(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 0) 
                {
                    (yyval).traducao = (yyvsp[0]).traducao + (yyvsp[-2]).traducao + "\n\t" + nome_variavel_temporaria + " = " + (yyvsp[-2]).label + " " + (yyvsp[-1]).label + " " + (yyvsp[0]).label + ";";
                } else if(mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando == 1) 
                {
                    (yyval).traducao = (yyvsp[0]).traducao + "\t" + (yyvsp[-2]).traducao + "\n\t" + nome_variavel_temporaria + " = " + "(" + mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[-2]).label + ";\n\t";
                    (yyval).traducao += nome_variavel_temporaria + " = " + nome_variavel_temporaria + " " + (yyvsp[-1]).label + " " + (yyvsp[0]).label + ";";
                } else {
                    (yyval).traducao = (yyvsp[0]).traducao + "\t" + (yyvsp[-2]).traducao + "\n\t" + nome_variavel_temporaria + " = " + "(" + mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo + ")" + (yyvsp[0]).label + ";";
                    (yyval).traducao += "\n\t" + nome_variavel_temporaria + " = " + (yyvsp[-2]).label + " " + (yyvsp[-1]).label + " " + nome_variavel_temporaria + ";";
                }

                if (mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].operando != 0 || mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo == "")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }
                (yyval).tipo = mapa_operacoes[(yyvsp[-2]).tipo+(yyvsp[-1]).label+(yyvsp[0]).tipo].tipo;
            }
#line 2473 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 852 "src/sintatica.y" /* yacc.c:1646  */
    {
                
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).tamanho = (yyvsp[0]).tamanho;
            }
#line 2485 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 861 "src/sintatica.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0]).tipo != "boolean")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }
                (yyval).label = (yyvsp[0]).label;
                (yyval).traducao = "\n\t" + (yyvsp[0]).traducao + "\n\t" + (yyvsp[0]).label + " = !" + (yyvsp[0]).label + ";\n";
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).tamanho = (yyvsp[0]).tamanho;
			}
#line 2501 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 873 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel var = buscaID((yyvsp[0]).label);
                (yyval).label = var.nome_temp;
                (yyval).traducao = "\n\t" + var.nome_temp + " = " + var.nome_temp + " + 1;\n";
                (yyval).tipo = var.tipo;
                (yyval).tamanho = var.tamanho;
                
            }
#line 2514 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 882 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel var = buscaID((yyvsp[0]).label);
                (yyval).label = var.nome_temp;
                (yyval).traducao = "\n\t" + var.nome_temp + " = " + var.nome_temp + " - 1;\n";
                (yyval).tipo = var.tipo;
                (yyval).tamanho = var.tamanho;
            }
#line 2526 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 891 "src/sintatica.y" /* yacc.c:1646  */
    {
                if ((yyvsp[0]).tipo == "boolean" || (yyvsp[0]).tipo == "string" || (yyvsp[0]).tipo == "char")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Operação inválida!\n";
                }
                (yyval).label = (yyvsp[-1]).label + (yyvsp[0]).label;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).traducao = "";
            }
#line 2541 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 902 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[0]).label;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).tamanho = (yyvsp[0]).tamanho;
            }
#line 2552 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 910 "src/sintatica.y" /* yacc.c:1646  */
    {
                
                string nome_variavel_temporaria = gera_variavel_temporaria((yyvsp[-2]).tipo);
                (yyval).label = nome_variavel_temporaria;

                if(mapa_operacoes["("+(yyvsp[-2]).label+")"+(yyvsp[0]).tipo].tipo == "null" || mapa_operacoes["("+(yyvsp[-2]).label+")"+(yyvsp[0]).tipo].tipo == "")
                {
                    erro = true;
                    cout << "Erro na linha: " << nlinha << ". Cast inválido!\n";
                }
                else
                {
                    (yyval).traducao = (yyvsp[0]).traducao +"\n\t" + (yyval).label + " = "+ "(" + (yyvsp[-2]).label + ")"+ (yyvsp[0]).label + ";";
                }
                    (yyval).tipo = (yyvsp[-2]).tipo;

            }
#line 2574 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 928 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).label = (yyvsp[-1]).label;
                (yyval).traducao = (yyvsp[-1]).traducao;
                (yyval).tipo = (yyvsp[-1]).tipo;
            }
#line 2584 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 934 "src/sintatica.y" /* yacc.c:1646  */
    {
                
                string nome_variavel_temporaria = gera_variavel_temporaria((yyvsp[0]).tipo);
                (yyval).label = nome_variavel_temporaria;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).traducao ="\n\t" + nome_variavel_temporaria + " = " + (yyvsp[0]).label + ";";
            }
#line 2596 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 942 "src/sintatica.y" /* yacc.c:1646  */
    {
                string nome_variavel_temporaria = gera_variavel_temporaria((yyvsp[0]).tipo);
                (yyval).label = nome_variavel_temporaria;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).traducao ="\n\t" + nome_variavel_temporaria + " = " + (yyvsp[0]).label + ";";
            }
#line 2607 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 949 "src/sintatica.y" /* yacc.c:1646  */
    {   
                string nome_variavel_temporaria = gera_variavel_temporaria((yyvsp[0]).tipo);
                (yyval).label = nome_variavel_temporaria;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).tamanho = 1;
                (yyval).traducao ="\n\t" + nome_variavel_temporaria + " = " + (yyvsp[0]).label + ";";
            }
#line 2619 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 957 "src/sintatica.y" /* yacc.c:1646  */
    {   
                string nome_variavel_temporaria = gera_variavel_temporaria((yyvsp[0]).tipo);
                (yyval).label = nome_variavel_temporaria;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).traducao ="\n\t" + nome_variavel_temporaria + " = " + (yyvsp[0]).traducao + ";\n";
            }
#line 2630 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 964 "src/sintatica.y" /* yacc.c:1646  */
    {   
                string nome_variavel_temporaria = gera_variavel_temporaria((yyvsp[0]).tipo, "", (yyvsp[0]).tamanho);
                (yyval).label = nome_variavel_temporaria;
                (yyval).tipo = (yyvsp[0]).tipo;
                (yyval).traducao = "\n\tstrcpy(" + nome_variavel_temporaria + ", " + (yyvsp[0]).label + ");";
            }
#line 2641 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 971 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel var = buscaID((yyvsp[0]).label);
                (yyval).label = var.nome_temp;
                (yyval).traducao = "";
                (yyval).tipo = var.tipo;
                (yyval).tamanho = var.tamanho;
            }
#line 2653 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 979 "src/sintatica.y" /* yacc.c:1646  */
    {
                info_variavel var = pilha_variaveis[0][(yyvsp[0]).label];
                if(var.nome_temp == "")
                {
                	erro = true;
                	cout << "Erro na linha " << nlinha <<": Variável \"" << (yyvsp[0]).label << "\" não declarada." << endl << endl;
                }
                (yyval).label = var.nome_temp;
                (yyval).traducao = "";
                (yyval).tipo = var.tipo;
                (yyval).tamanho = var.tamanho;
            }
#line 2670 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 993 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
                (yyval).tipo = "float";
            }
#line 2680 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 999 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
                (yyval).tipo = "int";
            }
#line 2690 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1005 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
                (yyval).tipo = "char";
            }
#line 2700 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1011 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
                (yyval).tipo = "boolean";
            }
#line 2710 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1019 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2719 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1024 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2728 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1029 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2737 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1034 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2746 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1039 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2755 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1044 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2764 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1051 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2773 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1056 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2782 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1062 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2791 "bin/y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1067 "src/sintatica.y" /* yacc.c:1646  */
    {
                (yyval).traducao = (yyvsp[0]).traducao;
                (yyval).label = (yyvsp[0]).label;
            }
#line 2800 "bin/y.tab.c" /* yacc.c:1646  */
    break;


#line 2804 "bin/y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 1073 "src/sintatica.y" /* yacc.c:1906  */


#include "lex.yy.c"

int yyparse();

int contador = 0;

string gera_variavel_temporaria(string tipo, string nome, int tamanho) 
{

    stringstream nome_temporario;
    string nome_aux;

    nome_temporario << "temp_" << tipo << "_";

    if (!nome.empty()) {
        nome_temporario << nome << "_" << contador;
        nome_aux = nome;
    } else {
        nome_temporario << "EXP_" << contador;
        nome_aux = nome_temporario.str();
    }

    contador++;

    info_variavel atributos = {tipo, nome_temporario.str(), tamanho};
    if(pilha_variaveis[nivel].find(nome_aux) == pilha_variaveis[nivel].end()) {
        pilha_variaveis[nivel][nome_aux] = atributos;

    } else {
        cout << "Erro na linha " << nlinha <<": Você já declarou a variável \"" << nome << "\"." << endl << endl;
        erro = true;
    }
    return nome_temporario.str();
}

info_variavel buscaID(string id)
{
    int i;
    bool existeVariavel;
    for(i = nivel; i > -1; i--)
    {

        if(pilha_variaveis[i][id].nome_temp == "")
        {
            existeVariavel = false;
        }
        else
        {
            existeVariavel = true;
            return pilha_variaveis[i][id];
        }
    }
    if(!existeVariavel)
    {
        cout << "Erro na linha " << nlinha <<": Variável \"" << id << "\" não declarada." << endl << endl;
        erro = true;
        info_variavel var = {"","",-1};
        return var;
    }
}

void alteraID(string id, info_variavel nova_varivavel)
{
    int i;
    bool existeVariavel;
    for(i = nivel; i > -1; i--)
    {

        if(pilha_variaveis[i][id].nome_temp == "")
        {
            existeVariavel = false;
        }
        else
        {
            existeVariavel = true;
            pilha_variaveis[i][id] = nova_varivavel;
            break;
        }
    }
    if(!existeVariavel)
    {
        cout << "Erro na linha " << nlinha <<": Variável \"" << id << "\" não declarada." << endl << endl;
        erro = true;
    }
}

string geraLabel()
{
    stringstream nome_temporario;
    nome_temporario << "temp_Label_" << contador;
    contador++;
    return nome_temporario.str();
}

void gera_mapa_cast() {
    FILE* file2 = fopen("./src/mapa_cast.txt", "r");
    
    char chave[30] = "";
    
    char resultado[20] = "";
    int operando;
    
    while(fscanf(file2, "%s\t%s\t%d\n", chave, resultado, &operando)) {
        
        info_operacoes cast = {resultado, operando};
        mapa_operacoes[chave] = cast;
        
        if(feof(file2)) {
            break;
        }
    }
    
    fclose(file2);
}

void adiciona_biblioteca_cabecalho(string nome_biblioteca)
{
    cabecalho << "#include <" << nome_biblioteca << ">" << endl;
}

int main( int argc, char* argv[] )
{
    gera_mapa_cast();
    yyparse();

    return 0;
}

void yyerror( string MSG )
{
    cout << MSG << " on line " << nlinha << endl;
    exit (0);
}               
