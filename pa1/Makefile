dev:
	@echo "Balsher Singh\n180010008@iitdh.ac.in"

compiler: scanner.l
	@lex scanner.l
	@g++ lex.yy.c -o compiler

clean:
	@rm -f lex.yy.c
