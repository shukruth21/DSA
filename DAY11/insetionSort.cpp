#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1;i<n;i++){
        int j=i-1;
        int cur=arr[i];
        while(arr[j]>cur && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
    }
}
