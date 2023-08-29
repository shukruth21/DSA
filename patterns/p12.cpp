#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        int l=((n-i)*2);
        for(int k=1;k<=l;k++){
            cout<<" ";
        }
        for(int h=i;h>=1;h--){
            cout<<h;
        }
        cout<<endl;
    }

}