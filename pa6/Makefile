dev:
	@echo "Balsher Singh"
	@echo "180010008@iitdh.ac.in"
compiler:
	@bison -d -t -o parser.cpp parser.y
	@flex scanner.l
	@g++ -o parser.o -c parser.cpp
	@g++ -c -o scanner.o lex.yy.c
	@g++ -c -o main.o main.cpp
	@g++ -o a.out main.o scanner.o parser.o headers/Mark.cpp headers/Scope.cpp headers/node_Ast.cpp headers/optimizer.cpp
	@chmod +x runme.sh
clean:
	@rm -f a.out *.c *.o parser.hpp parser.cpp