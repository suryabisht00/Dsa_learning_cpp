#include<bits/stdc++.h>

using namespace std;

int main(){
    // int x,y;

    // cin >> x>>y;   // we can take multiple elements

    // cout<<"hellow bro"<<"\n"<<"suraj\n";
    // Data type
    // int x = 10;
    // long x = 15;
    // long long x = 150000000;

    // float,double
    // float y = 3.4;
    // double y = 5;


    // string ;
    // string s1,s2; // string seprate by white spaces
    // cin >>s1>>s2;
    // cout << s1<<" "<<s2;

    // string str;
    // getline(cin, str); // able to take all line including white spaces.
    // cout<<str;

    // int = -10^9 to 10^9
    // long = -10^12 to 10^12
    // long long = -10^18 to 10^18


    // if else
    // switch

    int day ;
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"monday";
        break;
    
    case 2:
        cout<<"tuesday";
        break;
    
    case 3:
        cout<<"wednesday";
        break;
    
    case 4:
        cout<<"thursday";
        break;
    
    case 5:
        cout<<"friday";
        break;
    
    case 6:
        cout<<"saturday";
        break;
    
    case 7:
        cout<<"sunday";
        break;
    
    default:
    cout<<"choose 1 to 7";
        break;
    }

    return 0;
}
