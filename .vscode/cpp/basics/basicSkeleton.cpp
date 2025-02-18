// program to run, needs a lot of libraries. It needs a c++ rules
// In iostream there are lot of rules which is telling you this is required.
// Take an input and send out the output. For that we need a librarary iostream
// Therefore we are including the isoream librarary
#include<iostream>

//math.h - It will tell us these are the math rules. Now we can use it. 
#include<math.h>
using namespace std; // It import all the functions, all the classes which is under the namespace std. There are bunch of them.

// Similar to iostream.h, math.h there are bunch of other libraraies. How do we know which librarary to use. 
// #include<bits/stdc++.h> - It has all the libraries, that are required
// So, whatever we write we don't have to rememeber. what library we need to add.

// Using - '#include<bits/stdc++.h>' -> now we are adding all the library. so all the library are compiled at once. So, the compilation time might be slightly more (fractions). But, it's negligible. 

int main(){ //main function is the entry point 
    /*  
			strings are written in double quotes
      string is a class which under the namespace std
    */
    string name= "madhumathi";
    cout << name;
    return 0;
}   

/* 
void means it won't be returning anything. Void is a keyword
	void main() {  

	}
*/