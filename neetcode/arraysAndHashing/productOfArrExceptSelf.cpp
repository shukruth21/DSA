class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left_Product(n);// to compute the product of elements to the left of the ith element
        vector<int> right_Product(n);// to compute the product of elements to the right of the ith element
        left_Product[0] = 1;// left product is 1 of 0th ele becz no ele
        for(int i=1; i<n; i++){
            left_Product[i] = left_Product[i-1] * nums[i-1];//left product curr ele is the left product of the prev ele and prev ele
        }
        right_Product[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            right_Product[i] = right_Product[i+1] * nums[i+1];// similarly for right product
        }
        for(int i=0; i<n; i++){
            ans[i] = left_Product[i] * right_Product[i];//product of array except slef
        }
        return ans;
    }
};
