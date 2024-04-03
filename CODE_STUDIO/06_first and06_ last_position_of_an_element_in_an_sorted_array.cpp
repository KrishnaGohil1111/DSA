#include <bits/stdc++.h>
using namespace std;
int firstoccurence(vector<int>& arr,int n,int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;

        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastoccurence(vector<int>& arr,int n,int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start )/2;
    int ans = -1;
    while (start <= end) {
        if (arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>p;
    p.first = firstoccurence(arr,  n, k);
    p.second = lastoccurence(arr, n, k);
    return p;
}

// Sample Input 1:
// 8 2
// 0 0 1 1 2 2 2 2


// Sample output 1:
// 4 7
