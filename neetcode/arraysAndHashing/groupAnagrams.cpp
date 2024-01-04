class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>> mp;
        int n=strs.size();
        string temp;// to store current string

        for(int i=0;i<n;i++){
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());// sort the string to map with elements
            mp[strs[i]].push_back(temp);// ex aet -->> ate,tea strs part is sorted used for mapping temp is the answer that matches
        }
        vector<vector<string>> ans;
        for(auto &it:mp){
           ans.push_back(it.second);// then push back the answers
        }
        return ans;   
    }
};
