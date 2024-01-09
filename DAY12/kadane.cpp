long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long s=0,maxi=INT_MIN;
  int start,ansS,ansE;
    for(int i=0;i<n;i++){
        if(s==0)start=i;//s=0 means the previous sub array had negative sum so not max hence we start new a sub array
      
        s+=arr[i];
        if(s>max){
          max=s;
          ansS=start;//where we started the new sub array
          ansE=i;//ending at the cur index
        }
      
        if(s<0)s=0;
    }
    if(maxi<0)maxi=0;
    return maxi;
}
