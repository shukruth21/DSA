#include <bits/stdc++.h>
bool isSubSequence(string str1, string str2) {
  // Write your code here.
  int i = 0, j = 0, n = str1.length(), m = str2.length();
    while(i<n && j<m){//comparing the 2 strings from starting positions
      if (str1[i] == str2[j]) {//if equal move to next char on both strings
        
        i++;
        j++;
      } 
      else j++;//else move front in the main string
      
    }
    if(i==n)return true;
    return false;
}
