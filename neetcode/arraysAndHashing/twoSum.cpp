class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>mp;
         for(int i=0;i<nums.size();i++){
            int a=target-nums[i];// one part is our current ele and the second part of target sum is a
            auto it=mp.find(a);// find a
            if(it!=mp.end()){// if found
                ans.push_back(i);// add the indexes to the ans
                ans.push_back(it->second);
                return ans;
            }
            mp.insert({nums[i],i});// if not found then insert the ele to the map 

        }
        return ans;
    }
};
