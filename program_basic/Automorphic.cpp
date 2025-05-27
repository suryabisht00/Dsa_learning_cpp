#include<bits/stdc++.h>
using namespace std;


int main(){
    int num,sqr,rem,count=0;
    cout<<"enter the number \n";
    cin>>num;
    sqr = num * num;
    int check = num;

    while(check>0){
        check = check / 10;
        count++;
        cout << count<< " print\n";
    }

    for(int i=0; i<count; i++){
        rem = sqr % 10;
        check = check*10 + rem ;
        sqr/=10;
        cout<<"\n check- "<<check<<endl;
    }





    if(check == num){
        cout<<"This is Automorphic.";
    }
    else{
        cout<<"This is not Auromorphic";
    }
    return 0;
}