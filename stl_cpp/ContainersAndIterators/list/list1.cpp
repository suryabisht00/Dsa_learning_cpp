#include<bits/stdc++.h>
// no need to add bunch of libraries one by one we can import only one lbrary for all.
using namespace std;

int main(){
    
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    // cout<<ls[0];
    cout<<"elements := "<<ls.front()<<endl;
    
    // we can push at front
    ls.push_front(5);
    cout<<"elements := "<<ls.front();

    // all other funcation similer to vector
    
    return 0;
}