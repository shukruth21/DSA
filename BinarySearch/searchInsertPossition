class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,ans=nums.size(),mid=0;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]>=target){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
