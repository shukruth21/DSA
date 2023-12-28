#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    string str;
    int i = 0;
    while (i < message.length()) {
        int count = 1;
        for (int j = i + 1; j < message.length(); j++) {
            if (message[i] == message[j]) {// check with the ith character and increase counts
                count++;
            } else {
                break;
            }
        }
        str += message[i] + to_string(count);
        i += count; // Move i by the count to the next unique character
    }
    return str;
}
