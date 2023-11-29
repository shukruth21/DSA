pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	pair<int,int>p;
	int f=-1,c=-1;
	int l=0,h=n-1,mid=0;
	while(l<=h){
		mid=l+(h-l)/2;
		if(a[mid]>=x){
			c=a[mid];
			h=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	l=0,h=n-1;
        while (l <= h) {
                mid = l + (h - l) / 2;
                if(a[mid]<=x){
			f=a[mid];
			l=mid+1;
		     }
			 else{
				 h=mid-1;
			 }
        }
		p.first=f;
		p.second=c;
		return p;
}
