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
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <map>
#include <utility>
#include <algorithm>
// Import from headers/
#include "headers/Mark.h"
#include "headers/Scope.h"
#include "headers/node_Ast.h"
#include "headers/optimizer.h"

// Creating Symbol Table, a vector of elements of scope class
extern std::vector<std::Scope*> SymTabHead;
// Creating IR_vector, a vector of elements of IR_code Class
extern std::vector<std::IR_code*> IR_vector;
