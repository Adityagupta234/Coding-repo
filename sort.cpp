#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Input array containing elements from 1 to n
    vector<int> arr = { 3, 1, 4, 2, 5 };

    sort(arr.begin(), arr.end());

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
