#include<iostream>
using namespace std;


int main() {

// ARRAY 
// Array holds similar data type values 
// Arry - 0 based indexing

int num = 5; // It picks up the memory location and assign the value 5 to the memory location.

cout << &num << endl; //ACCESS THE MEMORY LOCATION - that is outputs the memory location


// There are 5 continious memory locations. Every memeory location can store an integer. Here all 5 memeory location can store an integer.
// Store elements in the array
int number[5] = {5, 4, 5, 6, 8};

// Access elements in the array;
cout << number[0] << endl;

// ACCESS LAST ELEMENT IN THE ARRAY ->  "size -1"


/* 
INCORRECT CODE: WITHOUT ASSIGNING VALUES TO ARRAY

	Define empty array. The moment if we do not define the elements, c++ ends up putting garbage elements into it (Random gargabe elements). It varies from machine to machine.
*/

// int x[5];
// for(int i=0;i<5;i++) {
// 	cout << x[i]; 
// }


/* CORRECT CODE: ASSIGNING VALUES */
int y[5];
for(int i=0;i<5;i++) {
	cin>>y[i];
	cout << y[i]<< endl;
}

/* TRY TO ACCESS INVALID MEMORY LOCATION */

cout << number[6]<< endl; // Gives a garbage value or some compiler will throw runtime error.

return 0;

}


