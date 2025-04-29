#include<bits/stdc++.h>

using namespace std;

int main(){

    stack<int> st;

    // no indexing only push,pop ,size() and top


    // push operation on cpp
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    st.push(16);
    st.push(117);
    st.push(18);

    
    // size of stack
    cout<<"size of stack is = "<<st.size()<<endl;

    // Access the top element of stack
    cout<<"Top element befor pop = "<<st.top()<<endl;
    
    
    // delete element form stack top
    cout<<"pop= "<<st.top()<<endl;
    st.pop();
    cout<<"Top element after pop = "<<st.top()<<endl;

    // size of stack
    cout<<"size of stack is = "<<st.size()<<endl;

    return 0;
}