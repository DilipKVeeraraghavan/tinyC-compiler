a.out: ass6_14CS30030_translator.o globalVariables.o  y.tab.o lex.yy.o ass6_14CS30030_main.o	ass6_14CS30030_target_translator.o
	g++ ass6_14CS30030_main.o lex.yy.o y.tab.o ass6_14CS30030_translator.o globalVariables.o	ass6_14CS30030_target_translator.o -lfl
lex.yy.c: ass6_14CS30030.l
	flex ass6_14CS30030.l
y.tab.c: ass6_14CS30030.y
	yacc -dtv ass6_14CS30030.y
ass6_14CS30030_main.o: ass6_14CS30030_main.c
	g++ -c ass6_14CS30030_main.c

ass6_14CS30030_target_translator.o: ass6_14CS30030_translator.h ass6_14CS30030_target_translator.cxx
	g++ -w -c ass6_14CS30030_target_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c
y.tab.o:    y.tab.c
	g++ -c y.tab.c  #printing all the grammar rules found in yacc file
	# Remove  -DYYDEBUG to check only the syntax
ass6_14CS30030_translator.o: ass6_14CS30030_translator.cxx
	g++ -c ass6_14CS30030_translator.cxx
globalVariables.o: globalVariables.c
	g++ -c globalVariables.c	


run1: a.out ass6_14CS30030_test1.c 
	./a.out < ass6_14CS30030_test1.c > ass6_14CS30030_1.s
	gcc	-m64	ass6_14CS30030_1.s	libmyl.a	-o	1.out
	./1.out
run2: a.out ass6_14CS30030_test2.c
	./a.out < ass6_14CS30030_test2.c > ass6_14CS30030_2.s
	gcc	-m64	ass6_14CS30030_2.s	libmyl.a	-o	2.out
	./2.out
run3: a.out ass6_14CS30030_test3.c
	./a.out < ass6_14CS30030_test3.c > ass6_14CS30030_3.s
	gcc	-m64	ass6_14CS30030_3.s	libmyl.a	-o	3.out
	./3.out
run4: a.out ass6_14CS30030_test4.c
	./a.out < ass6_14CS30030_test4.c > ass6_14CS30030_4.s
	gcc	-m64	ass6_14CS30030_4.s	libmyl.a	-o	4.out
	./4.out
run5: a.out ass6_14CS30030_test5.c
	./a.out < ass6_14CS30030_test5.c > ass6_14CS30030_5.s
	gcc	-m64	ass6_14CS30030_5.s	libmyl.a	-o	5.out
	./5.out

clean:
	rm lex.yy.c y.tab.h y.output y.tab.c lex.yy.o y.tab.o	ass6_14CS30030_target_translator.o ass6_14CS30030_main.o a.out ass6_14CS30030_translator.o globalVariables.o	./5.out	./4.out ./3.out ./2.out ./1.out	ass6_14CS30030_1.s ass6_14CS30030_2.s ass6_14CS30030_3.s ass6_14CS30030_4.s ass6_14CS30030_5.s
