#include "ass6_14CS30030_translator.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
#include <iomanip>  //the manipulation of cout done by this library

using namespace std;
extern std::vector<Quad*> quadVector; 
extern int quadPointer;
extern symbolTable *global;
extern symbolTable *symTab;
extern Symbol* curSym;
extern Type *globalType;
extern string array_name;
extern symbolTable *external;
extern int labelcount;
extern std::vector<label> labelTable;
extern int stringcount;

int symbolTable::findIndex(string s){
	int i=0;
	int j=0;
	Symbol* temp_symbol;
	for(i=0;i<symbols.size();i++){
		if(symbols[i]->name.compare(s)==0)//searching in present table
			{
				return i;
			}
	}
	//symbol not found
	return -1;
}



void symbolTable::createMemoryBinding()
{
	int offset = -4;
	int parameters = param;
	if(parameters==0)
	{
		int check = findIndex("$return_value$");
		if(check == -1)
		{
			return;
		}
		else
		{
			offset = symbols[0]->offset;
			symbols[0]->offset = 0;
			for(int i=1;i<symbols.size();i++)
			{

			 	symbols[i]->offset -=offset; 
				symbols[i]->offset *=-1;
				symbols[i]->offset -=symbols[i]->size;
			}

		}

	}
	else
	{
		offset = 0;

		

		for(int i=0;i<param;i++)
		{
			symbols[i]->offset+=16;
		}
		offset = symbols[param]->offset+symbols[param]->type->width;
		symbols[param]->offset = 0;
		for(int i=param+1;i<symbols.size();i++)
		{
			symbols[i]->offset -=offset; 
			symbols[i]->offset *=-1;
			symbols[i]->offset -=8;
		}
	}
}



void Quad::printAssembly(int index)
{

	int resOffset,arg1offset,arg2offset;
	Type* restype,*arg1type,*arg2type;
	if(result.compare("NULL")!=0)
	{
		resOffset = symTab->lookup(result)->offset;
		restype = symTab->lookup(result)->type;
	}
	if(arg1.compare("NULL")!=0 && !checkStringIsInt(arg1))
	{
		arg1offset = symTab->lookup(arg1)->offset;
		arg1type = symTab->lookup(arg1)->type;
	}
	if(arg2.compare("NULL")!=0 && !checkStringIsInt(arg2))
	{
		arg2offset = symTab->lookup(arg2)->offset;
		arg2type = symTab->lookup(arg2)->type;
	}
	if (isLabel(index))
	{
		label l = findLabel(index);
		cout<<l.name<<":"<<endl;
	}
	switch(op)
	{
		case PLUS:
		{			
			if(restype->type==_INT)
			{
				if(checkStringIsInt(arg2))
				{

					int val = convertToInt(arg2);
					if(val == 1)
					{
						cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
						cout<<"addq $1, \%rax"<<endl;
						cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
					}
				}
				else
				{
					cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
					cout<<"movq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
					cout<<"addq \%rdx, \%rax"<<endl;
					cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
				}
			}
			if(restype->type==_CHAR)
			{
					cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
					cout<<"movzbq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
					//add the second argument to first argument register
					cout<<"addq \%rdx, \%rax"<<endl;
					//store the result in result memory
					cout<<"movb "<<"\%al, "<<resOffset<<"(\%rbp)"<<endl;
					break;
			}
			break;
		}
		case MINUS:
		{
			//cout<<result<<" = "<<arg1<<" - "<<arg2<<endl;
			if(restype->type==_CHAR)
			{
					cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
					cout<<"movzbq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
					//subtract the second argument to first argument register
					cout<<"subq \%rdx, \%rax"<<endl;
					//store the result in result memory
					cout<<"movb "<<"\%al, "<<resOffset<<"(\%rbp)"<<endl;
					break;
			}

			if(checkStringIsInt(arg2))
			{
				int val = convertToInt(arg2);
				//cout<<val<<endl;
				if(val == 1)
				{
					//use decrement funtion for arg1
					cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
					cout<<"subq $1, \%rax"<<endl;
					cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
				}
			}
			else
			{
				cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"movq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
				//subtract the second argument to first argument register
				cout<<"subq \%rdx, \%rax"<<endl;
				//store the result in result memory
				cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			}
			break;
		}
		case MULT:
		{
			//cout<<result<<" = "<<arg1<<" * "<<arg2<<endl;
			if(restype->type==_CHAR)
			{
				if(checkStringIsInt(arg2))
				{
					int val = convertToInt(arg2);
					cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
					cout<<"imulq $"<<val<<", \%rax"<<endl;
					cout<<"movb "<<"\%al, "<<resOffset<<"(\%rbp)"<<endl;
					break;
				}
				cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"movzbq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
				cout<<"imulq \%rdx, \%rax"<<endl;
				cout<<"movb "<<"\%al, "<<resOffset<<"(\%rbp)"<<endl;
				break;
			}

			if(checkStringIsInt(arg2))
			{
				int val = convertToInt(arg2);
				cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"imulq $"<<val<<", \%rax"<<endl;
				cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			}
			
			else
			{
				cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"movq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
				cout<<"imulq \%rdx, \%rax"<<endl;
				cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			}

			break;
		}
		case DIVIDE:
		{
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"cltd"<<endl;
			cout<<"idivq "<<arg2offset<<"(\%rbp)"<<endl;
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			
			break;
		}
		case MODULUS:
		{
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"cltd"<<endl;
			cout<<"idivq "<<arg2offset<<"(\%rbp)"<<endl;
			cout<<"movq "<<"\%rdx, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case LOGICAL_AND:
		{
			cout<<result<<" = "<<arg1<<" && "<<arg2<<endl;
			break;
		}
		case LOGICAL_OR:
		{
			cout<<result<<" = "<<arg1<<" || "<<arg2<<endl;
			break;
		}
		case LESS_THAN:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%rbp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jl  "<<l.name<<endl;
				break;
			}
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"cmpq "<<arg2offset<<"(\%rbp), \%rax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jl  "<<l.name<<endl;
			break;
		}
		case GREATER_THAN:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%rbp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jg  "<<l.name<<endl;
				break;
			}
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"cmpq "<<arg2offset<<"(\%rbp), \%rax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jg  "<<l.name<<endl;
			break;
		}
		case LESS_THAN_EQUAL:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%rbp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jle  "<<l.name<<endl;
				break;
			}
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"cmpq "<<arg2offset<<"(\%rbp), \%rax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jle  "<<l.name<<endl;
			break;
		}
		case GREATER_THAN_EQUAL:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%rbp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jge  "<<l.name<<endl;
				break;
			}
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"cmpq "<<arg2offset<<"(\%rbp), \%rax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jge  "<<l.name<<endl;
			break;
			
		}
		case EQUAL_TO:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%rbp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"je  "<<l.name<<endl;
				break;
			}
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"cmpq "<<arg2offset<<"(\%rbp), \%rax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"je  "<<l.name<<endl;
			break;
		}
		case NOT_EQUAL_TO:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"cmpb "<<arg2offset<<"(\%rbp), \%al"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jne  "<<l.name<<endl;
				break;
			}
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"cmpq "<<arg2offset<<"(\%rbp), \%rax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jne  "<<l.name<<endl;
			break;
		}
		case LEFT_SHIFT:
		{
			cout<<result<<" = "<<arg1<<"<<"<<arg2<<endl;
			break;
		}
		case RIGHT_SHIFT:
		{
			cout<<result<<" = "<<arg1<<">>"<<arg2<<endl;
			break;
		}
		case UMINUS:
		{
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"negl \%rax"<<endl;
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case UPLUS:
		{
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			//store the result in result memory
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case UPOINTER:
		{
			//Handling of pointers is easy. I just followed standard directives
			if(restype->type==_CHAR)
			{
				cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				//store the result in result memory
				cout<<"movzbq "<<"(\%rax), \%rax"<<endl;
				cout<<"movb "<<"\%al, "<<resOffset<<"(\%rbp)"<<endl;
				break;
			}
			//cout<<result<<" = "<<"*"<<arg1<<endl;
			//This is the case of pointer occuring in right side only, the left hand side is handled in copy instruction
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			//store the result in result memory
			cout<<"movq "<<"(\%rax), \%rax"<<endl;
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case UADDRESS:
		{
			//Loading of address is kind of tricky. The leaq function does the trick
			if(restype->type==_CHAR)
			{
				cout<<"leaq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				//store the result in result memory
				cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
				break;
			}
			//cout<<result<<" = "<<"&"<<arg1<<endl;
			cout<<"leaq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			//store the result in result memory
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case UNEGATION:
		{
			//cout<<result<<" = "<<"!"<<arg1<<endl;
			cout<<"cmpq $0, "<<arg1offset<<"(\%rbp)"<<endl;
			cout<<"sete \%al"<<endl;
			cout<<"movzbq \%al, \%rax"<<endl;
			//store the result in result memory
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case UBITNEGATION:
		{
			//cout<<result<<" = "<<"~"<<arg1<<endl;
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			//store the result in result memory
			cout<<"notl \%rax"<<endl;
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case BIT_AND:
		{
			//cout<<result<<" = "<<arg1<<" & "<<arg2<<endl;
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"movq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
				//add the second argument to first argument register
			cout<<"andl \%rdx, \%rax"<<endl;
				//store the result in result memory
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case BIT_XOR:
		{
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"movq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
			cout<<"xorl \%rdx, \%rax"<<endl;
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case BIT_OR:
		{
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"movq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
			cout<<"orl \%rdx, \%rax"<<endl;
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		case COPY:
		{
				if(restype->type !=_CHAR)
			{	
				if(checkStringIsInt(arg1))
				{
					int val = convertToInt(arg1);
					cout<<"movq $"<<val<<", "<<resOffset<<"(\%rbp)"<<endl;
				}
				else
				{
					if(result[0]!='*')
					{
						cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
						cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;
					}
					else
					{
						resOffset = symTab->lookup(result.substr(1))->offset;
						restype = symTab->lookup(result.substr(1))->type;
						if(restype->type==_POINTER && restype->next->type==_INT)
						{
							cout<<"movq "<<resOffset<<"(\%rbp), \%rax"<<endl;
							cout<<"movq "<<arg1offset<<"(\%rbp), \%rdx"<<endl;
							cout<<"movq \%rdx, (\%rax)"<<endl;
							break;
						}
						if(restype->type==_POINTER && restype->next->type==_CHAR)
						{
							cout<<"movq "<<resOffset<<"(\%rbp), \%rax"<<endl;
							cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rdx"<<endl;
							cout<<"movb \%dl, (\%rax)"<<endl;
							break;
						}

					}
				}
			}
			if(restype->type ==_CHAR)
			{
				//The constant part handling
				if(arg1[0]=='\'' && arg1[arg1.length()-1]=='\'')
				{
					char c=arg1[1];
					int val = (int)c;//the ascii value
					cout<<"movb $"<<val<<", "<<resOffset<<"(\%rbp)"<<endl;
				}
				else
				{
					//resOffset = symTab->lookup(result.substr(1))->offset;
					cout<<"movzbq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
					cout<<"movb "<<"\%al, "<<resOffset<<"(\%rbp)"<<endl;	
				}
			}
			
			break;
		}
		case ARRAYRIGHT:
		{
			
			if(restype->type ==_CHAR)
			{
				cout<<"leaq "<<arg1offset<<"(\%rbp), \%rdx"<<endl;
				cout<<"movq "<<arg2offset<<"(\%rbp), \%rax"<<endl;
				cout<<"addq \%rdx, \%rax"<<endl;
				cout<<"movzbq (\%rax), \%rax"<<endl;
				cout<<"movb \%al, "<<resOffset<<"(\%rbp)"<<endl;	
				break;
			}
			cout<<"movq "<<arg2offset<<"(\%rbp), \%rax"<<endl;
			cout<<"movq "<<arg1offset<<"(\%rbp,\%rax,1), \%rax"<<endl;
			cout<<"movq "<<"\%rax, "<<resOffset<<"(\%rbp)"<<endl;

			break;
		}
		case ARRAYLEFT:
		{
			if(restype->type ==_ARRAY && getBaseType(restype)->type==_CHAR)
			{
				cout<<"leaq "<<resOffset<<"(\%rbp), \%rdx"<<endl;
				cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
				cout<<"addq \%rax, \%rdx"<<endl;
				cout<<"movzbq "<<arg2offset<<"(\%rbp), \%rax"<<endl;
				cout<<"movb \%al, (\%rdx)"<<endl;	
				break;
			}
			cout<<"movq "<<arg2offset<<"(\%rbp), \%rdx"<<endl;
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"movq \%rdx, "<<resOffset<<"(\%rbp,\%rax,1)"<<endl;

			break;
		}
		case _goto:
		{
			label l = findLabel(convertToInt(result));
			cout<<"jmp  "<<l.name<<endl;
			break;
		}
		case _if:
		{
			if(arg1type->type==_CHAR)
			{
				cout<<"cmpb $0, "<<arg1offset<<"(\%rbp)"<<endl;
				label l = findLabel(convertToInt(result));
				cout<<"jne  "<<l.name<<endl;
				break;
			}
			cout<<"movq "<<arg1offset<<"(\%rbp), \%rax"<<endl;
			cout<<"cmpq $0, \%rax"<<endl;
			label l = findLabel(convertToInt(result));
			cout<<"jne  "<<l.name<<endl;
			break;
		}
		case PARAM:
		{
			if(restype->type!=_POINTER)			
			{
				if(restype->type==_INT)
				{	
					cout<<"movq "<<resOffset<<"(\%rbp), \%rax"<<endl;
					cout<<"movq %rax,0(%rsp)\n\tmovq 0(%rsp),%rdi"<<endl;
					break;
				}
				if(restype->type==_CHAR)
				{	
					cout<<"movsbl "<<resOffset<<"(\%rbp), \%rax"<<endl;
					cout<<"movq %rax,0(%rsp)\n\tmovq 0(%rsp),%rdi"<<endl;
					break;
				}

			}
			else
			{
				cout<<"movq "<<resOffset<<"(\%rbp), \%rax"<<endl;
				cout<<"movq %rax,-8(%rsp)\n\tmovq -8(%rsp),%rdi"<<endl;
			}
			break;
		}
		case CALL:
		{
			//cout<<result<<" = "<<"call "<<arg1<<", "<<arg2<<endl
			cout<<"call "<<arg1<<endl;
			if(result.compare("VOID")!=0)//when we have to get a return value
			{
				if(restype->type==_INT)
				{
					cout<<"movq \%rax, "<<resOffset<<"(\%rbp)"<<endl;
					break;
				}
				if(restype->type==_CHAR)
				{
					cout<<"movb \%al, "<<resOffset<<"(\%rbp)"<<endl;
					break;
				}
			}
			break;
		}
		case _RETURN: //The function epilogue --- all the conditions seen
		{
			if(result.compare("NULL")==0)
			{
				//cout<<"return"<<endl;
				//cout<<"leave"<<endl;
				cout<<"movq $0, \%rax"<<endl;
				cout<<"movq \%rbp,\%rsp"<<endl;
				cout<<"popq \%rbp"<<endl;
				cout<<"ret"<<endl;
			}
			else
			{
				//cout<<"return "<<result<<endl;
				if(restype->type==_INT || (restype->type==_POINTER && restype->next->type==_INT))
				{
					cout<<"movq "<<resOffset<<"(\%rbp), \%rax"<<endl;
					cout<<"movq \%rbp,\%rsp"<<endl;
					cout<<"popq \%rbp"<<endl;
					cout<<"ret"<<endl;
					break;
				}
				if(restype->type==_CHAR || (restype->type==_POINTER && restype->next->type==_CHAR))
				{
					cout<<"movzbq "<<resOffset<<"(\%rbp), \%rax"<<endl;
					cout<<"movq \%rbp,\%rsp"<<endl;
					cout<<"popq \%rbp"<<endl;
					cout<<"ret"<<endl;
					break;
				}
				if(restype->type==_POINTER && restype->next->type==_INT)
				{
					cout<<"movq "<<resOffset<<"(\%rbp), \%rax"<<endl;
					cout<<"movq \%rbp,\%rsp"<<endl;
					cout<<"popq \%rbp"<<endl;
					cout<<"ret"<<endl;
					break;
				}
				if(restype->type==_POINTER && restype->next->type==_CHAR)
				{
					cout<<"movzbq "<<resOffset<<"(\%rbp), \%rax"<<endl;
					cout<<"movq \%rbp,\%rsp"<<endl;
					cout<<"popq \%rbp"<<endl;
					cout<<"ret"<<endl;
					break;
				}


			}
			break;
		}
		case inttobool:
		{
			break;
		}
		case inttodbl:
		{
			//cout<<result<<" = "<<"inttodbl("<<arg1<<")"<<endl;
			break;
		}
		case chartodbl:
		{
			//cout<<result<<" = "<<"chartodbl("<<arg1<<")"<<endl;
			break;
		}
		case dbltoint:
		{
			//cout<<result<<" = "<<"dbltoint("<<arg1<<")"<<endl;
			break;
		}
		case chartoint:
		{
			//cout<<result<<" = "<<"chartoint("<<arg1<<")"<<endl;
			break;
		}
		case dbltochar:
		{
			//cout<<result<<" = "<<"dbltochar("<<arg1<<")"<<endl;
			break;
		}
		case intTochar:
		{
			//cout<<result<<" = "<<"inttochar("<<arg1<<")"<<endl;
			break;
		}
		case ENDPROGRAM:
		{
			//cout<<"END of PROGRAM"<<endl;
			break;
		}
		case FUNCTION_OP: //The function prologue
		{
			//cout<<" FUNCTION "<<result<<":"<<endl;
			symTab = global->lookup(result)->symTabPointer;
			cout<<".globl "<<result<<"\n .type "<<result<<", @function\n";
			cout<<result<<":"<<endl;
			cout<<"pushq	\%rbp"<<endl;
			cout<<"movq 	\%rsp,\%rbp"<<endl;
			int size = symTab->symbols.size();
			int subtractBy = symTab->symbols[size-1]->offset;
			subtractBy *=-1;
			cout<<"subq	$"<<subtractBy<<",\%rsp"<<endl;
			break;
			
		}
		case _STRING: //Handling of string label.
		{
			//cout<<result<<"= A string address"<<endl;
			cout<<"movq $"<<arg2<<", "<<resOffset<<"(\%rbp)"<<endl;
			break;
		}
		default:
		{
			cout<<"unknown operation"<<endl;
		}
	}
}



label findLabel(int index)
{
	int i = 0;
	for(i=0;i<labelTable.size();i++)
	{
		if(labelTable[i].quadindex==index)
			return labelTable[i];
		
	}
	label l;
	l.quadindex = -1;
	l.name = "invalid";
	return l;
}
//It will create a new string and add that label corrrsponding to that quad index
label addqabel(int index)
{
	label l;
	l.quadindex = index;
	string s = ".LBNO";
	s.append(to_string(labelcount));
	labelcount++;
	l.name = s;
	labelTable.push_back(l);	
	return l;
}

//It will check whether some index with label already exists or not
bool  isLabel(int index)
{	
	int i = 0;
	for(i=0;i<labelTable.size();i++)
	{
		if(labelTable[i].quadindex==index)
			return true;
	}
	return false;
}

//This will create a label table for the given vector of quads base on targets of goto
void createLabelTable(vector<Quad*> v)
{
	for(int i=0;i<v.size();i++)
	{
		string result = v[i]->result;
		string arg1 = v[i]->arg1;
		string arg2 = v[i]->arg2;
		switch(v[i]->op)
		{
			case LESS_THAN:
			{
				//cout<<"if "<<arg1<<"<"<<arg2<<" goto "<<result<<endl;
				if(isLabel(convertToInt(result))==false)
				{
					addqabel(convertToInt(result));
				}
				break;
			}
			case GREATER_THAN:
			{
				//cout<<"if "<<arg1<<">"<<arg2<<" goto "<<result<<endl;
				if(isLabel(convertToInt(result))==false)
				{
					addqabel(convertToInt(result));
				}

				break;
			}
			case LESS_THAN_EQUAL:
			{
				if(isLabel(convertToInt(result))==false)
				{
					addqabel(convertToInt(result));
				}
				break;
			}
			case GREATER_THAN_EQUAL:
			{
				//cout<<"if "<<arg1<<">="<<arg2<<" goto "<<result<<endl;
				if(isLabel(convertToInt(result))==false)
				{
					addqabel(convertToInt(result));
				}
				break;
			}
			case EQUAL_TO:
			{
				//cout<<"if "<<arg1<<"=="<<arg2<<" goto "<<result<<endl;
				if(isLabel(convertToInt(result))==false)
				{
					addqabel(convertToInt(result));
				}
				break;
			}
			case NOT_EQUAL_TO:
			{
				//cout<<"if "<<arg1<<"!="<<arg2<<" goto "<<result<<endl;
				if(isLabel(convertToInt(result))==false)
				{
					addqabel(convertToInt(result));
				}
				break;
			}
			case _goto:
			{
				//cout<<"goto "<<result<<endl;
				if(isLabel(convertToInt(result))==false)
				{
					addqabel(convertToInt(result));
				}
				break;
			}
			case _if:
			{
				//cout<<"if ("<<arg1<<")"<<" goto "<<result<<endl;
				if(isLabel(convertToInt(result))==false)
				{
					addqabel(convertToInt(result));
				}
				break;
			}
			case FUNCTION_OP:
			{
				//cout<<" FUNCTION "<<result<<":"<<endl;				
				break;
			}
			default:
			break;
		}
	}
}

void printLabelTable()
{
	cout<<"********************** LABEL TABLE *************************"<<endl;
	for(int i=0;i<labelTable.size();i++)
	{
		cout<<labelTable[i].quadindex<<"\t\t"<<labelTable[i].name<<endl;
	}
}

void createStringLabel()
{
	for(int i=0;i<quadVector.size();i++)
	{
		if(quadVector[i]->op==_STRING)
		{
			string s = "STR";
			s.append(to_string(stringcount));
			stringcount++;
			quadVector[i]->arg2=s;
			cout<<s<<":"<<endl;
			cout<<".string "<<quadVector[i]->arg1<<endl;
		}
	}
}


bool checkStringIsInt(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<'0' || s[i]>'9')
		{
			return false;
		}
	}
	return true;
}

int convertToInt(string s)
{
	int val;
	stringstream(s)>>val;
	return val;
}



void createExternalTable()
{
	Symbol* p = external->lookup("printi");
	updateSymbol(p,createType(_FUNCTION));
	p->symTabPointer=new symbolTable();
	symbolTable *next = p->symTabPointer;
	next->param = 1;
	Symbol *q = next->lookup("$return_value$");
	updateSymbol(q,createType(_VOID));

	p = external->lookup("readi");
	updateSymbol(p,createType(_FUNCTION));
	p->symTabPointer=new symbolTable();
	next = p->symTabPointer;
	next->param = 1;
	q = next->lookup("x");
	Type *tp = createType(_POINTER);
	tp->next = createType(_INT);
	updateSymbol(q,tp);
	q = next->lookup("$return_value$");
	updateSymbol(q,createType(_INT));

	p = external->lookup("prints");
	updateSymbol(p,createType(_FUNCTION));
	p->symTabPointer=new symbolTable();
	next = p->symTabPointer;
	next->param = 1;
	q = next->lookup("x");
	tp = createType(_POINTER);
	tp->next = createType(_CHAR);
	updateSymbol(q,tp);
	q = next->lookup("$return_value$");
	updateSymbol(q,createType(_INT));
}