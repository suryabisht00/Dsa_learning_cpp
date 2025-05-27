#include<bits/stdc++.h>
// no need to add bunch of libraries one by one we can import only one lbrary for all.
using namespace std;

int main(){
    
    // In C++, a list is a container from the Standard Template Library (STL) that implements a doubly linked list. 
    // It allows fast insertion and deletion from anywhere in the sequence.

    list<int> ls;

    // we can push at back
    ls.push_back(2);
    ls.emplace_back(4);



    // cout<<ls[0];
    cout<<"elements := "<<ls.front()<<endl;
    


    // we can push at front
    ls.push_front(5);
    cout<<"elements := "<<ls.front();


    // all other funcation similer to vector



    // iterate over list
    cout<<"\nIteration of list= ";
    for (auto&  val : ls) {
        cout << val << " ";
    }
    

    
    // remove from list
    ls.pop_back();        // Remove last element
    ls.pop_front();       // Remove first element
    ls.remove(10);        // Remove all elements with value 10


    ls.sort();            // Sorts the list in ascending order
    ls.reverse();         // Reverses the list
    
    return 0;
}