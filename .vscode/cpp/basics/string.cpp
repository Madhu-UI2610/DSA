#include<iostream>
using namespace std;


int main() {
    // string is part of the std class
    // string name = "madhu";

    /*ANOTHER WAY OF ASSIGNING VALUE TO STRING*/
    string name("madhu"); // This is working because it is a class with constructor - OOPS
    // "madhu" -  it a char array of size 6. But we have only 5 charcters in the word "Madhu". The last position(6th index) is kept as a null element - which tells that a string is ended. We have all the charcters and the last position is reserved for null element. 


    // LENGTH OF THE STRING - use "size" function
    int length = name.size();
    cout << length<< endl;


    // Since string is the arry of characters, we can access each element. 
    for(int i=0; i<length; i++ ) {
        // Here we are able to access each character.
        cout << name[i]<<endl;
    }
    return 0;
}