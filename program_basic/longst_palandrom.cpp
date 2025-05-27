#include<bits/stdc++.h>

using namespace std;

bool check_palandrom(const string& s) {
    int left = 0, right = (int)s.size() - 1;
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

string lngst_plmdrom(const vector<string>& arr) {
    string longest = "";
    for (const string& s : arr) {
        if (check_palandrom(s) && s.size() > longest.size()) {
            longest = s;
        }
    }
    return longest;
}

int main() {
    vector<string> arr = {"racecar", "level", "hello", "madam", "world"};
    string result = lngst_plmdrom(arr);
    
    if (!result.empty()) {
        cout << "The longest palindrome is \"" << result << "\"." << endl;
    } else {
        cout << "No palindrome found in the array." << endl;
    }

    return 0;
}
