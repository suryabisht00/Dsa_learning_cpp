#include<bits/stdc++.h>

using namespace std;

void GcdTwoNumbers(int a, int b){
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a==0) cout<<b<<" is GCD of the number";
    else cout<<a<<" is GCD of the number";
}
int main(){
    int a ;
    int b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    GcdTwoNumbers(a,b);
    return 0;
}



/*
Time complexity of Euclidean algorithms:-  O(logmin(a,b))

In this program we have used Euclidean algorithms i which 
gcd(a,b) = gcd(a % b , b), where a>b

algo:-
1- Enter Two numbers from user
2- Pass it into a funcation
3- Start a loop until a and b not equal to 0
4- If a is greater than b so perform a = a % b
5- Else b is greater than a so perform b = b % a
6- Now compare both value to zero, non zero value is out answer
*/