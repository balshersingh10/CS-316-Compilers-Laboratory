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
#include "node_Ast.h"

// Class node_Ast
namespace std{
	node_Ast::node_Ast(){ //Initial values sent
		type = undefinded; // Node type
		left_node = NULL; // Left Node
		right_node = NULL; // Right Node
		Operation_type = 0; // Operation Type initialized to 0
		// Value, id_name, int_or_float set to true and temp_count initialized empty
		value = "";
		id_name = "";
		int_or_float = true;
		temp_count = "";
	}

	node_Ast::~node_Ast(){ // Function node_Ast type
	}

	void node_Ast::change_node_type(AST_Node_type n_type){ // Function to change node type
		type = n_type;
	}

	AST_Node_type node_Ast::get_node_type(){ // Function to fetch node type
		return type;
	}

	void node_Ast::change_operation_type(int op_type){ // Function to change operation type
		Operation_type = op_type;
	}

	int node_Ast::get_operation_type(){ // Function to fetch operation type
		return Operation_type;
	}

	void node_Ast::add_name(string name_string){ // Function to add name in AST
		id_name = name_string;
	}

	void node_Ast::add_value(string var_value){ // Function to add value in AST
		value = var_value;
	}

	string node_Ast::get_name(){ // Function to get name
		return id_name;
	}

	string node_Ast::get_value(){ // Function to get value
		return value;
	}

	void node_Ast::add_left_child(node_Ast* left){ // Function to add left child
		left_node = left;
	}

	void node_Ast::add_right_child(node_Ast* right){ // Function to add right child
		right_node = right;
	}

	node_Ast* node_Ast::get_left_node(){ // Function to fetch left node
		return left_node;
	}

	node_Ast* node_Ast::get_right_node(){ // Function to fetch right node
		return right_node;
	}

	void node_Ast::change_int_or_float(bool set){ // Function to set var when int/float is changed
		int_or_float = set;
	}

	bool node_Ast::get_int_or_float(){ // Function to fetch int/float
		return int_or_float;
	}

	void node_Ast::change_temp_count(string number){ // Function to change var temp_count
		temp_count = number;
	}

	string node_Ast::get_temp_count(){ // Function to fetch temp_count
		return temp_count;
	}

	IR_code::IR_code(string op_type, string op1, string op2, string result, int count){ // IR Code struct type
		op_type_code = op_type; // Operation Type
		op1_code = op1; // Operand 1
		op2_code = op2; // Operand 2
		result_code = result; // Result store
		reg_counter = count; // Register Counter
	}
	IR_code::~IR_code(){ // IR Code function

	}
	string IR_code::get_op_type(){ // Get operation type
		return op_type_code;
	}
	string IR_code::get_op1(){ // Fetch Operand 1
		return op1_code;
	}
	string IR_code::get_op2(){ // Fetch Operand 2
		return op2_code;
	}
	string IR_code::get_result(){ // Fetch Result
		return result_code;
	}
	int IR_code::get_reg_counter(){ // Fetch Register Counter
		return reg_counter;
	}


}
