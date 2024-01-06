// intuition behind the problem is that we need to maximise the height and width so we need to start from 2 ends of the array and maximise the array if one side is having a better height we change the height of the other side

int maxArea(vector<int>& height) {
    // Write your code here.
    int n=height.size();
    int i=0,j=n-1;
    int ans=-1;
    while(i<j){
        int w=j-i;
        int h=min(height[i],height[j]);
        int ar=h*w;
        ans=max(ans,ar);
        if(height[i]<height[j])i++;// jth ele has a good height so we change the height of the i th element 
        else j--;// similarly if ith ele has a good height
      
    }
    return ans;
}
