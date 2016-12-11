/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 26 "ass6_14CS30030.y" /* yacc.c:1909  */

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

#line 255 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
