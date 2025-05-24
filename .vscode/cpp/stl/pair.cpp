#include<iostream>
using namespace std;

// To store 2 values in a single varibale
// pair is a class and it is under the std library. If we do not include 'using namespace std' we should write pair like this - std::pair
// whataver datat types we want to store together we can write them seperately eg: pair<int, int>

// we can store any of the data type together

void explainPair() {
	// create a pair using curly braces
	pair<int, int>  pr1 = {4,5};
		
	// pair is accessed using '.first', '.second'	
	cout << pr1.first << " " << pr1.second<< endl;

	// create a pair using 'make_pair()' function
	pair<int, char> intChar = make_pair(7, 's');
	cout << intChar.first << " " << intChar.second << endl;


	// We can also store anything aprt from data types eg below
	pair <pair<int,int>, pair<int,char>> pairHavingPair = {{2, 5}, {9, 'p'}};
	cout << pairHavingPair.first.first << endl;

	pair <pair<int,int>, pair<pair<float, string>,char>> pairHavingNestedPairs = { {2, 5}, {{9.989, "Madhu"}, 'p'}};


	// We can store as many nested pairs
	cout << pairHavingNestedPairs.second.first.first << " " <<   pairHavingNestedPairs.second.first.second;


}

int main() {
     explainPair();
     return 0;
}