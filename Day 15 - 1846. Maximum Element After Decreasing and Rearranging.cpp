//Day 15 - 1846. Maximum Element After Decreasing and Rearranging


class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {        
        
        sort(arr.begin(), arr.end());
        if(arr[0] != 1) {
            arr[0] = 1;
        }
        int larg = arr[0];
        int i=1;
        while(i<arr.size()){
            if(abs(arr[i]-arr[i-1]) > 1) arr[i] = arr[i-1]+1;
            larg= max(larg, arr[i]);
            i++;
        }
        /*
        for(int i=1; i<arr.size();i++){
            if(abs(arr[i]-arr[i-1]) > 1) arr[i] = arr[i-1]+1;
            larg= max(larg, arr[i]); 
        }*/

        return larg;

    }
};