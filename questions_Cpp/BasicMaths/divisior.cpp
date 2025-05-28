#include<bits/stdc++.h>

using namespace std;


void divisiors(int num ){
    vector <int> factors1;
    for(int i =1; i*i<=num ; i++){
        if(num%i == 0){
            factors1.push_back(i);
            if(num/i != i){
                factors1.push_back(num/i);
            }
        }
    }
    sort(factors1.begin(),factors1.end());
    for(auto it : factors1){
        cout<<it<<" ";
    }

}

int main(){

    int num ;
    cout<<"Enter the number to check divisior:- ";
    cin>>num;
    divisiors(num);
    
    return 0;
}



