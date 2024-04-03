#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    bool uniqueoccurences(vector<int>&arr){
        vector<int> ans;
        int size = arr.size();
        sort(arr.begin(),arr.end());
        int i = 0;
        while(i<size){
            int count = 1;
            for(int j = i + 1;j<size;j++){
                if(arr[i]==arr[j]){
                    count ++;
                }
                else{
                    break;
                }
            }
            ans.push_back(count);
            i = i + count;
        }
        size = ans.size();
        sort(ans.begin(),ans.end());
        for(int i = 0;i<size-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;
    }
};


// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:

// Input: nums = [1,1,2]
// Output: [1]
// Example 3:

// Input: nums = [1]
// Output: []