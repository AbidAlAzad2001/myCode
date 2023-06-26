#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int recoverInitialNumber(vector<int>& nums) {
    int n = nums.size();
    
    // Store the numbers in a set to keep track of unique numbers
    unordered_set<int> uniqueNums(nums.begin(), nums.end());
    
    // Iterate over the differences and find the repeated difference
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(nums[i] - nums[j]);
            if (uniqueNums.find(diff) != uniqueNums.end()) {
                return diff;
            }
        }
    }
    
    return 0; // Default return value (won't be reached if input is valid)
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        int result = recoverInitialNumber(nums);
        cout << result << endl;
    }
    
    return 0;
}
