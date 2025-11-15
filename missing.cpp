//Missing Number;
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    | Method             | Time Complexity | Space Complexity         | Notes                                                                        |
| ------------------ | --------------- | ------------------------ | ---------------------------------------------------------------------------- |
| **1. Sum Formula** | **O(n)**        | **O(1)**                 | Easiest & fastest; risk of overflow in extreme cases (but fine for LeetCode) |
| **2. XOR Method**  | **O(n)**        | **O(1)**                 | Most reliable (no overflow); very clean logic                                |
| **3. Hash-Set**    | **O(n)**        | **O(n)**                 | Simple but uses extra space                                                  |
| **4. Sorting**     | **O(n log n)**  | **O(1)** (in-place sort) | Slower due to sorting step                                                   |

	//1.Brute Force Approach;
	#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array.begin(), array.end());

    int missing = -1;

    for (int i = 0; i < n; i++) {
        if (array[i] != i) {
            missing = i;
            break;
        }
    }

    if (missing == -1) missing = n;

    cout << missing << endl;
    
    
    //2. Actualsum- Expected Sum appprach;
    int n = nums.size();
int sum = n * (n + 1) / 2;

int numse = 0;
for (int i = 0; i < nums.size(); i++) {
    numse += nums[i];
}

return abs(sum - numse);

//3. XOR Approach;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int xorAll = 0;
    
    // XOR with all numbers from 0 to n
    for (int i = 0; i <= n; i++) {
        xorAll ^= i;
    }

    // XOR with all numbers in the array
    for (int x : nums) {
        xorAll ^= x;
    }

    return xorAll; // remaining value = missing number
}


}


}
