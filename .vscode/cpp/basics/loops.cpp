#include<iostream>
using namespace std;

int main() {
    // ceratin number of steps are repeated, that is when we start thinking about the concept of loops 
    int num;

    // FOR LOOP
    // initializer, break(valid break statement),increment/decrement
    for(int i=0; i<10;i++) {
        cin>>num;
        cout<<num<<endl;
    }

    /* infinite loop
    	for(int i=0;;i++) {}
    	for(int i=0; true; i++){}
			for(int i=0; i>=0;++){} invalid break condition, becuase i>0 is always true.
    */

    // WHILE LOOP
    // Another syntatical way to write a for loop

		int num;

		int i =1; // initialization
		while(i < 10) { // condition 
			cin >> num;
			cout << num << endl;
			i++; // increment/decrement
		}

		// DO WHILE LOOP
    // First do the job and then have a check

		int i=1; // initialization
		do {
			cout << i;
			i = i+2; // increment/decrement
		}while(i < 10); // condition

    return 0;
}