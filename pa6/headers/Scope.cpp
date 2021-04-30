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

// Import headers and libraries
#include "Scope.h"
#include <iostream>

namespace std{
	Scope::Scope(string name_v){ // Class for Scope
		name = name_v; 
		static std::vector<std::string> newVector; // newVector created
		err_checker = newVector;
		static std::map< string, Mark*> newMap;
		ScopeTab = newMap;
	}
	Scope::~Scope(){
	}

	string Scope::get_name(){ // Function to get name in Scope calss
		return name;
	}
	std::map< string, Mark*> Scope::get_tab(){ // Function to get_tab from the mapping
		return ScopeTab;
	}
	void Scope::insert_record(string key_name, Mark* symRecord){ // Function to insert record in activation record
		string sym_name = *(symRecord -> get_name()); // Get the name from Symbol activation record
		if (std::find(err_checker.begin(), err_checker.end(), sym_name ) != err_checker.end()){ // If error checker at the start is not same as at the end
			cout << "DECLARATION ERROR " << sym_name << "\r\n"; // Declare error
			exit(1);
		}
		ScopeTab[key_name] = symRecord; // Assign that Symbol record to the scopetab array
		err_checker.push_back(*(symRecord -> get_name())); // add this record to err_checker stack
	}
}
