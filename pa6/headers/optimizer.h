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

// Import libraries and headers
#ifndef TINY_H
#define TINY_H
#include <string>
#include <utility>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <iostream>
#include "../main.h"


namespace std{
	class optimizer{ // Code Optimizer Class
	private:
		std::vector<std::IR_code*> IR_vector; // IR vector
		std::map<string, string> var_dict; // Variable Dictionary to store mapping
		std::map<string, string> reg_dict; // Register Dictionary to store mapping
		std::map<string, string> act_record; // Activation Record to store mapping
		string reg_prefix; // String to store Register Prefix
		int reg_counter; // Var for register counter
		string reg_counter_str; // String for register counter value as a string
		string s; 
		size_t pos_t;
		string temp_num;
	public:
		virtual ~optimizer(); // Code Optimizer 
		optimizer(std::vector<std::IR_code*> IR_vector_in); // Passing IR vector to optimizer function
		void genTiny(); //calling generate Tiny function
	};

}
#endif
