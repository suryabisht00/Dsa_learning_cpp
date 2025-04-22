#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int minimum = min(a,b);
    int maximum = max(a,b);

    cout<<"minimum is :- "<<minimum<< endl<<"maximum is :- "<<maximum;
    
    return 0;
}


// note array always go with reference on funcation