#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
    //  Write your code here.
    bool c=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){   // if elements are in right order no changes are made so just continue
            continue;
        }
        if(c) return false;   // if we have already used up the one change we can make then no solution
      // we make changes in below code changes is of 2 type if there is problem b/w 2 elements we can increase one ele upto other ele or decerease
        if(i==0 || arr[i+1]>=arr[i-1]){  // i=0 is to handle an array with only 2 elements  [3,4,2,5] problem at 4 if we modify 4 to 2 it will be wrong so this checks that case
            arr[i]=arr[i+1];
        }
        else{
            arr[i+1]=arr[i];  //[5,6,2] now we cant lower 6 so we increase 2 upto 6 
        }
        c=true;
    }
    return true;
   
}
