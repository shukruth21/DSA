class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int it : nums){
            if(mp[it]>=1)// checking if the element has appeared more than once
              return true;
         mp[it]++;//increasing the count of appearances
        }
        return false;
    }
};
