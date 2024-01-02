#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	
	int n=matrix.size(),m=matrix[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				for(int k=0;k<n;k++){
					if (matrix[k][j]!=0){
						matrix[k][j]=-1;
					}                               // find elements with zeroes and mark its whole column and row with -1 inorder to prevent confusion of 0 given and 0 modified by us
				}
				for(int l=0;l<m;l++){
					if (matrix[i][l]!=0){
						matrix[i][l]=-1;
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++){          // then change -1 to 0 after identifying all zeroes in the matrix
		for(int j=0;j<m;j++){
			if(matrix[i][j]==-1){
				matrix[i][j]=0;
			}
		}
	}
}
