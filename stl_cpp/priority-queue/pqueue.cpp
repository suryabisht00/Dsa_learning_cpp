
#include<bits/stdc++.h>
// no need to add bunch of libraries one by one we can import only one lbrary for all.
using namespace std;

int main(){
    
    // Push = log(n)
    // pop = O(1)
    // top = log(n)

    // Also known as max heap ()
    priority_queue<int> pq;

    // add element on Priority_queue 
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(7);
    pq.push(10);
    pq.push(30);
    pq.push(1);


    // store greater element at the top
    
    cout<<pq.top()<<endl; //30 because 30 is greatest
    pq.pop();
    cout<<pq.top()<<endl<<endl<<endl; //10 because 10 is greatest
    
    
    // store lower element at the top

    // Min priority queue / min heap
    cout<<"Min priority queue also know as Min heap"<<endl;

    priority_queue<int , vector<int>,greater<int>> min_pq;

    min_pq.push(5);
    min_pq.push(2);
    min_pq.push(8);
    min_pq.push(7);
    min_pq.push(10);
    min_pq.push(30);
    min_pq.push(1);



    cout<<"min pq = "<<min_pq.top()<<endl; //1 because 1 is lowest
    min_pq.pop();
    cout<<"after pop min pq = "<<min_pq.top()<<endl; // 2
    return 0;
}