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

// Import headers
#include "Mark.h"

namespace std{
	Mark::Mark(string* name_v, string* value_v, int type_t, int stack_p){ // Class for symbols
		name = name_v; // Name of symbol
		value_s = value_v; // Value of symbol
		type = type_t; // Type of Symbol
		stack_pointer = stack_p; // Stack Pointer in AR
	}
	Mark::~Mark(){ // Function for symbol

	}

	string * Mark::get_name(){ // Function for symbol class to get name of symbol
		return name;
	}
	string * Mark::get_value(){ // Function for symbol class to get value of symbol
		return value_s;
	}
	int Mark::get_type(){ // Function for symbol class to get type of symbol
		return type;
	}
	int Mark::get_stack_pointer(){ // Function for symbol class to get stack pointer
		return stack_pointer;
	}
}
