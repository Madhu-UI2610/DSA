#include<iostream>
using namespace std;


// PASS BY VALUE 

/*
1. All data types pass values as copies, meaning they do not affect the original value.

2. However, arrays are passed by reference by default, meaning changes to the array inside a function will modify the original array. params can be passed as int arr[] or int *arr.

3. If we want to pass other data types(Array is excluded) by reference, we can use the & (address-of) operator, like int &num.

4. We often use pass-by-reference instead of working with lot of copies requires more memory, which is unnecessary in many cases. We need to save memory.
*/


void passByValue(int num) {
    num = num + 10;
}

void passByReference(int &num) { // chnage the original value using address of operator
    num = num + 10;
}

// ARRAY BY DEFAULT IT IS ALWAYS PASS BY REFERENCE
// METHOD 1: Passed as it is.
void passByReferenceArrayMethod1(int num[]) {
    num[0] = 100;
}

// METHOD 2:  -> *variableName 
void passByReferenceArrayMethod2(int *num) {
    num[0] = 00;
}

int main() {
    int num = 10;
    passByValue(num);
    cout << num << endl;


    passByReference(num);
    cout << num << endl;

    int numArr[] = {1,2,3};
    cout << numArr[0] << endl;
    passByReferenceArrayMethod1(numArr);
    cout << numArr[0] << endl;
    passByReferenceArrayMethod2(numArr);
    cout << numArr[0] << endl;

    return 0;
}