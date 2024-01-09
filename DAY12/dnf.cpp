#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int l=0,m=0,h=n-1;// assume 0's are at l indexes 1 at mid indexes and 2 at h
   while(m<=h){
      if(arr[m]==0){
         swap(arr[m],arr[l]);// swap so that 0 goes to the start
         m++;
         l++;
      }
      else if(arr[m]==1){// move front because 1 has to be in the middle 
         m++;
      }
     else{
         swap(arr[m],arr[h]);// moving 2's to the end
         h--;
      }
   }
}
