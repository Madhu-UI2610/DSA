#include<iostream>
using namespace std;

// WHY FUNCTIONS- USED TO DO THE REPEATITIVE TASK AND SO WE CAN STILL READ THE CODE (AVOID CLUMSiNESS AND)

// FUNCTION NAME - Whenever we write the name of the function, thumb rule is to name the func in such a way that "name describes what the func does". 

// VOID FUNCTION - DO SOMETHING BUT DOES NOT RETURN ANYTHING
void sumOfTwoNumbers() { 
    int num1, num2;
    cin >> num1 >> num2;
    cout << num1 + num2 << endl;
}

// FUNCTION RETURN TYPE CAN BE OF ANY "DATA TYPE" - int, float, double long long etc.
// FUNCTION WHICH TAKES PARAMTER IS CALLED - parameterized function. EG: printFullName. Params can be of any data type

string printFullName(string name, char initial) { // return type of this function is string
	string fullName = name + initial;
	return  fullName;
}

// All the C++ compiler start to execute from main func. It is an entry point.
// MAIN FUNCTION - cannot be called with any paramter. Not a parameterized func. 
int main() { 
    
	// CLUMSY CODE
	// int num1, num2, num3, num4;
	// cin >> num1 >> num2>> num3>>num4;
	// cout << num1 + num2 << endl;
	// cout << num3 + num4 << endl;


	// CLEAN AND MORE READABLE CODE - move the repititive part to a function and make it reuable, readable

	sumOfTwoNumbers();
	sumOfTwoNumbers();

	cout << printFullName("Madhumathi", 'S');

}


/*
	TYPES OF FUNCTION 
	1. void
	2. Pramaterized
	3. Recursive
*/
