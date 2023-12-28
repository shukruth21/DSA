#include <iostream>
using namespace std;

string reverseStringWordWise(string input) {
  // Write your code here
int n=input.length();
string ans="";//final answer
string temp="";// to store every word before space
for(int i=0;i<n;i++){
    if(input[i]==' '){  // if you encounter a space
        if(ans==""){  // if it is the first space
            ans=temp;
            temp="";// add temp to the answer no reverse is needed
        }
        else{
        ans= temp+' '+ans;//if its not the first space then add ans to temp so that the ans is reversed word wise
        temp="";
        }
    }
    else{
        temp+=input[i];// if no space is not encountered then just add the char to the temp as it 
    }
}
ans=temp+' '+ans;// this to add the last word because it wont have any empty space after it

return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
