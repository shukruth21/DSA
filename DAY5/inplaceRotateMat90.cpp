#include <bits/stdc++.h> 
void inplaceRotate(vector<vector<int>> &inputArray)
{
    // Write your code here.
    int n=inputArray.size(),m=inputArray[0].size();
    for(int i=0;i<n;i++){
        reverse(inputArray[i].begin(),inputArray[i].end());// reverse each row
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
           swap(inputArray[i][j],inputArray[j][i]);// swap elements like transpose
        }
    }
    
}
