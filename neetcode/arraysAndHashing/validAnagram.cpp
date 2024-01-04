class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
        if(s.length()!=t.length()){// length of 2 strings must be equal
            return false;
        }
        for(int i=0;i<s.length();i++){// add the string s into the hashmap
            mp[s[i]]++;
        }
        for(int j=0;j<t.length();j++){// subtract the occurences of chars with t's chars
            mp[t[j]]--;
        }
        for(auto &it: mp){
            if(it.second >0){// is at all any char remains return false
                return false;
            }
        }
        return true;
    }
};
