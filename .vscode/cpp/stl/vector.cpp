#include<iostream>
using namespace std;

// Once we defined the size of the array it cannot be increased later.
// ARRAY - It is a container of fixed nature.

// VECTOR - It is a conatiner of dynamic in nature. Any type of data type can be stored in the vector. eg- integer, char, pair etc..
// VECTOR - Zero based indexing


	// push_back() / emplace_back() - insert
	// size() - size of the vector


void explainVector() {
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	for(int i=0; i<vec.size(); i++) {
		cout << vec[i] <<" ";
	}
}


int main() {
     explainVector();
     return 0;
}