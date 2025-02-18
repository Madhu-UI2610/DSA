#include<iostream>
using namespace std;

int main() {

    // EG : 1
    // We can define the variable in single line int num1, num2
    int num1;
    int num2;

    
    // Getting the num1 and num2 from the intput.txt file
    // It will go the input.txt file and it finds the first line -> it is 72. It inserts 72 into num1.
    // i/p : 72 87
    cin >> num1; 


    /* 
    o/p:  721 ( Here 1 is garabage value, because in c++ what compiler will do is, if we are not assigning a number, the compiler ends up assigning a garbage value (Any random value). In this case it is 1, but it can be any garbage value in different machine.
    */
    cout << num1;
    cout << num2;
 


    // EG: 2
    int numb1, numb2;
    /*
    i/p: 
        72 
        82
    */ 
    // Taking inputs from intput.txt and assign it to num1 and num2
    cin >> numb1 >> numb2;
    /*
    o/p: 
        72 
        82
    */ 
    cout << numb1 << endl << numb2; 


    // EG-3 the above example 2 is applicable for double.



    // EG -4 with the character
    char ch1, ch2;

    /*
       i/p:  72 82
    */
    cin >> ch1 >> ch2;

    /*
        o/p: 
         7
         2
    */
    cout << ch1 << endl << ch2; 


    // EG -5 with the string
    char str1, str2;

    /*
       i/p(1) :  72 82
       i/p(2) :  God is amazing

    */
    cin >> str1 >> str2;

    /*
        o/p(1): 
         72
         82

        o/p(2): 
         G
         o
        
    */
    cout << str1 << endl << str2;


    // EG -6  Pick the entire line of the string until it finds the enter. 
    /*
       i/p: 

       God is amazing.
       My pet is angel

    */
    string strr1, strr2, strr3;
    getline(cin, strr1); // It takes the entire line and put it in the strr1. 
    getline(cin, strr2); // It takes the entire line and put it in the strr2. 
    getline(cin, strr3);

     /*
        o/p: 
         God is amazing
         My pet is an angel
    */

    cout << strr1 << endl << strr2 << endl << strr3;
    return 0;
}
