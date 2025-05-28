#include<bits/stdc++.h>

using namespace std;

bool CheckArmstrong(int num){

    int temp = num;
    int total = 0;
    

    int digits = (num == 0)?1:int(log10(num)+1);

    while(temp>0){
        int LastDigit = temp % 10;

        // pow(base, exponent), pow(2,3) = 2*2*2 = 8,  pow return float so to handle this use round function to convert nearst integer
        
        total = total + round(pow(LastDigit, digits));
        temp /= 10;
    }
    if(total == num ){
        return true;

    }
    else{
        return false;
    }
}

int main(){

    int num;
    cout<<"Enter the number- "<<endl;
    cin>>num;
    if(CheckArmstrong(num)){
        cout<<"This is an armstrong !";
    }
    else{
        cout<<"This is not an armstrong !";
    }
    return 0;
}