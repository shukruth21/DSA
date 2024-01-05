//we will assume all elements at start index i are negative hence we swap them and move this uses the idea of the dutch national flag algorithm
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.
    int i=0,j=0;
    while(j<nums.size()){
        if(nums[j]<0){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return nums;
}
