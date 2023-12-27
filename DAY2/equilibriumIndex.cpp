// we move from i=0 to n-1 calculating lsum+=arr[i] rsum=arraysum-lsum-arr[i] if fouund equal return i  this is o (n) and o(1)

#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
   int lsum=0,rsum=0,sum=0;
    for(int i=0;i<arr.size();i++){
      sum+=arr[i];

    }
    for(int i=0;i<arr.size();i++){
        if(lsum==sum-lsum-arr[i]) return i;
        lsum+=arr[i];
    }
    
          
    return -1;
}
// we have one more method using prefix sums array where lsum=prefixsums[i-1] and rsum=arrsum-prefixsums[i] if found equal return i this o(n) time and o(n) space
