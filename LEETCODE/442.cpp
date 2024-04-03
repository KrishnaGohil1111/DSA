#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums){
        int n = nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
                i = i + 1;
            }
        }
        return ans;
    }
};

// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Example 2:

// Input: arr = [1,2]
// Output: false
// Example 3:

// Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
// Output: true