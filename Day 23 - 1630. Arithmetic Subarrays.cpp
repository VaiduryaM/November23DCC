//Day 23 - 1630. Arithmetic Subarrays


class Solution {
public:
    bool check(vector<int> nums){        
      
        int diff;
        if(nums.size()>=2) diff = nums[1]-nums[0];
        int i=2;
        while(i<nums.size()){
            if(nums[i]-nums[i-1] != diff) return false;
            i++;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool> ret(l.size(), false);

        for(int i=0;i<l.size();i++){

            int le = l[i];
            int ri = r[i];

            vector<int> subNums(nums.begin()+le, nums.begin()+ri+1);
            sort(subNums.begin(), subNums.end());

            ret[i] = check(subNums);

        }

        return ret;
    }
};