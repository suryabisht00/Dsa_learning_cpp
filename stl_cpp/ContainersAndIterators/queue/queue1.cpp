#include<bits/stdc++.h>
// no need to add bunch of libraries one by one we can import only one lbrary for all.
using namespace std;

int main(){
    
    // FIFO
    queue<int> q;



    // push element on queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // back         // front
    // ------------------
    //  5  4  3  2  1
    // ------------------

    cout<<"front element of queue "<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<"size of queue "<<q.size()<<endl;
    cout<<"is queue empty "<<q.empty()<<endl;
    cout<<"pop element of queue "<<q.front()<<endl;
    q.pop(); // pop the front element of queue
    cout<<"front element of queue "<<q.front()<<endl;
    cout<<"size of queue "<<q.size()<<endl;
    cout<<"is queue empty "<<q.empty()<<endl;
    

    return 0;
}