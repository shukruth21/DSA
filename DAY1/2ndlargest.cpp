#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int l=arr[0],s=INT_MIN;//intialise
    for(int i=1;i<arr.size();i++){
        if(arr[i]>l){    //first case we check if element is greater than large then we update the second largest element 
            s=l;
            l=arr[i];
        }
        else if(arr[i]>s && arr[i]!=l){  // second edge case if element is smaller than large but bigger than second large we update it but it should not be equal to the previous large element
            s=arr[i];
        }
    }
    if(s==l || s==INT_MIN)return -1;  // if s remains min it is understood that all the elements in the array are duplicates
    
    return s;
}
