#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            char ch=k+64;
            cout<<ch;
        }
        for(int h=i-1;h>=1;h--){
            char ch=h+64;
            cout<<ch;
        }
        cout<<endl;
    }

}