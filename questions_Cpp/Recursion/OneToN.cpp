#include<bits/stdc++.h>

using namespace std;

int a12(int a,int n){

    if(a<n){
        return 0;
    }
    cout<<a<<"\n";
    a12(a-1,n);
}


int main(){

    a12(5,1);
    return 0;
}