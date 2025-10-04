#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> mergeKArrays(vector<vector<int>>& arr, int k) {
    vector<int> res;

    // Append all arrays into res
    for (const auto& vec : arr) {
        for (int val : vec)
            res.push_back(val);
    }

    // Sort the res
    sort(res.begin(), res.end());

    return res;
}

// Driver's code
int main() {
    vector<vector<int>> arr = {{1, 3, 5, 7},
                              {2, 4, 6, 8}, 
                              {0, 9, 10, 11}};
                              
    int k = 3;
    vector<int> res = mergeKArrays(arr, k);

    // Print the array elements
    for (int val : res) {
        cout << val << " ";
    }

    return 0;
}
