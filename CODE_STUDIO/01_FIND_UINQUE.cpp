#include<iostream>
using namespace std;
int findunique(int *arr,int size){
    int ans = 0;
    for(int i = 0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

// input:
// 1
// 7
// 2 3 1 6 3 6 2


// output:
// 1