#include<bits/stdc++.h>

using namespace std;

int main(){

    // key-value pair
    // key are unique and ordered
    // just like python dictonory
    // key-value may be any datatype


    // syntax
    map<int, int> mpp;
    map<int,pair<int,int>> mpp1; // to access the pair use first and second 
    map<pair<int,int>,int> mpp2;

    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2,4});

    mpp1[4 ]= {4,5};
    mpp1[41 ]= {141,51};
    mpp1[6 ]= {332,121};


    mpp2[{2,3}] = 10;


    cout<<mpp[1]<<endl;
    cout<<mpp[3]<<endl;
    cout<<mpp[2]<<endl;

    // acess the pair using first and second
    cout<<mpp1[4].first<<","<<mpp1[4].second<<endl;
    cout<<mpp1[41].first<<","<<mpp1[41].second<<endl;
    cout<<mpp1[6].first<<","<<mpp1[6].second<<endl;

    cout<<mpp2[{2,3}]<<endl;

    // size, erase, swap, empty are same as above
    cout<<mpp1.size()<<endl;


    // iterate the map 
    cout<<"\niterate the map :- \n";
    for (const auto& pair : mpp) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    // iterate the map 
    cout<<"\niterate the map :- \n";
    for (const auto& pair : mpp1) {
        std::cout << pair.first << ": " << pair.second.first<<" , " <<  pair.second.second << std::endl;
    }

    
    
    // another way to create map
    map<int,string> mpp3 = {
        {1,"one"},
        {4,"four"},
        {5,"five"},
        {3,"three"},
        {2,"tow"},
    };
    
    cout<<"\niterate the map :- \n";
    for(const auto &pair: mpp3){
        cout<<pair.first<<":"<<pair.second<<endl;
    }


    return 0;
}