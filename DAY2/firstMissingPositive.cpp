//adding all the elements to a map and use find() to check for the lowest positiive no.
#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp.insert({arr[i],i});

    }
    for(int i=1;i<=n+1;i++){
        if(mp.find(i)==mp.end()){
            return i;
        }
    }
}

//or create a functoin and segregate all the positive elements to one side and then check if something is missing
