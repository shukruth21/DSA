#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    map<char,int>mp;
    if(str1.length()!=str2.length())return 0;// check length condition
    int n1=str1.length(),n2=str2.length();
    for(int i=0;i<n1;i++){
        mp[str1[i]]++;// add the chars of str1 into the map
    }
    for(int i=0;i<n2;i++){
        mp[str2[i]]--;// remove the elements from using the str2 chars
    }
    for(auto &it:mp){
        if(it.second >0)return 0;// check if anything is left out int he map
    }
    return 1;
}
