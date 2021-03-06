// Acknowledgements: (Documentation: Me (180010008), Rishit (180010027), Karan (180010019))
//1. Rishit Saiya (180010027) --> He guided me through the concepts and logics.
//2. Karan Sharma (180010019) --> He helped me in writing C++ code and solving bugs.
//3. Abhishek Raj (180010002) --> When even Rishit was unable to help me, I took Abhishek's help twice or thrice.
//4. Github links referres to --> (Some repos are in Java still it helped me to understand the logic)
//									a. https://github.com/abahrain/ECE-468
//									b. https://github.com/maheshbabugorantla/Fall_2017_Compilers
//									c. https://github.com/laizixian/ECE468/tree/master/468project-chickendinner-final
//									d. https://github.com/dooly107/Introduction-to-Compilers
//

// Import Libraries and intermediate header files
#include "main.h"
#include "parser.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
using namespace std;

// File Pointer
extern FILE* yyin;

// Main Function Declared
int main(int argc, char **argv){
	
	// Open File
	FILE *codefile = fopen( argv[1], "r");
	
	// Open Error
	if(codefile == 0){
		printf("Can't open the file\n");
		return -1;
	}

	// Pointer Updated after open
	yyin = codefile;
	int correct = yyparse();
	if(correct == 0){
		//printf("Accepted");
	}

	// String set declared
	set<string> theVarset;

	// Print operation type in each iteration
	for (int i = 0; i < IR_vector.size(); i++){
		cout << ";";
		cout << IR_vector[i]->get_op_type();
		
		// Print Operand 1 in each iteration
		if(IR_vector[i]->get_op1() != ""){
			cout << " op1:" << IR_vector[i]->get_op1();
			if((IR_vector[i]->get_op1()).find('T') != string::npos){
				theVarset.insert(IR_vector[i]->get_op1());
			}
		}
		
		// Print Operand 2 in each iteration
		if(IR_vector[i]->get_op2() != ""){
			cout << " op2:" << IR_vector[i]->get_op2();
			if((IR_vector[i]->get_op2()).find('T') != string::npos){
				theVarset.insert(IR_vector[i]->get_op2());
			}
		}

		// Print the result in each iteration
		if(IR_vector[i]->get_result() != ""){
			cout << " result:" << IR_vector[i]->get_result();
			if((IR_vector[i]->get_result()).find('T') != string::npos){
				theVarset.insert(IR_vector[i]->get_result());
			}
		}
		
		cout << endl;
	}
		
		cout << endl;

		/* ADD COMMENTS HERE */

		set<string>::iterator iter;
		for(iter = theVarset.begin(); iter != theVarset.end(); ++iter){
			cout << "var " << *iter << endl;
		}

		optimizer* optTiny = new optimizer(IR_vector);
		optTiny -> genTiny();

	return 0;
}
