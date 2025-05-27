#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a = 0;
    int num = a;
    /* //Not Ideal
    int c = 0;
    
    while(num>0){
        num /= 10;
        c++;
    }
    cout<<"total number is:- "<<c;
*/

    // use log10 +1 insted of this and type cast to int
    //  (num == 0) ? 1 : int(log10(num) + 1) :- TO HANDLE 0 ON CODE
    cout<<"total number is:- "<< (num == 0) ? 1 : int(log10(num) + 1);
    return 0;
}