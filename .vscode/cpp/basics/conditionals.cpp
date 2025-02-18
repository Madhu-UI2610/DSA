// NESTED IF ELSE STATEMENT

#include<iostream>
using namespace std;

int main() {
	int a,b,c;

	cin >> a >> b >> c;

	// Either &&/and can be used
	if(a>=b and a>=c) {
		cout << "Largest is A";
	}
	else if(b>=c) {
		cout<< "Largest is B";
	}
	else{
		cout << "Largest is C";
	}



	// SWITCH STATEMENT
	/* 
	1. Switch case is different format of writing an if condition. Where we know, what can be the possible if else conditions. 
	2. Advantge of switch over if condition is - it directly go the particular case and execute it, without checking for all the previous cases.  
	Eg: i/p: 3 - it will directly do to "case 3", without checking "case 1", "case 2"
	NOTE: If we didn't provide "break", it will execute all the cases starting from "case 2".
	3. Break will exit the switch statement
	4. If any invalid value is provided - default case will be printed. We no need a break in default case 
	*/

	int day;
	cin >> day;

	switch(day) {
		case 1:
			cout << "Mon";
			break;
		case 2:
			cout << "Tues";
			break;
		case 3:
			cout << "Wed";
			break;
		case 4:
			cout << "Thur";
			break;
		case 5:
			cout << "Fri";
			break;
		case 6:
			cout << "Sat";
			break;
		case 7:
			cout << "Sun";
			break;
		default:
			cout << "Invalid";
	}

  return 0;
}