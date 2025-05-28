#include<bits/stdc++.h>

using namespace std;

int prntName(int a,int b){
    if(a> 5){
        return 0;
    }
    cout<<a<<" - Name - Suraj Bisht \n";
    prntName(a+1,b);
}

int main(){

    prntName(1,5);
    return 0;
}