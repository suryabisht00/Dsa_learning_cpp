#include<bits/stdc++.h>

using namespace std;

int main(){

    // initialize vector
    vector <int> v = {11,12,13,14,15,16};

    //initilize with no element
    vector <int> v1; 
    

    // added element at last
    v.emplace_back(111,23,234,23); 

    // Size of vector
    cout<<"\n\n Size of vactor is = "<<v.size()<<endl;


    cout<<"elements of vector is = ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ,";
    }


    // first element and last element
    cout<<"\n\n first element = "<<v.front()<<endl;
    cout<<"\n\n remove last element = "<<v.back()<<endl;


    // remove element from last
    v.pop_back();



    // Size of vector
    cout<<"Size of vactor is = "<<v.size()<<endl;


    cout<<"elements of vector is = ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ,";
    }


    // remove element from specifi index/position
    int position = 3;
    cout<<"\n\n remove element from specifi index/position = "<<v[position]<<", index = "<<position<<endl;
    v.erase(v.begin() + position);



    cout<<"Size of vactor is = "<<v.size()<<endl;
    cout<<"elements of vector is = ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ,";
    }
    

    // first element
    cout<<endl<<*v.begin();

    return 0;
}