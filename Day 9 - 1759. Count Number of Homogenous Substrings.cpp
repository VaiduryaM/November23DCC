//Day 9 - 1759. Count Number of Homogenous Substrings


class Solution {
public:
    int countHomogenous(string s) {
        int ret = 0;
        int mod = 1e9 + 7;
        int i = 0;
        int longest = 0;
        for(int i=0; i<s.length();i++){
            
            if(i==0 || s[i] == s[i-1])
                longest++;
            else longest = 1;

            ret= (ret+longest)%mod;
        }

        return ret;
        
    }
};