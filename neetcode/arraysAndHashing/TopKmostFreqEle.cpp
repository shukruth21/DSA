class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;// store the frequencies of the elements in the map
        }
        int count=0,max,ans=0;
        vector<int>v;
        while(count<k){// to get the k most freq elements
            max=-1;
            for(auto &it :mp){// iterate the loop to find the max frequency
                if(it.second>max){
                    max=it.second;
                    ans=it.first;
                }
            }
          v.push_back(ans);
          mp.erase(ans);// remove the element to get the next most freq ele
          count++;
        }
        return v;
    }
};
