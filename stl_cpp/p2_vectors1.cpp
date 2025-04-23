#include<bits/stdc++.h>

using namespace std;

// if we define arr[5] = {1 ,2 ,3, 4 ,5} , so we can't be able to declare again or increase the size of this array
// we can use vector they are dynamic in nature whenever we want to increase size we can easily increses.

int main(){
    // initilize the vector
    vector<int> v; //creates an empty container - {}

    // Agar tum object pehle se bana chuke ho, toh push_back theek hai.
    v.push_back(1); 
    v.push_back({1,2,4}); 
    //now container - {1},needs to add curly braces

    // Agar tum naya object banana chahte ho vector ke andar hi, toh emplace_back best ha
    v.emplace_back(2);
    v.emplace_back(1,2,3);
    //now container - {1,2},faster tehn push_back, not need to add curly braces

    
    vector<int> v(5,100); // creates a vector of size 5 and all elements are initialized to 100 {100,100,100,100,100}

    vector<int> s2(5); // vector of size 5 with default values {0,0,0,0,0}

    // we can also use vector of pairs
    vector<pair<int,int>> vct ;

    vct.push_back(2);
    vct.emplace_back(3);
    
    cout<<*()<<endl; // it will give the address of first element of vector

    
    
    return 0;
}