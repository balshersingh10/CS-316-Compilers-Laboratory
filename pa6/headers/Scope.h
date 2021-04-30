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

// Import Libraries and headers
#ifndef SCOPE_H
#define SCOPE_H
#include <string>
#include <utility>
#include <algorithm>
#include <map>
#include <vector>
#include "Mark.h"


namespace std{
	class Scope // Class for Scope
	{
		private:
			string name; // String for name of scope
			std::map< string, Mark*> ScopeTab; // Mapping for Scope tab
		 	std::vector<std::string> err_checker; // Vector for error checker defined
		public:
			Scope(string name_v); // Scope function
			virtual ~Scope(); 
			string get_name(); // string get_name defined
			std::map< string, Mark*> get_tab(); // Mapping for get_tab defined
			void insert_record(string , Mark*); // Function for insert_record added
	};
}
#endif
