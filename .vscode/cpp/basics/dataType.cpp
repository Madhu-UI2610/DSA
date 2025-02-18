#include<iostream>
using namespace std;

int main() {
    // INTEGER - data type

    // int range -> [10^-9 to 10^9]
    int numInt = 10.7;
    cout << numInt << endl; // 10  Elimitae the decimal value
    cout << INT_MIN<<endl;  // endl will take it to a new line
    cout << INT_MAX<<endl;


    // To store greater than 10^9 till 10^12 use long data type -> [10^-12 to 10^12]
    long numlong = LONG_MAX;
    cout<< numlong;

    // To store greater than 10^9 till 10^12 use long long data type -> [10^-12 to 10^12]
    long long numlonglong = 1000000000000000000;
    cout << numlonglong;

    /* 
			SUMMARY

			till 10^9 -> integer
			greater than 10^9 to till 10^12 ->  long
			greater than 10^12 to till 10^18 -> long long
			After 10^18 current machines cannot store in c++. In future, it will be able to.
		*/


    // DECIMAL (or) FLOATING POINT NUMBERS - data type
    // float- store, till a precision of 7 decimal places.
    float numfloat = 8.999999;
    cout << numfloat;
    /* 
			double - store a precision of 15 decimal places
			double can also store integers. It doesn't matter if there are decimal places or not
		*/
    double numdouble = 9.10;
    cout << numdouble;



    // CHARACTER - data type
    // Store any of the 256 characters we have in a single quote
    char letter = 't';
    cout << letter;



		// STRING - CLASS
    /* 
			string - it is not a data type. It is a class
    	strings are written in double quotes
    	string is a class which under the -> namespace std
		*/

    string name= "thanga pillai";
    cout << name;

    return 0;

}