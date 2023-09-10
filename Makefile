asgn4_21CS10072_21CS10001_output.txt: parser ass4_21CS10072_21CS10001_test.c
	./parser <ass4_21CS10072_21CS10001_test.c> asgn4_21CS10072_21CS10001_output.txt

parser: lex.yy.o y.tab.o ass4_21CS10072_21CS10001_main.o
	gcc lex.yy.o y.tab.o ass4_21CS10072_21CS10001_main.o -lfl -o parser

asgn4_21CS10072_21CS10001_output.o: ass4_21CS10072_21CS10001_main.c
	gcc -c ass4_21CS10072_21CS10001_main.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.c: ass4_21CS10072_21CS10001.l y.tab.h
	flex ass4_21CS10072_21CS10001.l

y.tab.c y.tab.h: ass4_21CS10072_21CS10001.y
	bison -dty --report=all ass4_21CS10072_21CS10001.y

clean: 
	rm -f parser lex.yy.c y.tab.h y.output y.tab.c *.o ass4_21CS10072_21CS10001_output.txt
