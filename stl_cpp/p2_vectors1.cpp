#include<bits/stdc++.h>

using namespace std;

// if we define arr[5] = {1 ,2 ,3, 4 ,5} , so we can't be able to declare again or increase the size of this array


int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);


    vector<pair<int,int>> vct ;
    vct.push_back(2);
    vct.emplace_back(3);
    
    return 0;
}