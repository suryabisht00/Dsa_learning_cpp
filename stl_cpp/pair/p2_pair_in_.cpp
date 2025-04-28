#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"good luck\n";

    // two value both are int
    pair <int , int> p = {1,2};
    cout<<p.first<<endl<<p.second<<endl;

    // p.first --- for acess first element of pair
    // p.second --- for acess second element of pair
    // note - we can only store only two variable on it because its a pair
    // for storing muplitple value we can use nested pair on it

    // three value one is int and other is another pair
    pair<int , pair<int,int>>p1 = {13 , {2,3}};
    cout<<p1.second.first<<endl;

    pair <int ,int >s[] = {{1,2},{4,6},{7,8}};
    cout << endl << s[0].second<<endl;
    cout << endl << s[1].second<<endl;
    cout << endl << s[2].second<<endl;

    return 0;
}