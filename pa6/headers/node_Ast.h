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
#ifndef Node_ast_H
#define Node_ast_H
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <utility>

namespace std{

	enum AST_Node_type // Defining astNode type
	{
		undefinded,
		operator_value,
		int_value,
		float_value,
		func_value,
		name_value
	};

	class node_Ast // Class for node_Ast
	{
	private:
		AST_Node_type type; // astNode type
		node_Ast* left_node; // Left Node
		node_Ast* right_node; // Right Node
		string id_name; // id_name
		string temp_count; // temp_count

		int Operation_type; // operation type var defined
		bool int_or_float;//int = true float = false
		string value;

	public:
		node_Ast(); // Function for node_Ast defined
		virtual ~node_Ast(); 
		void change_node_type(AST_Node_type n_type); // Function to change node type
		void change_operation_type(int op_type); // Function to change operation type
		void add_name(string name_string); // Function to add name
		void add_value(string var_value); // Function to add value
		string get_name(); // Function to get name
		string get_value(); // Function to get value
		void add_left_child(node_Ast* left); // Function to add left child to AST
		void add_right_child(node_Ast* right); // Function to add right child to AST
		node_Ast* get_left_node(); // Function to get left node
		node_Ast* get_right_node(); // Function to get right node
		AST_Node_type get_node_type(); // Function to get node type
		int get_operation_type(); // Function to get operation type
		void change_int_or_float(bool set); // Function to change int or float
		bool get_int_or_float(); // Function to fetch int or float
		void change_temp_count(string number); // Function to change temp count
		string get_temp_count(); // Function to get temp count var
	};
	class IR_code // Class for IR_code
	{
	private:
		string op_type_code; // String for operation type code
		string op1_code; // String for Operand 1 code
		string op2_code; // String for Operand 2 code
		string result_code; // String for result_code
		int reg_counter; // Int var for register counter
	public:
		IR_code(string op_type, string op1, string op2, string result, int counter); // Function to generate IR_code
		virtual ~IR_code(); 
		string get_op_type(); // String to get operation type
		string get_op1(); // String for Operand 1
		string get_op2(); // String for Operand 2
		string get_result(); // String to get result
		int get_reg_counter(); // Int for var get_reg_counter
	};
}
#endif
