#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
      int openBr = 0;   // To store count of '('
    int closeBr = 0;  // To store count of ')'
    int count = 0;    // Count of minimum parentheses required
    for (int i = 0; i < pattern.length(); i++) {
        if (pattern[i] == '(') {
            openBr += 1;
        } else {
            closeBr += 1;
        }
        // If ')' is greater than '('
        if (closeBr > openBr) {
            count += (closeBr - openBr);
            openBr = 0;
            closeBr = 0;
        }
    }
    count += (openBr - closeBr);
    return count;
}
