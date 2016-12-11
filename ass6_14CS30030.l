%{
	#include "y.tab.h"
	#include "ass6_14CS30030_translator.h"
	extern void yyerror(const char *);
	extern std::vector<Quad*> quadVector;
	extern int quadPointer;
	extern symbolTable global;
	extern symbolTable *symTab;
	extern Symbol* curSym;
	extern Type* globalType;
	extern string array_name;
	#include <iostream>
	#include <string.h>
	#include <math.h>	
	extern symbolTable *external;
	extern int labelcount;
	extern std::vector<label> labelTable;
	void count(void);
	int linecount = 1;
%}

KeyWord					{KeyWord_Column12}|{KeyWord_Column34}
KeyWord_Column12		"auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"
KeyWord_Column34		"restrict"|"return"|"short"|"Signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unSigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"

Identifier				{Identifier-NonDigit}({Identifier-NonDigit}|{Identifier-Digit})*
Identifier-NonDigit		"_"|[a-zA-Z]
Identifier-Digit		[0-9]

Constant 				{Integer_Constant}|{Floating_Constant}|{Enumeration_Constant}|{Character_Constant}
NonZero_Digit 			[1-9]
Integer_Constant 		({NonZero_Digit}{Identifier-Digit}*)|("0")
Digit_Sequence			{Identifier-Digit}+
Fractional_Constant 	({Digit_Sequence}?"."{Digit_Sequence})|({Digit_Sequence}".")
Sign 					"+"|"-"
Exponent_Part 			(e|E){Sign}?{Digit_Sequence} 
Floating_Constant 		({Fractional_Constant}{Exponent_Part}?)|({Digit_Sequence}{Exponent_Part})
Enumeration_Constant 	{Identifier}
Escape_Sequence			\\['"?\\abfnrtv]
C-Char 					[^'\\\n]|{Escape_Sequence}
Character_Sequence 		{C-Char}+
Character_Constant 		"\'"{Character_Sequence}"\'"

S_Char 					[^"\\\n]|{Escape_Sequence}
String_Literal 			\"({S_Char}+)\"

Punctuator  			{Punctuator_Column1}|{Punctuator_Column2}|{Punctuator_Column3}|{Punctuator_Column4}|{Punctuator_Column5}|{Punctuator_Column6}
Punctuator_Column1 		"["|"]"|"("|")"|"{"|"}"|"."|"->"
Punctuator_Column2 		"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"
Punctuator_Column3 		"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"
Punctuator_Column4 		"?"|":"|";"|"..."
Punctuator_Column5 		"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="
Punctuator_Column6		","|"#"

Except_Star				[^"*"]|\n
Except_StarAndSlash 	[^"/""*"]|\n
MultiLine_Comment		"/*"{Except_Star}*"*"(({Except_StarAndSlash}{Except_Star}*"*")|"*")*"/"\n

SLC 					"//"[^\n]*\n

WS		  				[ \t\v\n\f]
%%

{SLC}	{}

{MultiLine_Comment}		{}	



{KeyWord}		{
	if(strcmp(yytext,"auto") == 0){
			 
			return AUTO;
	} 	
	if(strcmp(yytext,"break") == 0){
		
		return BREAK;
	} 	
	if(strcmp(yytext,"case") == 0){
		
		return CASE;
	} 		
	if(strcmp(yytext,"char") == 0){
		
		return CHAR;
	} 	
	if(strcmp(yytext,"const") == 0){
		
		return CONST;	
	} 	
	if(strcmp(yytext,"continue") == 0){
		
		return CONTINUE;
	} 	
	if(strcmp(yytext,"default") == 0){
	 	
		return DEFAULT;
	}
	if(strcmp(yytext,"do") == 0) 		{
		
		return DO;
	}
	if(strcmp(yytext,"double") == 0){
		
		return DOUBLE;
	} 	
	if(strcmp(yytext,"else") == 0) 		{
		
		return ELSE;
	}
	if(strcmp(yytext,"enum") == 0) 		{
		
		return ENUM;
	}
	if(strcmp(yytext,"extern") == 0) 	{
		
		return EXTERN;
	}
	if(strcmp(yytext,"float") == 0) 	{
		
		return FLOAT;
	}
	if(strcmp(yytext,"for") == 0) 		{
		
		return FOR;
	}
	if(strcmp(yytext,"goto") == 0) 		{
		
		return GOTO;
	}
	if(strcmp(yytext,"if") == 0) 		{
		
		return IF;
	}
	if(strcmp(yytext,"inline") == 0) 	{
		
		return INLINE;
	}
	if(strcmp(yytext,"int") == 0) 		{
		
		return INT;
	}
	if(strcmp(yytext,"long") == 0) 		{
		
		return LONG;
	}
	if(strcmp(yytext,"register") == 0) 	{
		
		return REGISTER;
	}
	if(strcmp(yytext,"restrict") == 0) 	{
		
		return RESTRICT;
	}
	if(strcmp(yytext,"return") == 0) 	{
		
		return RETURN;
	}
	if(strcmp(yytext,"short") == 0) 	{
		
		return SHORT;
	}
	if(strcmp(yytext,"signed") == 0) 	{
		
		return SIGNED;
	}
	if(strcmp(yytext,"sizeof") == 0) 	{
		
		return SIZEOF;
	}
	if(strcmp(yytext,"static") == 0) 	{
		
		return STATIC;
	}
	if(strcmp(yytext,"struct") == 0) 	{
		
		return STRUCT;
	}
	if(strcmp(yytext,"switch") == 0) 	{
		
		return SWITCH;
	}
	if(strcmp(yytext,"typedef") == 0) 	{
		
		return TYPEDEF;
	}
	if(strcmp(yytext,"union") == 0) 	{
		
		return UNION;
	}
	if(strcmp(yytext,"unsigned") == 0) 	{
		
		return UNSIGNED;
	}
	if(strcmp(yytext,"void") == 0) 		{
		
		return VOID;
	}
	if(strcmp(yytext,"volatile") == 0) 	{
		
		return VOLATILE;
	}
	if(strcmp(yytext,"while") == 0) 	{
		
		return WHILE;
	}
	if(strcmp(yytext,"_Bool") == 0) 	{
		
		return BOOL;
	}if(strcmp(yytext,"_Complex") == 0) {
		
		return COMPLEX;
	}	
	if(strcmp(yytext,"_Imaginary") == 0){
		
		return IMAGINARY;
	}
}

{Punctuator}	{
	if(strcmp(yytext,"[") == 0) {
		
		return LSB;
	}

	if(strcmp(yytext,"]") == 0) {
		
		return RSB;
	}

	if(strcmp(yytext,"(") == 0) {
		
		return LPA;
	}

	if(strcmp(yytext,")") == 0) {
		
		return RPA;
	}

	if(strcmp(yytext,"{") == 0) {
		
		return LCB;
	}

	if(strcmp(yytext,"}") == 0) {
		
		return RCB;
	}

	if(strcmp(yytext,".") == 0) {
		
		return FULLSTOP;
	}

	if(strcmp(yytext,"->") == 0) {
		
		return ACC;
	}
	if(strcmp(yytext,"++") == 0) {
		
		return INC;
	}
	if(strcmp(yytext,"--") == 0) {
		
		return DEC;
	}

	if(strcmp(yytext,"&") == 0) {
		
		return BITWISEAND;
	}

	if(strcmp(yytext,"*") == 0) {
		
		return MUL;
	}

	if(strcmp(yytext,"+") == 0) {
		
		return PLUSop;
	}

	if(strcmp(yytext,"-") == 0) {
		
		return MINUSop;
	}

	if(strcmp(yytext,"~") == 0) {
		
		return TILDE;
	}

	if(strcmp(yytext,"!") == 0) {
		
		return APO;
	}

	if(strcmp(yytext,"/") == 0) {
		
		return DIV;
	}

	if(strcmp(yytext,"%") == 0) {
		
		return PERCENT;
	}
	if(strcmp(yytext,"<<") == 0) {
		
		return SHL;
	}
	if(strcmp(yytext,">>") == 0) {
		
		return SHR;
	}
	if(strcmp(yytext,"<") == 0) {
		
		return LESSTHAN;
	}
	if(strcmp(yytext,">") == 0) {
		
		return GREATERTHAN;
	}
	if(strcmp(yytext,"<=") == 0) {
		
		return LTE;
	}
	if(strcmp(yytext,">=") == 0) {
		
		return GTE;
	}
	if(strcmp(yytext,"==") == 0) {
		
		return EQUAL;
	}
	if(strcmp(yytext,"!=") == 0) {
		
		return NEQUAL;
	}

	if(strcmp(yytext,"^") == 0) {
		
		return POWER;
	}

	if(strcmp(yytext,"|") == 0) {
		
		return BITWISEOR;
	}
	if(strcmp(yytext,"&&") == 0) {
		
		return LogAND;
	}
	if(strcmp(yytext,"||") == 0) {
		
		return LogOR;
	}

	if(strcmp(yytext,"?") == 0) {
		
		return QUES;
	}
	if(strcmp(yytext,":") == 0) {
		
		return COLON;
	}
	if(strcmp(yytext,";") == 0) {
		
		return SEMICOLON;
	}
	if(strcmp(yytext,"...") == 0) {
		
		return ELIP;
	}
	if(strcmp(yytext,"=") == 0) {
		
		return ASSG;
	}
	if(strcmp(yytext,"*=") == 0) {
		
		return AssSTAR;
	}
	if(strcmp(yytext,"/=") == 0) {
		
		return AssDIV;
	}
	if(strcmp(yytext,"%=") == 0) {
		
		return AssMOD;
	}
	if(strcmp(yytext,"+=") == 0) {
		
		return AssPLUS;
	}
	if(strcmp(yytext,"-=") == 0) {
		
		return AssMINUS;
	}
	if(strcmp(yytext,"<<=") == 0) {
		
		return AssSHL;
	}
	if(strcmp(yytext,">>=") == 0) {
		
		return AssSHR;
	}
	if(strcmp(yytext,"&=") == 0) {
		
		return AssBinAND;
	}
	if(strcmp(yytext,"^=") == 0) {
		
		return AssXOR;
	}
	if(strcmp(yytext,"|=") == 0) {
		
		return AssBinOR;
	}
	if(strcmp(yytext,",") == 0) {
		
		return COMMA;
	}
	if(strcmp(yytext,"#") == 0) {
		
		return HASH;
	}

	return yytext[0];
}


{Identifier}	{
	yylval.loc=symTab->lookup(yytext);
	return IDENTIFIER;
}

{Integer_Constant}	{
	yylval.intval=atoi(yytext);
	return INTEGER_CONSTANT;
}

{Floating_Constant}	{
	yylval.fval=atof(yytext);
	return FLOATING_CONSTANT;
}

{Character_Constant} {
	yylval.cval=yytext;
	return CHARACTER_CONSTANT;
}

{String_Literal} {
	yylval.sval=yytext;
	return STRING_LITERAL;
}

{WS}	{}

. 		{}
%%


