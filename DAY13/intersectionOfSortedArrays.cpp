vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);// append the elements that are equal
           i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){// move forward in the array with the smaller element currently
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
