// Write a code to replace each element in an array by its rank in the arrayThis problem asks to replace each element in an array by its rank in the array.
// The rank of an element is its position in the sorted array (with ties assigned the same rank).
// Example for array [40, 10, 20, 30]:
// After replacing each element by its rank, the array will be [4, 1, 2, 3] (after sorting, the elements are [10, 20, 30, 40], so ranks are [1, 2, 3, 4]).
#include<bits/stdc++.h>

using namespace std;

vector<int> replaceWithRank(const vector<int>& arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    unordered_map<int, int> rankMap;
    int rank = 1;
    for (int num : sortedArr) {
        if (rankMap.find(num) == rankMap.end()) {
            rankMap[num] = rank++;
        }
    }

    vector<int> result;
    for (int num : arr) {
        result.push_back(rankMap[num]);
    }
    return result;
}

int main() {
    vector<int> arr = {40, 10, 20, 30};
    vector<int> rankedArr = replaceWithRank(arr);

    for (int r : rankedArr) {
        cout << r << " ";
    }
    cout << endl;

    return 0;
}








#include <iostream>
#include <cmath>
using namespace std;

bool isAutomorphic(int num) {
    int square = num * num;

    int temp = num;
    while (temp > 0) {
        if (square % 10 != temp % 10)
            return false;
        square /= 10;
        temp /= 10;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isAutomorphic(num)) {
        cout << num << " is an Automorphic number." << endl;
    } else {
        cout << num << " is not an Automorphic number." << endl;
    }

    return 0;
}
