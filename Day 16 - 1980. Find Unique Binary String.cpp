//Day 16 - 1980. Find Unique Binary String


class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {

        unordered_set<int> integers;
        for(string n:nums){
            integers.insert(stoi(n,0,2));
        }

        for(int i=0; i<=integers.size();i++){
            if(integers.find(i) == integers.end()){
                string mis = bitset<16>(i).to_string();
                return mis.substr(16-integers.size());
            }
        }

        return "";
        
    }
};