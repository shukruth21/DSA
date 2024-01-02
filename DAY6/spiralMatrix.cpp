void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int n=nRows,m=nCols;
    int top=0,left=0,right=m-1,bottom=n-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<input[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<input[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<input[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<input[i][left]<<" ";
            }
            left++;
        }
        
    }
}
