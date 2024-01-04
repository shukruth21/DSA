#include <bits/stdc++.h> 
vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{
    // Write your code here.
    vector<vector<string>>ans;
    map<string,vector<string>>mp;// string to store the sorted version used to map and vector for the anagrams compared with the sorted string
    string temp;
    for(int i=0;i<n;i++){
        temp=inputStr[i];
        sort(inputStr[i].begin(),inputStr[i].end());
        mp[inputStr[i]].push_back(temp);//pushing the same type of strings into the map
    }
    for(auto &it:mp){
        ans.push_back(it.second);
    }
    return ans;
}
