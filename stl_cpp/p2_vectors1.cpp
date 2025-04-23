#include<bits/stdc++.h>

using namespace std;

// if we define arr[5] = {1 ,2 ,3, 4 ,5} , so we can't be able to declare again or increase the size of this array
// we can use vector they are dynamic in nature whenever we want to increase size we can easily increses.

int main(){
    // initilize the vector
    vector<int> v; //creates an empty container - {}

    // Agar tum object pehle se bana chuke ho, toh push_back theek hai.
    v.push_back(1); 
    // Push back takes only one element at a time for primitive types like int
    v.push_back(2);
    v.push_back(4);
    //now container - {1, 2, 4}

    // Agar tum naya object banana chahte ho vector ke andar hi, toh emplace_back best hai
    v.emplace_back(5);
    // emplace_back also takes only one element for int vectors
    //now container - {1, 2, 4, 5}, faster than push_back, no need for curly braces

    // Example of vector with initial size and values
    vector<int> v2(5, 100); // creates a vector of size 5 with all elements initialized to 100 {100,100,100,100,100}

    vector<int> v3(5); // vector of size 5 with default values {0,0,0,0,0}

    // Vector of pairs example (correctly commented out)
    // vector<pair<int,int>> vct;
    // vct.push_back(make_pair(1, 2));
    // vct.emplace_back(3, 4); // emplace_back can directly take pair elements

    vector<int>::iterator it = v.begin(); // it is an iterator which points to the first element of vector
    it++;
    cout << *it << endl; // prints the second element of vector (value at iterator position)
    
    // Print all elements in the vector
    cout << "Vector elements: " <<  it[2];
    
    return 0;
}