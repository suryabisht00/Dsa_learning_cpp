#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Set = sorted + unique

    set<int>st;

    st.insert(1); //{1}
    st.insert(1);
    st.insert(2);//{1,2}
    st.insert(2); 
    st.insert(3);
    st.insert(3);//{1,2,3}
    st.insert(4);//{1,2,3,4}

    cout<<"Size = "<<st.size()<<endl; //size of set
    auto it = st.find(4); // returen a iteratior which poitn the address of there
    cout<<"Find the number using find fun = "<<*it<<endl;

    st.erase(4);

    int a = st.count(4); // alway 0 and 1 
    cout<<"count = "<<a<<endl;

    cout<<"Size = "<<st.size()<<endl;
    

    // lower bound
    // upep bound

    return 0;
}