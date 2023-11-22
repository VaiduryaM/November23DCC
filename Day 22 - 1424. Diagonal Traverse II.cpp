//Day 22 - 1424. Diagonal Traverse II


class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
        
        //this iteration will not give as expected so do bottom-up
        /*
        map<int, vector<int>> sum;
        for(int i=0;i<nums.size();i++){
            for(int j=0; j<nums[i].size();j++){
                sum[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> ret;
        int i=0;
        while(sum.find(i) != sum.end()){
            for(int j: sum[i]) ret.push_back(j);
            i++;
        } 

        return ret;  
        */    

        map<int, vector<int>> sum;
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0; j<nums[i].size();j++){
                sum[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> ret;
        int i=0;
        while(sum.find(i) != sum.end()){
            for(int j: sum[i]) ret.push_back(j);
            i++;
        } 

        return ret;  
        
    }
};