#include<bits/stdc++.h>
using namespace std;

int main(){
        //   store every thing in sorted but alloq multiple
    multiset < int> ms;

    ms.insert(1);//{1}
    ms.insert(2); // {1,2}
    ms.insert(1); //{1,1,2}
    ms.insert(1); //{1,1,1,2}
    ms.insert(1); //{1,1,1,1,2}

    cout<<"cont the number 1 = "<<ms.count(1)<<endl;
    ms.erase(1); //all ereased
    cout<<"cont the number after erease 1 = "<<ms.count(1)<<endl;
    
    return 0;
}