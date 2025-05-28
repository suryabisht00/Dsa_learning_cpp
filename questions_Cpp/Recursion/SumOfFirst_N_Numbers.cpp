#include<bits/stdc++.h>

using namespace std;

int SumOfNumbers(int a){
    //for factorial uncomment these line and comment line 8
    //  if(a == 1 || a == 0){
    if(a == 1 ){
        return 1;
    }
    //for factorial uncomment these line and comment line 13
    // return (a * SumOfNumbers(a-1));
    return (a + SumOfNumbers(a-1));
}
// [n (n+1)]/2
int main(){


    int a = SumOfNumbers(100);
    cout<<a;
    return 0;
}

