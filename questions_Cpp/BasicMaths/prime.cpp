#include<bits/stdc++.h>

using namespace std;


void CheckPrime(int num){

    int counter = 0;
    for(int i=1; i*i<=num; i++){
        if(num%i == 0){
            counter++;
            if((num/i )!= i){
                counter++;
            }
        }
        
    }
    if (counter == 2) cout<<"prime number"<<endl;
    else cout<<"not a prime number"<<endl;
}


int main(){


    CheckPrime(7);
    CheckPrime(9);
    CheckPrime(133);
    CheckPrime(101);
    return 0;
}