//Day 13 - 2785. Sort Vowels in a String

class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U';
    }
    string sortVowels(string s) {

        string vow;

        for(char c:s){
            if(isVowel(c)) vow+=c;
        }

        sort(vow.begin(), vow.end());

        int j=0;
        string ret;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                ret+=vow[j];
                j++;
            }else ret+=s[i];
        }

        return ret;
        /*
        //not optimized
        vector<char> vowels = {'A','E','I','O','U','a','e','i','o','u'};
        vector<int> places;
        vector<char> vow;
        for(int i=0; i<s.length();i++){
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()){
                places.push_back(i);
                vow.push_back(s[i]);
            }
        }
        
        sort(vow.begin(), vow.end());   
        
        
        int k=0;
        for(int i:places){
            s[i] = vow[k];
            k++;
        }
        return s;
        */
        
        
    }
};