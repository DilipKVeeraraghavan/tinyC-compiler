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
#line 2 "ass6_14CS30030.y" /* yacc.c:339  */

    #include <stdio.h>
    #include "ass6_14CS30030_translator.h"//the header file for translator
    #include<iostream>
    #include<string>
    #include<list>
    //These variables are declared in globalVariables.c file
   	void yyerror(const char*);
    extern int yylex(void);
    extern std::vector<Quad*> quadVector;
	extern int quadPointer;
	extern symbolTable* global;
	extern symbolTable *symTab;
	extern Symbol* curSym;
	extern Type* globalType;
	extern string array_name;
	extern symbolTable *external;
	extern int stringcount;
	extern int labelcount;
	extern std::vector<label> labelTable;
    using namespace std;//the c++ library is used most of the time

 

#line 91 "y.tab.c" /* yacc.c:339  */

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    ACC = 295,
    INC = 296,
    DEC = 297,
    SHL = 298,
    SHR = 299,
    LESSTHAN = 300,
    LTE = 301,
    GREATERTHAN = 302,
    GTE = 303,
    EQUAL = 304,
    NEQUAL = 305,
    LogAND = 306,
    LogOR = 307,
    ELIP = 308,
    AssSTAR = 309,
    AssDIV = 310,
    AssMOD = 311,
    AssPLUS = 312,
    AssMINUS = 313,
    AssSHL = 314,
    AssSHR = 315,
    AssBinAND = 316,
    AssXOR = 317,
    AssBinOR = 318,
    IDENTIFIER = 319,
    INTEGER_CONSTANT = 320,
    FLOATING_CONSTANT = 321,
    CHARACTER_CONSTANT = 322,
    ENUMERATION_CONSTANT = 323,
    STRING_LITERAL = 324,
    SINGLE_COMMENT = 325,
    MULTI_COMMENT = 326,
    RSB = 327,
    RCB = 328,
    RPA = 329,
    LSB = 330,
    LCB = 331,
    LPA = 332,
    FULLSTOP = 333,
    BITWISEAND = 334,
    BITWISEOR = 335,
    MUL = 336,
    PLUSop = 337,
    MINUSop = 338,
    TILDE = 339,
    APO = 340,
    DIV = 341,
    PERCENT = 342,
    POWER = 343,
    QUES = 344,
    COLON = 345,
    SEMICOLON = 346,
    COMMA = 347,
    HASH = 348,
    ASSG = 349
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define BOOL 292
#define COMPLEX 293
#define IMAGINARY 294
#define ACC 295
#define INC 296
#define DEC 297
#define SHL 298
#define SHR 299
#define LESSTHAN 300
#define LTE 301
#define GREATERTHAN 302
#define GTE 303
#define EQUAL 304
#define NEQUAL 305
#define LogAND 306
#define LogOR 307
#define ELIP 308
#define AssSTAR 309
#define AssDIV 310
#define AssMOD 311
#define AssPLUS 312
#define AssMINUS 313
#define AssSHL 314
#define AssSHR 315
#define AssBinAND 316
#define AssXOR 317
#define AssBinOR 318
#define IDENTIFIER 319
#define INTEGER_CONSTANT 320
#define FLOATING_CONSTANT 321
#define CHARACTER_CONSTANT 322
#define ENUMERATION_CONSTANT 323
#define STRING_LITERAL 324
#define SINGLE_COMMENT 325
#define MULTI_COMMENT 326
#define RSB 327
#define RCB 328
#define RPA 329
#define LSB 330
#define LCB 331
#define LPA 332
#define FULLSTOP 333
#define BITWISEAND 334
#define BITWISEOR 335
#define MUL 336
#define PLUSop 337
#define MINUSop 338
#define TILDE 339
#define APO 340
#define DIV 341
#define PERCENT 342
#define POWER 343
#define QUES 344
#define COLON 345
#define SEMICOLON 346
#define COMMA 347
#define HASH 348
#define ASSG 349

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 26 "ass6_14CS30030.y" /* yacc.c:355  */

	int intval; //to store the integer values
	char* cval; //to store the character values
	float fval; //to store the double king of values
	char* sval; //to store the string values.Not implemented this time
	struct Symbol *loc; //the SymbolItem pointer 
	struct funcPointer *funcP; //the pointer structure contataining the symbolTable pointer. We have to enclose it in struct because class can't be used as type in lex inside union
	struct arg_list* args; //list of expression pointers
	struct Expression *expr; //The main structue which is expression pointer
	struct Type* typeptr; //The type is used to contain the type pointers for different type specifiers.
	struct opPointer *op;//The operation code pointer contatining op_code, for unary opearators

#line 332 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 347 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   983

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    95,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   171,   171,   180,   181,   184,   185,   195,   204,   204,
     208,   209,   214,   230,   240,   241,   242,   243,   244,   245,
     248,   249,   250,   254,   262,   264,   271,   272,   280,   282,
     285,   288,   289,   294,   307,   327,   332,   345,   359,   372,
     377,   378,   379,   380,   428,   434,   439,   442,   443,   450,
     451,   454,   455,   458,   459,   462,   463,   472,   473,   474,
     475,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   494,   495,   498,   499,   502,   503,
     504,   507,   508,   511,   512,   515,   516,   519,   520,   521,
     524,   527,   554,   555,   558,   565,   571,   626,   627,   628,
     629,   648,   668,   669,   672,   673,   676,   676,   681,   686,
     700,   701,   704,   705,   708,   709,   712,   713,   716,   717,
     720,   723,   724,   725,   728,   729,   732,   732,   736,   739,
     740,   743,   744,   749,   750,   753,   756,   757,   812,   813,
     835,   837,   853,   856,   872,   873,   886,   887,   915,   916,
     928,   930,   936,   943,   944,   950,   955,   961,   967,   968,
     985,  1002,  1003,  1014,  1026,  1027,  1038,  1049,  1062,  1086,
    1096,  1101,  1106,  1111,  1118,  1123,  1129,  1134,  1142,  1150,
    1184,  1185,  1189,  1191,  1195,  1201,  1210,  1216,  1260,  1320,
    1322,  1324,  1334,  1344,  1345,  1348,  1357,  1359,  1370,  1373,
    1386,  1400,  1413,  1417,  1421
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "ACC", "INC", "DEC", "SHL", "SHR", "LESSTHAN",
  "LTE", "GREATERTHAN", "GTE", "EQUAL", "NEQUAL", "LogAND", "LogOR",
  "ELIP", "AssSTAR", "AssDIV", "AssMOD", "AssPLUS", "AssMINUS", "AssSHL",
  "AssSHR", "AssBinAND", "AssXOR", "AssBinOR", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHARACTER_CONSTANT",
  "ENUMERATION_CONSTANT", "STRING_LITERAL", "SINGLE_COMMENT",
  "MULTI_COMMENT", "RSB", "RCB", "RPA", "LSB", "LCB", "LPA", "FULLSTOP",
  "BITWISEAND", "BITWISEOR", "MUL", "PLUSop", "MINUSop", "TILDE", "APO",
  "DIV", "PERCENT", "POWER", "QUES", "COLON", "SEMICOLON", "COMMA", "HASH",
  "ASSG", "'|'", "$accept", "start_exec", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", "F", "H", "statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "expression_opt",
  "selection_statement", "iteration_statement", "jump_statement",
  "declaration", "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "expression", "constant_expression", "assignment_expression",
  "conditional_expression", "logical_OR_expression",
  "logical_AND_expression", "inclusive_OR_expression",
  "exclusive_OR_expression", "AND_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_operator",
  "unary_expression", "argument_expression_list_opt",
  "argument_expression_list", "postfix_expression", "primary_expression",
  "constant", "enumeration_constant", "M", "N", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   124
};
# endif

#define YYPACT_NINF -238

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-238)))

#define YYTABLE_NINF -205

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     944,  -238,  -238,  -238,  -238,   -50,  -238,  -238,  -238,  -238,
    -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
    -238,  -238,    18,   944,  -238,  -238,  -238,    20,   944,   944,
    -238,   944,   944,   -37,   -33,  -238,  -238,    31,   -35,   -44,
    -238,   227,    25,  -238,  -238,  -238,  -238,  -238,  -238,   -12,
    -238,    45,    31,  -238,    45,   677,  -238,   944,  -238,    20,
    -238,    45,   103,  -238,   -43,  -238,    48,  -238,  -238,  -238,
      73,   736,   765,   765,  -238,  -238,  -238,  -238,  -238,    74,
     605,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,  -238,
     -28,    55,    80,    96,    93,   106,   159,    72,   119,    13,
    -238,   795,    95,   -20,  -238,  -238,  -238,  -238,   118,   162,
    -238,  -238,   -23,   795,   605,  -238,   605,  -238,  -238,   795,
     171,    11,   677,  -238,    59,  -238,   480,  -238,   480,   149,
     -48,  -238,  -238,   148,  -238,   795,  -238,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   795,   795,   795,
     795,  -238,  -238,   795,   180,  -238,  -238,   795,   795,   181,
     163,  -238,    31,   824,   175,   688,  -238,  -238,  -238,  -238,
     183,   184,   187,  -238,  -238,    88,  -238,  -238,  -238,  -238,
    -238,  -238,   706,  -238,   795,   795,  -238,   795,    96,   795,
     106,   159,   159,    72,    72,    72,    72,   119,   119,    13,
      13,  -238,  -238,  -238,  -238,  -238,   -45,  -238,   189,   176,
    -238,   271,  -238,   795,   195,   197,  -238,   795,  -238,    66,
     196,   199,   179,  -238,   191,   224,   224,  -238,  -238,   677,
      74,  -238,  -238,    55,   795,    80,    93,  -238,  -238,   795,
     211,   795,   220,   225,  -238,   237,   252,   240,   795,   241,
    -238,   229,  -238,  -238,  -238,   247,   249,  -238,  -238,   232,
    -238,  -238,  -238,  -238,   233,   254,  -238,  -238,   255,  -238,
    -238,  -238,   907,   260,  -238,    12,   233,  -238,  -238,   238,
    -238,   525,   525,   443,   239,   795,   242,   795,   257,   525,
    -238,   360,  -238,  -238,  -238,  -238,  -238,  -238,  -238,   101,
     251,   525,  -238,  -238,   248,   795,  -238,   -39,  -238,    51,
     795,  -238,  -238,  -238,  -238,  -238,   293,  -238,   253,  -238,
     525,    53,   795,   265,   795,   795,  -238,  -238,  -238,  -238,
     795,  -238,   258,   525,  -238,    65,   266,   525,  -238,   525,
    -238,  -238,  -238,   319,  -238,   267,   795,  -238,  -238,  -238,
     525,   269,  -238,  -238,  -238,   525,  -238
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    59,    62,    87,    67,    82,    57,    66,    90,    64,
      65,    60,    88,    63,    68,    58,    69,    61,    89,    70,
      71,    72,     0,     2,     3,     5,     6,    93,    52,    52,
      73,    52,    52,    80,     0,     1,     4,   103,     0,    45,
      53,    55,     0,    92,    51,    47,    48,    49,    50,     0,
     110,   108,   102,    44,    93,     0,    12,     8,    10,    93,
      94,    93,    91,   202,     0,    83,    85,   109,   111,    54,
      55,     0,     0,     0,   195,   199,   200,   201,   197,   127,
       0,   170,   171,   172,   173,   174,   175,    56,   121,   136,
     138,   140,   142,   144,   146,   148,   150,   153,   158,   161,
     164,     0,   168,   176,   186,   196,    13,    11,     0,   103,
      12,    78,     0,     0,     0,   180,     0,   177,   178,     0,
       0,     0,     0,   126,     0,   129,    77,   120,    77,     0,
       0,   133,   203,     0,   203,     0,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,   168,     0,     0,   191,   192,     0,   183,     0,
       0,    95,   103,   105,   102,   107,    79,    84,    86,   135,
       0,     0,     0,   132,   122,   127,   124,   128,   130,    76,
      74,    75,     0,   198,     0,     0,   203,     0,   145,     0,
     149,   151,   152,   154,   156,   155,   157,   159,   160,   162,
     163,   165,   166,   167,   137,   190,     0,   184,     0,   182,
     189,    25,     7,     0,   171,     0,   104,     0,   118,    93,
       0,     0,   112,   114,   106,   181,     0,   131,   123,     0,
     127,   169,   134,   141,     0,   143,   147,   187,   188,     0,
       0,     0,     0,     0,   203,     0,     0,     0,    32,     0,
     203,   195,    29,    14,    15,     0,   203,    26,    16,     0,
      17,    18,    19,    28,    31,     0,    99,    96,     0,   116,
     101,   100,     0,     0,   125,     0,   204,   185,    42,     0,
      41,    32,    32,    32,     0,     0,     0,     0,     0,    32,
      23,    32,    30,    97,    98,   113,   115,   119,   193,   127,
       0,    32,    22,   203,     0,    32,    40,     0,    43,     0,
       0,    20,    27,   194,   203,    21,     0,   203,     0,   204,
      32,     0,     0,     0,    32,    32,   203,    35,   204,   139,
       0,   204,     0,    32,   203,     0,     0,    32,   204,    32,
     204,   203,    39,    34,    36,     0,    32,   203,    37,   204,
      32,     0,   204,   203,    33,    32,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -238,  -238,  -238,   322,  -238,  -238,  -238,   236,  -238,  -169,
    -238,   200,  -238,  -238,    58,  -238,  -237,  -238,  -238,  -238,
     -40,  -238,     0,   164,  -238,   297,  -238,   -21,    86,   231,
    -238,  -238,  -238,   277,   -18,  -238,   -25,  -238,  -238,   -72,
    -238,  -238,   310,   263,  -238,  -238,   120,  -238,   108,  -107,
     161,  -163,  -238,  -238,   276,   -74,  -110,   -30,  -106,  -238,
     218,   217,   270,   219,   272,    87,    77,    84,    85,   -85,
    -238,   -68,  -238,  -238,  -238,  -238,  -238,  -238,  -126,  -190
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    23,    24,    25,    56,    57,   106,   160,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
      26,    38,    59,    45,    39,    40,    28,    29,   127,   180,
      30,    34,    64,    65,    31,    32,    70,    42,    62,    51,
     215,   220,    43,    52,   221,   222,   223,   224,   129,    87,
     121,   122,   123,   124,   125,   264,   168,   131,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   208,   209,   103,   104,   105,    66,   185,   133
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    58,    41,   115,   117,   118,   130,   169,   187,   172,
     189,   286,   229,   169,    33,   176,   151,   107,    35,    50,
     154,   155,   156,    27,   132,    88,   183,   237,    44,    44,
     111,    44,    44,   152,    68,   319,   108,   163,     3,   -81,
     130,    63,   130,    49,   184,   152,   304,   184,    54,   112,
     166,   152,    63,   184,    12,   157,    53,   158,   159,   126,
     234,  -204,   128,   201,   202,   203,    18,   152,   318,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   206,   174,   298,   300,   331,   332,    60,
     213,    50,    88,   126,   148,   126,   128,   231,   128,   149,
     150,    37,    61,   175,   299,   126,   134,   126,   128,   349,
     128,   -46,   302,   303,   152,   144,   145,   152,   282,   152,
     311,   152,   274,   204,   288,   320,    37,   328,   207,   326,
     291,   279,   315,   216,   119,   169,   229,   120,   334,   340,
    -117,   336,   113,   184,    50,   184,    68,    37,   343,   119,
     345,   327,   120,   177,   232,   138,   139,   184,  -117,   351,
     276,   228,   354,   119,   338,   219,   120,    55,   342,     3,
     344,   263,   137,   152,   313,   135,   119,   316,   109,   120,
     110,   352,     3,   265,   136,    12,   356,   268,   322,   153,
     162,   324,   161,    46,   269,    47,    48,    18,    12,    88,
     333,   146,   147,   217,   140,   141,   142,   143,   339,   277,
      18,   307,   179,   309,   179,   346,   329,   193,   194,   195,
     196,   350,   170,   182,   171,   191,   192,   355,   197,   198,
       1,   199,   200,     2,     3,   173,   321,   186,     4,   211,
       5,     6,     7,   305,   205,   210,     8,     9,    10,    11,
      12,   263,    13,    14,   152,    15,   335,   225,   226,   227,
      16,    17,    18,   238,    19,    20,    21,   266,   239,   267,
     270,   272,   219,   271,     1,   240,   241,     2,     3,   242,
     243,   244,     4,   273,     5,     6,     7,   245,   246,   247,
       8,     9,    10,    11,    12,   248,    13,    14,    71,    15,
     230,   249,   278,    -9,    16,    17,    18,   250,    19,    20,
      21,   280,    72,    73,   283,   281,   284,   285,   287,   289,
     290,    55,   -24,   292,   297,   184,   293,   294,   301,   323,
     306,   347,   337,   308,   310,   251,    75,    76,    77,   317,
      78,   314,   330,   353,   325,    36,   165,   211,    80,   312,
      81,    69,    82,    83,    84,    85,    86,   341,   348,   181,
     212,    67,   -32,     1,   240,   241,     2,     3,   242,   243,
     244,     4,   164,     5,     6,     7,   245,   246,   247,     8,
       9,    10,    11,    12,   248,    13,    14,    71,    15,   167,
     249,   275,   296,    16,    17,    18,   250,    19,    20,    21,
     178,    72,    73,   233,   235,   188,     0,     0,   236,   190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   251,    75,    76,    77,     0,    78,
       0,     0,     0,     0,     0,     0,   211,    80,     0,    81,
       0,    82,    83,    84,    85,    86,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
      71,    15,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     0,    72,    73,     2,     3,     0,     0,
       0,     4,     0,     5,     0,     7,     0,     0,     0,     0,
       9,    10,     0,    12,     0,    13,    14,    74,    75,    76,
      77,     0,    78,    16,    17,    18,     0,    19,    20,    21,
      80,     0,    81,     0,    82,    83,    84,    85,    86,   240,
     241,     0,     0,   242,   243,   244,     0,     0,     0,     0,
       0,   245,   246,   247,     0,     0,     0,     0,     0,   248,
       0,     0,    71,     0,     0,   249,     0,     0,     0,     0,
       0,   250,     0,     0,     0,     0,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   251,
      75,    76,    77,     0,    78,     0,     0,     0,     0,     0,
       0,   211,    80,     0,    81,     0,    82,    83,    84,    85,
      86,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       7,     0,     0,     0,     0,     9,    10,     0,    12,     0,
      13,    14,    71,     0,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     0,    72,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,     0,    78,     0,     0,     0,     0,     0,
       0,     0,    80,     0,    81,     0,    82,    83,    84,    85,
      86,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,    71,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,    72,    73,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,     0,
       0,    74,    75,    76,    77,     0,    78,    72,    73,     0,
       0,     0,   218,    79,    80,     0,    81,     0,    82,    83,
      84,    85,    86,    71,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,     0,    78,     0,    72,    73,     0,
       0,     0,   230,    80,     0,    81,     0,    82,    83,    84,
      85,    86,    71,     0,     0,     0,     0,     0,     0,     0,
      74,    75,    76,    77,     0,    78,    72,    73,     0,     0,
       0,     0,     0,   114,     0,    81,     0,    82,    83,    84,
      85,    86,    71,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,     0,    78,     0,    72,    73,     0,     0,
       0,     0,   116,     0,    81,     0,    82,    83,    84,    85,
      86,    71,     0,     0,     0,     0,     0,     0,     0,    74,
      75,    76,    77,     0,    78,    72,    73,     0,     0,     0,
       0,     0,    80,     0,    81,     0,    82,    83,    84,    85,
      86,     0,     0,     0,     0,     0,     0,     0,    74,    75,
      76,    77,     0,    78,     0,     0,     0,     0,     0,     0,
       0,    80,     0,    81,     0,   214,    83,    84,    85,    86,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
     295,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    41,    27,    71,    72,    73,    80,   113,   134,   119,
     136,   248,   175,   119,    64,   122,   101,    57,     0,    37,
      40,    41,    42,    23,    52,    55,    74,    72,    28,    29,
      73,    31,    32,   101,    52,    74,    61,   109,     7,    76,
     114,    64,   116,    76,    92,   113,   283,    92,    92,    92,
      73,   119,    64,    92,    23,    75,    91,    77,    78,    80,
     186,    89,    80,   148,   149,   150,    35,   135,   305,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   157,    73,    73,   276,   324,   325,    64,
     162,   109,   122,   114,    81,   116,   114,   182,   116,    86,
      87,    81,    77,    92,    92,   126,    51,   128,   126,   346,
     128,    91,   281,   282,   182,    43,    44,   185,   244,   187,
     289,   189,   229,   153,   250,    74,    81,    74,   158,   319,
     256,   241,   301,   163,    75,   241,   299,    78,   328,    74,
      74,   331,    94,    92,   162,    92,   164,    81,   338,    75,
     340,   320,    78,    94,   184,    49,    50,    92,    92,   349,
     234,    73,   352,    75,   333,   165,    78,    94,   337,     7,
     339,   211,    79,   241,    73,    95,    75,   303,    75,    78,
      77,   350,     7,   213,    88,    23,   355,   217,   314,    94,
      28,   317,    74,    29,   219,    31,    32,    35,    23,   229,
     326,    82,    83,    28,    45,    46,    47,    48,   334,   239,
      35,   285,   126,   287,   128,   341,   322,   140,   141,   142,
     143,   347,   114,    74,   116,   138,   139,   353,   144,   145,
       3,   146,   147,     6,     7,    64,   310,    89,    11,    76,
      13,    14,    15,   283,    64,    64,    19,    20,    21,    22,
      23,   291,    25,    26,   322,    28,   330,    74,    74,    72,
      33,    34,    35,    74,    37,    38,    39,    72,    92,    72,
      74,    92,   272,    74,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    92,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      76,    30,    91,    76,    33,    34,    35,    36,    37,    38,
      39,    91,    41,    42,    77,    90,    64,    77,    77,    90,
      73,    94,    73,    91,    64,    92,    72,    72,    90,    36,
      91,    12,    74,    91,    77,    64,    65,    66,    67,    91,
      69,    90,    77,    74,    91,    23,   110,    76,    77,   291,
      79,    54,    81,    82,    83,    84,    85,    91,    91,   128,
     160,    51,    91,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   109,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,   112,
      30,   230,   272,    33,    34,    35,    36,    37,    38,    39,
     124,    41,    42,   185,   187,   135,    -1,    -1,   189,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,
      -1,    81,    82,    83,    84,    85,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39,    -1,    41,    42,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    -1,    25,    26,    64,    65,    66,
      67,    -1,    69,    33,    34,    35,    -1,    37,    38,    39,
      77,    -1,    79,    -1,    81,    82,    83,    84,    85,     4,
       5,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    -1,    81,    82,    83,    84,
      85,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    82,    83,    84,
      85,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    27,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    41,    42,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    -1,    69,    41,    42,    -1,
      -1,    -1,    64,    76,    77,    -1,    79,    -1,    81,    82,
      83,    84,    85,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    -1,    69,    -1,    41,    42,    -1,
      -1,    -1,    76,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    -1,    69,    41,    42,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    81,    82,    83,
      84,    85,    27,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    69,    -1,    41,    42,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    82,    83,    84,
      85,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    69,    41,    42,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    81,    82,    83,    84,    85,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      53,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,    97,    98,    99,   100,   116,   118,   122,   123,
     126,   130,   131,    64,   127,     0,    99,    81,   117,   120,
     121,   132,   133,   138,   118,   119,   119,   119,   119,    76,
     130,   135,   139,    91,    92,    94,   101,   102,   116,   118,
      64,    77,   134,    64,   128,   129,   173,   138,   130,   121,
     132,    27,    41,    42,    64,    65,    66,    67,    69,    76,
      77,    79,    81,    82,    83,    84,    85,   145,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   170,   171,   172,   103,   116,   132,    75,
      77,    73,    92,    94,    77,   167,    77,   167,   167,    75,
      78,   146,   147,   148,   149,   150,   123,   124,   130,   144,
     151,   153,    52,   175,    51,    95,    88,    79,    49,    50,
      45,    46,    47,    48,    43,    44,    82,    83,    81,    86,
      87,   165,   167,    94,    40,    41,    42,    75,    77,    78,
     104,    74,    28,   135,   139,   103,    73,   129,   152,   154,
     144,   144,   152,    64,    73,    92,   145,    94,   150,   124,
     125,   125,    74,    74,    92,   174,    89,   174,   158,   174,
     160,   161,   161,   162,   162,   162,   162,   163,   163,   164,
     164,   165,   165,   165,   153,    64,   151,   153,   168,   169,
      64,    76,   107,   135,    81,   136,   153,    28,    64,   118,
     137,   140,   141,   142,   143,    74,    74,    72,    73,   147,
      76,   165,   153,   156,   174,   157,   159,    72,    74,    92,
       4,     5,     8,     9,    10,    16,    17,    18,    24,    30,
      36,    64,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   151,   153,    72,    72,   153,   132,
      74,    74,    92,    92,   145,   146,   151,   153,    91,   152,
      91,    90,   174,    77,    64,    77,   112,    77,   174,    90,
      73,   174,    91,    72,    72,    53,   142,    64,    73,    92,
     175,    90,   105,   105,   112,   116,    91,   151,    91,   151,
      77,   105,   110,    73,    90,   105,   174,    91,   112,    74,
      74,   151,   174,    36,   174,    91,   175,   105,    74,   154,
      77,   112,   112,   174,   175,   151,   175,    74,   105,   174,
      74,    91,   105,   175,   105,   175,   174,    12,    91,   112,
     174,   175,   105,    74,   175,   174,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    98,    99,    99,   100,   101,   101,
     102,   102,   103,   104,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   108,   108,   109,   109,   110,   110,
     111,   112,   112,   113,   113,   113,   114,   114,   114,   114,
     115,   115,   115,   115,   116,   117,   117,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   126,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   130,
     131,   132,   133,   133,   134,   134,   134,   134,   134,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   145,   145,   145,   146,   146,   147,   147,   148,   149,
     149,   150,   150,   151,   151,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   160,   160,   161,   161,   161,   161,   161,   162,   162,
     162,   163,   163,   163,   164,   164,   164,   164,   165,   165,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   168,   168,   169,   169,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   171,   171,   171,   171,   172,
     172,   172,   173,   174,   175
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     1,     0,
       1,     2,     0,     0,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     3,     1,     0,     1,     3,     1,     1,
       2,     1,     0,    12,     8,     5,     8,    10,    14,     8,
       3,     2,     2,     3,     3,     1,     0,     2,     2,     2,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     5,     6,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     0,     1,     3,     5,     6,     6,     5,
       5,     5,     1,     0,     1,     0,     1,     0,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     2,     4,     1,     0,     2,     1,
       2,     3,     2,     1,     3,     1,     1,     3,     1,     9,
       1,     4,     1,     4,     1,     3,     1,     4,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     4,     1,     0,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     6,     7,     1,     1,     1,     3,     1,
       1,     1,     1,     0,     0
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
#line 172 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//Notice the nextlist attribute used
							backpatch((yyvsp[0].expr)->nextlist,quadPointer);//clearly we have to point all the dangling pointers to the end of prgram
							emit(ENDPROGRAM,"====");//The endprogram quad
						}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 186 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc = (yyvsp[0].loc);
						}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 196 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							symTab = (yyvsp[-2].funcP)->symTabP->parent;//Going back to earlier symbol table
							(yyval.expr) = new expression;
							(yyval.expr)->nextlist = (yyvsp[0].expr)->nextlist;//The nextlist will be taken up the order
							quadVector[(yyvsp[-1].intval)]->result=(yyvsp[-4].loc)->name;//Telling the name of function
						}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 214 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.funcP) = new funcPointer;
							if(curSym->symTabPointer)
							{
								(yyval.funcP)->symTabP = curSym->symTabPointer;
								(yyval.funcP)->symTabP->parent = symTab;
							}
							else
							{
								(yyval.funcP)->symTabP = new symbolTable;
								(yyval.funcP)->symTabP->parent = symTab;
							}
							symTab = (yyval.funcP)->symTabP;//making the symbol table pointer to point to the desired table
						}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 230 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.intval) = quadPointer;
							emit(FUNCTION_OP,"----");
						}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 248 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 249 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 250 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 255 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
								(yyval.expr) = new expression;
								(yyval.expr)->nextlist = (yyvsp[-1].expr)->nextlist;
							}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 264 "ass6_14CS30030.y" /* yacc.c:1646  */
    {	
							(yyval.expr) = new expression;
							(yyval.expr)->nextlist = 0;
						}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 273 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							backpatch((yyvsp[-2].expr)->nextlist,(yyvsp[-1].intval));//backpatching the dangling goto's to next instruction
							(yyval.expr)->nextlist = (yyvsp[0].expr)->nextlist;//associating the nextlist with the new block_item
						}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 280 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)->nextlist = 0;}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 289 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)=0;}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 295 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							backpatch((yyvsp[-7].expr)->nextlist,quadPointer);
							if((yyvsp[-9].expr)->loc->type->type!=_BOOL)//checking the expression type,if it is not bool,then convert it to bool
								conv2bool((yyvsp[-9].expr));//converting the expression to bool type
							backpatch((yyvsp[-9].expr)->truelist,(yyvsp[-6].intval));
							backpatch((yyvsp[-9].expr)->falselist,(yyvsp[-2].intval));
							list<int>* temp1 = merge((yyvsp[-5].expr)->nextlist,(yyvsp[-4].expr)->nextlist);
							list<int>* temp2 = merge((yyvsp[-1].expr)->nextlist,(yyvsp[0].expr)->nextlist);
							(yyval.expr)->nextlist = merge(temp1,temp2);//creating the nextlist
						}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 308 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							if((yyvsp[-5].expr)->type->type!=_BOOL)
							{	
								conv2bool((yyvsp[-5].expr));
							}
							backpatch((yyvsp[-3].expr)->nextlist,quadPointer);							
							backpatch((yyvsp[-5].expr)->truelist,(yyvsp[-2].intval));
							if((yyvsp[-1].expr)->nextlist!=NULL)
							{	
								list<int>* temp = merge((yyvsp[-1].expr)->nextlist,(yyvsp[0].expr)->nextlist);
								(yyval.expr)->nextlist = merge((yyvsp[-5].expr)->falselist,temp);
							}
							else
							{
								(yyval.expr)->nextlist = merge((yyvsp[-5].expr)->falselist,(yyvsp[0].expr)->nextlist);
							}
						}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 327 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 333 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							emit(_goto,to_string((yyvsp[-6].intval)));
							backpatch((yyvsp[-2].expr)->nextlist,quadPointer);
							if((yyvsp[-4].expr)->loc->type->type!=_BOOL)//again conversion to bool expression
							conv2bool((yyvsp[-4].expr));
							backpatch((yyvsp[-4].expr)->truelist,(yyvsp[-1].intval));//backpatching truelist
							backpatch((yyvsp[0].expr)->nextlist,(yyvsp[-6].intval));
							(yyval.expr)->nextlist = (yyvsp[-4].expr)->falselist;// assigning nextlist
						}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 346 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							backpatch((yyvsp[-1].expr)->nextlist,quadPointer);//To make it go to the next instruction							
							if((yyvsp[-3].expr)->loc->type->type!=_BOOL)//again bool type checking
							conv2bool((yyvsp[-3].expr));
							backpatch((yyvsp[-3].expr)->truelist,(yyvsp[-8].intval));//backpatching truelist
							backpatch((yyvsp[-7].expr)->nextlist,(yyvsp[-6].intval));
							(yyval.expr)->nextlist = (yyvsp[-3].expr)->falselist;//assigning nextlist
							
						}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 360 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							emit(_goto,to_string((yyvsp[-5].intval)));
							backpatch((yyvsp[-7].expr)->nextlist,quadPointer);
							if((yyvsp[-8].expr)->loc->type->type!=_BOOL)
							conv2bool((yyvsp[-8].expr));
							backpatch((yyvsp[-8].expr)->truelist,(yyvsp[-1].intval));
							backpatch((yyvsp[-3].expr)->nextlist,(yyvsp[-9].intval));
							backpatch((yyvsp[0].expr)->nextlist,(yyvsp[-5].intval));							
							(yyval.expr)->nextlist = (yyvsp[-8].expr)->falselist;//generated nextlist
						}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 372 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[0].expr);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 381 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							Symbol* symb = symTab->lookup("$return_value$");
							//do the typechecking with the return type of the function
							if((yyvsp[-1].expr))
							{

								if(symb->type->type==(yyvsp[-1].expr)->loc->type->type)
								{
							
									emit(_RETURN,(yyvsp[-1].expr)->loc->name);//return the value given in case of same type
								}
								else
								{
							
									if(symb->type->type==_VOID)
									{
										cerr<<"Wrong return type"<<endl;//No return value 
									}
									else
									{
										convert((yyvsp[-1].expr),symb->type->type);//type casting
										emit(_RETURN,(yyvsp[-1].expr)->loc->name);//emitting the return
									}
									
								}
								(yyval.expr) = new expression;
							}
							else
							{

								if(symb->type->type==_VOID)
								{
							
									emit(_RETURN,"NULL");//void type return. Will simply print return
								}
								else
								{
									cerr<<"Wrong return type"<<endl;
								}
								(yyval.expr) = new expression;
							}
							
						}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 429 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.loc) = (yyvsp[-1].loc);
						}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 435 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.loc)=(yyvsp[0].loc);
						}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 439 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.loc) =0;}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 444 "ass6_14CS30030.y" /* yacc.c:1646  */
    {

							(yyval.typeptr)=createType((yyvsp[-1].typeptr)->type);
							globalType = createType((yyvsp[-1].typeptr)->type);						
						}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 455 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 464 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							updateSymbolInitVal((yyvsp[-2].loc),(yyvsp[0].expr)->loc->name);
							emit(COPY,(yyvsp[-2].loc)->name,(yyvsp[0].expr)->loc->name);
							(yyval.loc) = (yyvsp[-2].loc);
							
						}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 478 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=createType(_VOID); globalType = createType(_VOID);}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 479 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=createType(_CHAR);globalType = createType(_CHAR);}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 480 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 481 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=createType(_INT);globalType = createType(_INT);}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 482 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 483 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 484 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=createType(_DOUBLE);globalType = createType(_DOUBLE);}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 485 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 486 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 487 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 488 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 489 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 490 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 494 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=(yyvsp[-1].typeptr);}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 495 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 499 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 508 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)->loc = 0;(yyval.expr)->int_val=-1;}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 528 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							if((yyvsp[-1].typeptr)!=0)
							{
								Type *ptr;
								ptr = (yyvsp[-1].typeptr);
								while(ptr->next)ptr=ptr->next;
								if((yyvsp[0].loc)->type->type==_FUNCTION)
								{
									Symbol *ret = (yyvsp[0].loc)->symTabPointer->lookup("$return_value$");
									ptr->next = ret->type;
									updateSymbol(ret,ptr);
								}
								else
								{
									ptr->next = (yyvsp[0].loc)->type;
									updateSymbol((yyvsp[0].loc),(yyvsp[-1].typeptr));
								}
								(yyval.loc) = (yyvsp[0].loc);
							}
							else
							{
								(yyval.loc) = (yyvsp[0].loc);
							}
						}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 554 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=(yyvsp[0].typeptr);}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 555 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.typeptr)=0;}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 559 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							curSym=(yyvsp[0].loc);//It will hold the value of current symbol being read.
							//It will help us to decide the function table pointer handling in the F non terminal grammar
							(yyval.loc) = (yyvsp[0].loc);
							updateSymbol((yyvsp[0].loc),globalType);//upadating the type
						}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 566 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.loc) = (yyvsp[-1].loc);
						}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 572 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							if((yyvsp[-1].expr)->int_val>0)//Will happen only when we have integer value inside square brackets
							{
								(yyval.loc) = (yyvsp[-4].loc);				
								Type *baseType = getBaseType((yyvsp[-4].loc)->type);
								Type *temp = createType(_ARRAY);
								temp->width = (yyvsp[-1].expr)->int_val * (yyvsp[-4].loc)->type->width;
								temp->count = (yyvsp[-1].expr)->int_val;

								Type *arTemp = (yyvsp[-4].loc)->type;								
								Type *t;								
								
								//handling the count for calculating the width
								Type* p = NULL;
								t = arTemp;								
								if(t->type==_ARRAY)
								{
									while(t->type ==_ARRAY)
									{
										p = t;
										t = t->next;
									}
									p->next = NULL;
									reverse(&arTemp);
									temp->next = arTemp;
									t = temp;									
									int width = baseType->width;									
									while(t && t->type==_ARRAY)
									{	
										t->width = t->count * width;								
										width = t->width;
										t =  t->next;
									}
									reverse(&temp);								
								}
								
								p = NULL;
								t = temp;								
								while(t!=NULL)
								{	
									p = t;
									t =  t->next;
								}								
								p->next = baseType;

								(yyvsp[-4].loc)->type = temp;							
																				
							}
							else//error handling
							{
								cerr<<"Wrong array declaration"<<endl;
							}
						}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 630 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//funciton declaration 
							//Note that F will make the symTab to point to the symbolTable associated with currentSymbol being read curSym
							curSym = (yyvsp[-4].loc);
							(yyvsp[-4].loc)->symTabPointer = (yyvsp[-2].funcP)->symTabP;
							if((yyvsp[-2].funcP)->symTabP->param==0)//it will help to know the number of parameters in a function which would prove beneficial during function calling
							{
								(yyvsp[-2].funcP)->symTabP->param = (yyvsp[-2].funcP)->symTabP->symbols.size();
							}
							Type* temp = (yyvsp[-4].loc)->type;
							Type *t = createType(_FUNCTION);//making the function type
							Symbol *retval = symTab->lookup("$return_value$");//adding the return value in the _FUNCTION symbol table for type checking in future
							updateSymbol(retval,temp);
							symTab=(yyvsp[-2].funcP)->symTabP->parent;
							updateSymbol((yyvsp[-4].loc),t);
							
						}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 649 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							curSym = (yyvsp[-4].loc);
							(yyvsp[-4].loc)->symTabPointer = (yyvsp[-2].funcP)->symTabP;
							if((yyvsp[-2].funcP)->symTabP->param==0)
							{
								(yyvsp[-2].funcP)->symTabP->param = (yyvsp[-2].funcP)->symTabP->symbols.size();
							}
							Type* temp = (yyvsp[-4].loc)->type;
							Type *t = createType(_FUNCTION);
							
							Symbol *retval = symTab->lookup("$return_value$");
							updateSymbol(retval,temp);


							symTab=(yyvsp[-2].funcP)->symTabP->parent;
							updateSymbol((yyvsp[-4].loc),t);
						}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 669 "ass6_14CS30030.y" /* yacc.c:1646  */
    {}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 673 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr) = new expression;(yyval.expr)->loc = 0;(yyval.expr)->int_val=-1;}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 682 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.typeptr) = createType(_POINTER);
						}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 687 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].typeptr) != NULL)
							{
								(yyval.typeptr) = createType(_POINTER);
								(yyval.typeptr)->next = (yyvsp[0].typeptr);
							}
							else
							{
								(yyval.typeptr) = createType(_POINTER);
							}
						}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 724 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-1].expr);}
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 725 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr)=(yyvsp[-2].expr);}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 758 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							
							if((yyvsp[-2].expr)->array_oc==0 && (yyvsp[-2].expr)->isPointer==0)//when the left side is neither array nor pointer
							{	

								if((yyvsp[0].expr)->type->type!=_BOOL)//bool type is handled separately	
								{	
							
									if((yyvsp[0].expr)->type->type!=(yyvsp[-2].expr)->type->type)														
										convert((yyvsp[0].expr),(yyvsp[-2].expr)->type->type);//typechecking and subsequent conversion
									
									emit(COPY,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
									(yyval.expr) = (yyvsp[-2].expr);								
								}
								else
								{  //handling of bool type
									backpatch((yyvsp[0].expr)->truelist,quadPointer);
									backpatch((yyvsp[0].expr)->falselist,quadPointer);
									emit(COPY,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);
									(yyval.expr) = (yyvsp[-2].expr);
								}						
							}
							else if((yyvsp[-2].expr)->isPointer==0)
							{	//array exists on left side
								emit(ARRAYLEFT,array_name,(yyvsp[-2].expr)->loc->name,(yyvsp[0].expr)->loc->name);								
								(yyval.expr) = (yyvsp[-2].expr);
							
							}
							else 
							{
								//The pointer occurred on left side.
								string res = "*";
								res.append((yyvsp[-2].expr)->loc->name);
								emit(COPY,res,(yyvsp[0].expr)->loc->name);
								(yyval.expr) = (yyvsp[-2].expr);
							}


						}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 814 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//The handling of ternary operator. The semantics is same as done in class illustrations
							(yyval.expr) = new expression;
							(yyval.expr)->loc = symTab->gentemp();
							(yyval.expr)->type = (yyvsp[-4].expr)->type;
							emit(COPY,(yyval.expr)->loc->name,(yyvsp[0].expr)->loc->name);
							list<int> *l = makelist(quadPointer);
							emit(_goto,"---");
							backpatch((yyvsp[-3].expr)->nextlist,quadPointer);
							emit(COPY,(yyval.expr)->loc->name,(yyvsp[-4].expr)->loc->name);
							l = merge(l,makelist(quadPointer));
							emit(_goto,"---");
							backpatch((yyvsp[-7].expr)->nextlist,quadPointer);
							if((yyvsp[-8].expr)->loc->type->type!=_BOOL)	
							conv2bool((yyvsp[-8].expr)); 
							backpatch((yyvsp[-8].expr)->truelist,(yyvsp[-5].intval));
							backpatch((yyvsp[-8].expr)->falselist,(yyvsp[-1].intval));
							backpatch(l,quadPointer);
						}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 838 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							if((yyvsp[-3].expr)->loc->type->type!=_BOOL)	//typechecking for bool						
							conv2bool((yyvsp[-3].expr));
							if((yyvsp[0].expr)->loc->type->type!=_BOOL)
							conv2bool((yyvsp[0].expr));
							backpatch((yyvsp[-3].expr)->falselist,(yyvsp[-1].intval));//backpatching falselist of statement 1
							(yyval.expr)->loc = symTab->gentemp();
							updateSymbol((yyval.expr)->loc,createType(_BOOL));
							(yyval.expr)->type = createType(_BOOL);
							(yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist,(yyvsp[0].expr)->truelist);//truelist assingment
							(yyval.expr)->falselist = (yyvsp[0].expr)->falselist;//falselist assignment
						}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 857 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							if((yyvsp[-3].expr)->loc->type->type!=_BOOL)//type checking							
							conv2bool((yyvsp[-3].expr));
							if((yyvsp[0].expr)->loc->type->type!=_BOOL)
							conv2bool((yyvsp[0].expr));
							backpatch((yyvsp[-3].expr)->truelist,(yyvsp[-1].intval));
							(yyval.expr)->loc = symTab->gentemp();
							updateSymbol((yyval.expr)->loc,createType(_BOOL));//making the type bool
							(yyval.expr)->type = createType(_BOOL);
							(yyval.expr)->truelist = (yyvsp[0].expr)->truelist;
							(yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist,(yyvsp[0].expr)->falselist);
						}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 874 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//handled as if it is the binary operator
							(yyval.expr) = new expression;
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr)->type = (yyvsp[-2].expr)->type;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							emit(BIT_OR,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 888 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//handled as if both the left and right side are boolean types.
							//Not checked for test case. Will be differently implemented if considered as binary operator
							(yyval.expr) = new expression;
							backpatch((yyvsp[-3].expr)->truelist,quadPointer);
							emit(COPY,(yyvsp[-3].expr)->loc->name,"1");
							emit(_goto,to_string((yyvsp[-1].intval)));
							backpatch((yyvsp[-3].expr)->falselist,quadPointer);
							emit(COPY,(yyvsp[-3].expr)->loc->name,"0");
							emit(_goto,to_string((yyvsp[-1].intval)));

							(yyval.expr)->truelist = makelist(quadPointer);
							backpatch((yyvsp[0].expr)->falselist,quadPointer);
							emit(_if,"---",(yyvsp[-3].expr)->loc->name);
							(yyval.expr)->falselist = makelist(quadPointer);
							emit(_goto,"---");

							list<int>* temp = makelist(quadPointer);
							(yyval.expr)->falselist = merge((yyval.expr)->falselist,temp);
							backpatch((yyvsp[0].expr)->truelist,quadPointer);
							emit(_if,"----",(yyvsp[0].expr)->loc->name);
							temp = makelist(quadPointer);
							(yyval.expr)->truelist = merge((yyval.expr)->truelist,temp);
							emit(_goto,"---");						
						}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 917 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//handled as if it is the binary operator
							(yyval.expr) = new expression;
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr)->loc=symTab->gentemp();
							(yyval.expr)->type = (yyvsp[-2].expr)->type;
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->type);
							emit(BIT_AND,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 931 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(EQUAL_TO,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 937 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(NOT_EQUAL_TO,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 945 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(LESS_THAN,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 951 "ass6_14CS30030.y" /* yacc.c:1646  */
    {	//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(GREATER_THAN,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 956 "ass6_14CS30030.y" /* yacc.c:1646  */
    {//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(LESS_THAN_EQUAL,(yyvsp[-2].expr),(yyvsp[0].expr));

						}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 962 "ass6_14CS30030.y" /* yacc.c:1646  */
    {//relational_expression handling Look at the funciton Definitions for more info.
							(yyval.expr) = relationEvaluate(GREATER_THAN_EQUAL,(yyvsp[-2].expr),(yyvsp[0].expr));
						}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 969 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].expr)->type->type==_INT)//will only occur if right side expression is of integer type
							{
								//Handled like a binary operator
								(yyval.expr) = new expression;
								(yyval.expr)->loc=symTab->gentemp();
								updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->type);						
								(yyval.expr)->type = (yyvsp[-2].expr)->type;
								emit(LEFT_SHIFT,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
							}
							else
							{
								cerr<<"Incompatible type"<<endl;
							}
						}
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 986 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].expr)->type->type==_INT)
							{
								//same as above
								//Handled like a binary operator
								(yyval.expr) = new expression;
								(yyval.expr)->loc=symTab->gentemp();
								updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->type);									
								(yyval.expr)->type = (yyvsp[-2].expr)->type;
								emit(RIGHT_SHIFT,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
							}
							else{
								cerr<<"Incompatible type"<<endl;
							}
						}
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1004 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyvsp[-2].expr)->type;
							emit(PLUS,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1015 "ass6_14CS30030.y" /* yacc.c:1646  */
    {

							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyvsp[-2].expr)->type;
							emit(MINUS,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1028 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;							
							emit(MULT,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);	
						}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1039 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							emit(DIVIDE,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);	
						}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1050 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							
							typecheck((yyvsp[-2].expr),(yyvsp[0].expr));
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							updateSymbol((yyval.expr)->loc,(yyvsp[-2].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							emit(MODULUS,((yyval.expr)->loc)->name,((yyvsp[-2].expr)->loc)->name,((yyvsp[0].expr)->loc)->name);
						}
#line 2784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1063 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].expr)->array_oc!=0)
							{
								(yyval.expr) = new expression;
								(yyval.expr)->loc = symTab->gentemp();
								updateSymbol((yyval.expr)->loc,getBaseType((yyvsp[0].expr)->type));
								(yyval.expr)->type = getBaseType((yyvsp[0].expr)->type);
								emit(ARRAYRIGHT,(yyval.expr)->loc->name,array_name,(yyvsp[0].expr)->loc->name);
							}
							else if((yyvsp[0].expr)->isPointer==1)
							{
								(yyval.expr) = new expression;
								(yyval.expr)->loc = symTab->gentemp();
								updateSymbol((yyval.expr)->loc,getBaseType((yyvsp[0].expr)->type));
								(yyval.expr)->type = getBaseType((yyvsp[0].expr)->type);
								emit(UPOINTER,(yyval.expr)->loc->name,(yyvsp[0].expr)->loc->name);
							}
							else
							{
								(yyval.expr) = (yyvsp[0].expr);
							}
						}
#line 2811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1087 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							if((yyvsp[0].expr)->loc->type->type !=(yyvsp[-2].typeptr)->type)
							{
								convert((yyvsp[0].expr),(yyvsp[-2].typeptr)->type);
							}
							(yyval.expr) = (yyvsp[0].expr);
						}
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1096 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UADDRESS;
							}
#line 2832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1101 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UPOINTER;
							}
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1106 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UPLUS;
							}
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1111 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UMINUS;
							}
#line 2859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1118 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UBITNEGATION;
							}
#line 2868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1123 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
								(yyval.op)=new opPointer;
								(yyval.op)->op = UNEGATION;
							}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1130 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = (yyvsp[0].expr);
						}
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1135 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							emit(PLUS,(yyvsp[0].expr)->loc->name,(yyvsp[0].expr)->loc->name,to_string(1));															
							(yyval.expr) = (yyvsp[0].expr);
							(yyval.expr)->loc = (yyvsp[0].expr)->loc;
							(yyval.expr)->type = (yyvsp[0].expr)->type;
						}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1143 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							emit(MINUS,(yyvsp[0].expr)->loc->name,(yyvsp[0].expr)->loc->name,to_string(1));	
							(yyval.expr) = (yyvsp[0].expr);
							(yyval.expr)->loc = (yyvsp[0].expr)->loc;
							(yyval.expr)->type = (yyvsp[0].expr)->type;							
						}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1151 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							if((yyvsp[-1].op)->op!=UADDRESS && (yyvsp[-1].op)->op!=UPOINTER)
							{
								(yyval.expr) = new expression;
								(yyval.expr)->loc = symTab->gentemp();
								updateSymbol((yyval.expr)->loc,(yyvsp[0].expr)->type);
								emit((yyvsp[-1].op)->op,(yyval.expr)->loc->name,(yyvsp[0].expr)->loc->name);
								(yyval.expr)->type = (yyvsp[0].expr)->type;
							}
							if((yyvsp[-1].op)->op==UPOINTER)
							{
									(yyval.expr) = new expression;
									(yyval.expr)->loc = (yyvsp[0].expr)->loc;
									(yyval.expr)->type = (yyvsp[0].expr)->loc->type;
									(yyval.expr)->isPointer = 1;//assign that it is the of pointer type
									(yyval.expr)->truelist = 0;
									(yyval.expr)->falselist = 0;
									(yyval.expr)->array_oc = 0;
								

							}
							if((yyvsp[-1].op)->op==UADDRESS)
							{
								(yyval.expr) = new expression;
								(yyval.expr)->loc = symTab->gentemp();
								Type *t = createType(_POINTER);//the temporary will be a pointer type
								t->next = (yyvsp[0].expr)->type;
								updateSymbol((yyval.expr)->loc,t);
								(yyval.expr)->type=(yyval.expr)->loc->type;
								emit((yyvsp[-1].op)->op,(yyval.expr)->loc->name,(yyvsp[0].expr)->loc->name);
							}
						}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1191 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.args)=0;}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1196 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.args)=new arg_list;
							(yyval.args)->args = makelistArgs((yyvsp[0].expr));
						}
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1202 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.args) = new arg_list;
							list<expression*> *temp = makelistArgs((yyvsp[0].expr));
							mergeArgs((yyvsp[-2].args)->args,temp);
							(yyval.args)->args = (yyvsp[-2].args)->args;
						}
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1211 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = (yyvsp[0].expr);
							(yyval.expr)->array_oc = 0;//not an array type
						}
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1217 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;							
							if((yyvsp[-3].expr)->array_oc == 0)//if it is not the array type, i.e. the type is encountered for the first time
							{
								(yyval.expr)->loc = symTab->gentemp();
								Type *baseType = getBaseType((yyvsp[-3].expr)->loc->type);								
								(yyval.expr)->loc->type = (yyvsp[-3].expr)->loc->type->next;
								if((yyval.expr)->loc->type->type==_CHAR || (yyval.expr)->loc->type->type==_DOUBLE)
								{
									
									(yyval.expr)->type = createType((yyval.expr)->loc->type->type);
									(yyval.expr)->loc->type = createType(_INT);
								}
								else 
									(yyval.expr)->type = (yyval.expr)->loc->type;
								array_name = (yyvsp[-3].expr)->loc->name;//store the array name for quad result declaration
								int add_size = (yyvsp[-3].expr)->loc->type->next->width;
								(yyval.expr)->array_oc = baseType->width;
								emit(MULT,((yyval.expr)->loc->name),(yyvsp[-1].expr)->loc->name,to_string(add_size));
								//Not that in case of two dimensional array the temporary will contain the type array for future use. This can be easily solved in the final update to symbol table
							}
							else
							{
								(yyval.expr)->loc = symTab->gentemp();
								Type *baseType = getBaseType((yyvsp[-3].expr)->loc->type);								
								(yyval.expr)->loc->type = (yyvsp[-3].expr)->loc->type->next;
								if((yyval.expr)->loc->type->type==_CHAR || (yyval.expr)->loc->type->type==_DOUBLE)
								{									
									(yyval.expr)->type = createType((yyval.expr)->loc->type->type);
									(yyval.expr)->loc->type = createType(_INT);
								}
								else 
									(yyval.expr)->type = (yyval.expr)->loc->type;							
								(yyval.expr)->array_oc = baseType->width;
								int add_size = (yyvsp[-3].expr)->loc->type->next->width;
								Symbol* temp = symTab->gentemp();
								updateSymbol(temp,(yyval.expr)->loc->type);
								//This is the case of multi dimensional array
								emit(MULT,temp->name,(yyvsp[-1].expr)->loc->name,to_string(add_size));
								emit(PLUS,(yyval.expr)->loc->name,(yyvsp[-3].expr)->loc->name,temp->name);
							}
						}
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1261 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							//the function handling
							(yyval.expr) = new expression;
							(yyval.expr)->loc = symTab->gentemp();							
							Symbol* ret = (yyvsp[-3].expr)->loc->symTabPointer->lookup("$return_value$");
							if(ret->type->type!=_VOID)
							{
								(yyval.expr)->loc = symTab->gentemp();
								updateSymbol((yyval.expr)->loc,ret->type);
								(yyval.expr)->type = ret->type;	
							}

							list<expression*> *L = new list<expression*>;
							L = (yyvsp[-1].args)?(yyvsp[-1].args)->args:0;//The arguments list
							int number_of_args;
							if(L)
							{
								number_of_args =  (yyvsp[-1].args)->args->size();
							} 
							else
							{
								number_of_args = 0;
							}
							int number_of_params = (yyvsp[-3].expr)->loc->symTabPointer->param;

							if(number_of_params>number_of_args)//parameter count checking
							{
								cerr<<"TOO LESS ARGUMENTS"<<endl;
							}
							else if(number_of_params<number_of_args)
							{
								cerr<<"TOO MANY ARGUMENTS"<<endl;
							}
							else
							{	//One can do parameter type checking but for the sake of ease of complexity it is avoided
								if((yyvsp[-1].args))
								{
									L = (yyvsp[-1].args)->args;
									for(list<expression*>::iterator it = (*L).begin();it != (*L).end(); ++it)
									{
										expression* index = *it;
										emit(PARAM,index->loc->name);//printing quads of parameters
									}
									if(ret->type->type!=_VOID)
									emit(CALL,(yyval.expr)->loc->name,(yyvsp[-3].expr)->loc->name,to_string(number_of_params));//caslling the funciton
									else
									emit(CALL,"VOID",(yyvsp[-3].expr)->loc->name,to_string(number_of_params));//caslling the funciton
								}
								else
								{	
									if(ret->type->type!=_VOID)
									emit(CALL,(yyval.expr)->loc->name,(yyvsp[-3].expr)->loc->name,to_string(number_of_params));
									else
									emit(CALL,"VOID",(yyvsp[-3].expr)->loc->name,to_string(number_of_params));//caslling the funciton
								}
							}
							
						}
#line 3089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1325 "ass6_14CS30030.y" /* yacc.c:1646  */
    {							
							(yyval.expr) = new expression;
							(yyval.expr)->loc = symTab->gentemp();													
							updateSymbol((yyval.expr)->loc,(yyvsp[-1].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;							
							emit(COPY,(yyval.expr)->loc->name,(yyvsp[-1].expr)->loc->name);
							emit(PLUS,(yyvsp[-1].expr)->loc->name,(yyvsp[-1].expr)->loc->name,"1");	
						}
#line 3102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1335 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc = symTab->gentemp();														
							updateSymbol((yyval.expr)->loc,(yyvsp[-1].expr)->loc->type);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							emit(COPY,(yyval.expr)->loc->name,(yyvsp[-1].expr)->loc->name);
							emit(MINUS,(yyvsp[-1].expr)->loc->name,(yyvsp[-1].expr)->loc->name,"1");
						}
#line 3115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1349 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc = (yyvsp[0].loc);
							(yyval.expr)->type = (yyval.expr)->loc->type;
							(yyval.expr)->truelist = 0;
							(yyval.expr)->falselist = 0;
						}
#line 3127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1357 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1360 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc = symTab->gentemp();
							Type *t = createType(_POINTER);
							t->next = createType(_CHAR);
							updateSymbol((yyval.expr)->loc,t);
							(yyval.expr)->type = t;
							emit(_STRING,(yyval.expr)->loc->name,(yyvsp[0].sval),"NULL");
						}
#line 3147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1370 "ass6_14CS30030.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[-1].expr);}
#line 3153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1374 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							(yyval.expr)->type = createType(_INT);
							updateSymbol((yyval.expr)->loc,(yyval.expr)->type);
							(yyval.expr)->int_val = (yyvsp[0].intval);//assingment of integer value. Useful for array declaration and width calculations
							updateSymbolInitVal((yyval.expr)->loc,to_string((yyvsp[0].intval)));
							emit(COPY,(yyval.expr)->loc->name,to_string((yyvsp[0].intval)));		
							(yyval.expr)->truelist = 0;
							(yyval.expr)->falselist = 0;					
						}
#line 3169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1387 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							(yyval.expr)->type = createType(_DOUBLE);
							updateSymbol((yyval.expr)->loc,(yyval.expr)->type);
							updateSymbolInitVal((yyval.expr)->loc,to_string((yyvsp[0].fval)));
							emit(COPY,(yyval.expr)->loc->name,to_string((yyvsp[0].fval)));
							(yyval.expr)->double_val = (yyvsp[0].fval);
							(yyval.expr)->int_val=-1;//when we have wrong integer type will throw an error in case of array width
							(yyval.expr)->truelist = 0;
							(yyval.expr)->falselist = 0;	
						}
#line 3186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1401 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->loc=symTab->gentemp();
							(yyval.expr)->type = createType(_CHAR);
							updateSymbol((yyval.expr)->loc,(yyval.expr)->type);
							updateSymbolInitVal((yyval.expr)->loc,to_string((yyvsp[0].cval)));
							emit(COPY,(yyval.expr)->loc->name,to_string((yyvsp[0].cval)));
							(yyval.expr)->char_val = to_string((yyvsp[0].cval));
							(yyval.expr)->int_val = -1;//when we have wrong integer type will throw error in case of array width
						}
#line 3201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1417 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.intval)=quadPointer;//contain the value of next quad pointer
						}
#line 3209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1421 "ass6_14CS30030.y" /* yacc.c:1646  */
    {
							(yyval.expr) = new expression;
							(yyval.expr)->nextlist=makelist(quadPointer);//emit a dangling goto
							emit(_goto,"---");	
						}
#line 3219 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3223 "y.tab.c" /* yacc.c:1646  */
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
#line 1427 "ass6_14CS30030.y" /* yacc.c:1906  */

//in case of error.
void yyerror(const char* s){
    printf("%s",s);
}
