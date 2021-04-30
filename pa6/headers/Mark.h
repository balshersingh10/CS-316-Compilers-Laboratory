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

// Import libraries
#ifndef SYMBOL_H
#define SYMBOL_H
#include <string>

namespace std{
	class Mark // Class for symbol
	{
		private:
			string * name; // String array for name
			string * value_s; // String array for value_S
			int value_i; // Integer var for value_i
			float value_f; // Float var for value_f
			int type; // Int var for type
			int stack_pointer; // Int var for stack pointer
		public:
			Mark(string* name_v, string* value_v, int type_t, int stack_p); // Symbol value
			virtual ~Mark(); 
			string * get_name(); // String array for get_name
			string * get_value(); // String array for get_value
			int get_type(); // Int var get_type
			int get_stack_pointer(); // Int var get_stack_pointer

	};
}
#endif
