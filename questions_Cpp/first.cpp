


//  use priority queue

#include<bits/stdc++.h>
// no need to add bunch of libraries one by one we can import only one lbrary for all.
using namespace std;

int main(){
    
    int arr[] = {1,87,44,23,12,56,15,16,67};

    priority_queue<int> pq;
    for(int i=0 ; i<(sizeof(arr) / sizeof(arr[0])); i++){
        pq.push(arr[i]);
    }

    cout<<(pq.top());
    return 0;
}