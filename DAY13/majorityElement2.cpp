/*BRUTEFORCE:INTUTION:here we count the frequnecy of each element and then we add the element to the answer list if the frequency is >n/3.
CODE;
*/
#include <bits/stdc++.h>

 

vector<int> majorityElementII(vector<int> &arr)

{

// Write your code here.

int n=arr.size(),k=n/3;

map<int,int>mp;

vector<int> ans;

for(int i=0;i<n;i++){

mp[arr[i]]++;

}

for(auto &it:mp){

if(it.second>k)ans.push_back(it.first);

}
return ans;

}


/* OPTIMAL APPROACH:
here we use the boyre moore voting algorithm
there can only be 2 elements with a frequency that is strictly greater than n/3 using this we traverse the array and keep track of the count and its changes.
code:*/

#include <bits/stdc++.h>

 

vector<int> majorityElementII(vector<int> &arr)

{

// Write your code here.

vector<int>ans;

int el1=0,el2=0,ct1=0,ct2=0,n=arr.size();

for(int i=0;i<n;i++){

if(arr[i]==el1)ct1++;// increasing count of the majority element

else if(arr[i]==el2)ct2++;

else if(ct1==0){

el1=arr[i];// when ct becomes zero that is a new majority can be found

ct1=1;

}

else if(ct2==0){

el2=arr[i];

ct2=1;

}

else{

ct1--;//when the element does not the match the majority element we reduce its frequency

ct2--;

}

}

ct1=0,ct2=0;

// we verify if they are truly majority elements

for(int i=0;i<n;i++){

if(arr[i]==el1)ct1++;

else if(arr[i]==el2)ct2++;

 

}

if(ct1>(n/3))ans.push_back(el1);

if(ct2>(n/3))ans.push_back(el2);

return ans;

 

}
