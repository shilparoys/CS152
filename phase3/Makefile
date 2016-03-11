parse: mini_l.lex mini_l.y
	bison -v -d --file-prefix=y shilpa.y
	flex shilpa.lex
	g++ -o calc y.tab.c lex.yy.c -lfl

clean:
	rm -f lex.yy.c y.tab.* y.output *.o calc
