#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int i=0,j=n-1;
	int ct=0;
	while(i<j){
		if(arr[i]+arr[j]==target){
			ct++;
			i++;
			j--;
		}
		if(arr[i]+arr[j]<target){
			i++;
		}
		else if(arr[i]+arr[j]>target){
			j--;
		}
	}
	if(ct>0)return ct;
	return -1;
}
// this is only for a sorted array if the array is unsorted then we use a hashmap and for each element we check if its counter part is already present in the map else we add the element to the map
