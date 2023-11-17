//Day 17 - 1877. Minimize Maximum Pair Sum in Array

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        //vector<int> minSum;
        int ret = INT_MIN;
        sort(nums.begin(), nums.end());

        int n = nums.size()/2;
        int l =0;
        int r = nums.size()-1;
        /*
        while(l<r){
            minSum.push_back(nums[l]+nums[r]);
            l++;
            r--;
        }

        sort(minSum.begin(), minSum.end());

        return minSum[minSum.size()-1];
        */

        //optimised
        while(l<r){
            ret = max(ret, nums[l]+nums[r]);
            l++;
            r--;
        }
        return ret;
    }
};