vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
       int n = arr.size();
    
    vector < int > temp(n);

    
    for (int i = 0; i < n; i++) {
       temp[(i - k + n)%n] = arr[i];//generealised formula for left rotation
    }
    
    return temp;
}
