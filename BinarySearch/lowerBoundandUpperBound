int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int l=0,h=n-1,ans=n,mid=0;
	while(l<=h){
		mid=l+(h-l)/2;
                if (arr[mid] >= x) {
                  ans = min(ans, mid);
				  h=mid-1;
                }
				else if(arr[mid]<x){
					l=mid+1;
				}
    }
		return ans;
}


int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	
	int l=0,h=n-1,ans=n,mid=0;
	while(l<=h){
		mid=l+(h-l)/2;
                if (arr[mid] > x) {
                  ans=mid;
				  h=mid-1;
                }
				else if(arr[mid]<=x){
					l=mid+1;
				}
    }
		return ans;

	
}
