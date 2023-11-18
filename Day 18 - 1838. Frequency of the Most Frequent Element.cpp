//1838. Frequency of the Most Frequent Element


class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int ret =0;
        long curr = 0;
        for(int l=0, r=0; r<nums.size();r++){
            long target = nums[r];
            curr += target;

            while( (r-l+1)*target - curr > k){
                curr -= nums[l];
                l++;
            }

            ret = max(ret, r-l+1);
        }
        return ret;
        
    }
};