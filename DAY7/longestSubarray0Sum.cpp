#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > A) {

  // Write your code here
  int n=A.size();
  unordered_map<int,int> mpp; 
    int maxi = 0;//answer
    int sum = 0; 
    for(int i = 0;i<n;i++) {
        sum += A[i]; // calculate sum at each element thats is the prefix sums
        if(sum == 0) {
            maxi = i + 1; // if sum is zero upadate the answer because its straight sequence
        }
        else {
            if(mpp.find(sum) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum]); // after moving through the array and you get the same that was calculated before then that means there exists a part with 0 sum
            }
            else {
                mpp[sum] = i;// other wise add the new sum to the map
            }
        }   
    }

    return maxi; 
}
