// its not optimized it take O(n log n) time complexity
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     multiset<int>ms;
//     int arr[] = {1,2,3,4,5,2,1,3,21,3,32,2,1,3,1,3,1,4,1,35,3,5,52,1,3,54,2};
//     for(int i=0 ; i<sizeof(arr)/sizeof(arr[1]); i++){
//         ms.insert(arr[i]);
//     }
//     cout<<"Enter the number for searching = ";
//     int a;
//     cin>>a;
//     cout<<"frequency of number is = "<<ms.count(a);
//     return 0;
// }


// optimised techique O(n)
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    multiset<int>ms;
    cout<<"Enter the number for searching = ";
    int a;
    cin>>a;
    int frequency=0;
    int arr[] = {1,2,3,4,5,2,1,3,21,3,32,2,1,3,1,3,1,4,1,35,3,5,52,1,3,54,2};
    for(int i=0 ; i<sizeof(arr)/sizeof(arr[1]); i++){

        if(arr[i] == a){
            frequency++;
        }
    }
    cout<<"frequency of number is = "<<frequency;
    return 0;
}