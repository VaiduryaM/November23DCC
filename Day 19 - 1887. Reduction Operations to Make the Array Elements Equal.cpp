//Day 19 - 1887. Reduction Operations to Make the Array Elements Equal


class Solution {
public:
    int reductionOperations(vector<int>& nums) {

        int steps = 0;
        int inc = 0;
        sort(nums.begin(), nums.end());

        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]) inc++;

            steps += inc;
        }

        return steps;
        
    }
};