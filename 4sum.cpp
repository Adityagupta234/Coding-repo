// C++ program to find a quadruplet having 
// sum target using two pointers technique

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findQuadruplet(vector<int> &arr, int target) {
    int n = arr.size();

    // Sorting the array to use two pointers technique
    sort(arr.begin(), arr.end());
  
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            int l = j + 1, r = n - 1;

            while (l < r) {
                int currSum = arr[i] + arr[j] + arr[l] + arr[r];

                // If currSum is equal to target,
              	// we have found the desired quadruplet
                if (currSum == target) {
                    return {arr[i], arr[j], arr[l], arr[r]};
                }

                // If currSum exceeds the target, move
				// the right pointer left to reduce the sum
                if (currSum > target)
                    r--;

                // If currSum is less than target, move 
				// the left pointer right to increase the sum
                else
                    l++;
            }
        }
    }
	
  	// Return empty array if no quadruplet found
    return {};
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 1, 3};
    int target = 15;

    vector<int> res = findQuadruplet(arr, target);
 	for (int i = 0; i < res.size(); i++) 
      		cout << res[i] << " ";
          
    return 0;
}
