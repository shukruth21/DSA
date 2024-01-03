#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	// Write your code here.
	map<int,int>mp;
	for(int i=0;i<arr.size();i++){
		mp[arr[i]]++;// counting frequency of elements
	}
	map<int,int>::iterator it;
	int ans=0;
	for(it=mp.begin();it!=mp.end();it++){
       if(it->second>1){
		   ans+=it->second-1;// adding to min removes -1 to exclude the one element
	   }
	}
	return ans;
}
/* one more method
#include <unordered_map>

int minElementsToRemove(vector<int> &arr)
{
	int n = arr.size();

	unordered_map<int, bool> present;
	int minRemoves = 0;

	for (int i = 0; i < n; i++)
	{
		// If the current element is present in array.
		if (present[arr[i]])
		{
			// Increase the number of removes.
			minRemoves++;
		}
		else
		{
			// Else recoganize that element is present.
			present[arr[i]] = true;
		}
	}

	return minRemoves;
}
*/
