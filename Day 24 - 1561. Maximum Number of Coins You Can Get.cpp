//Day 24 - 1561. Maximum Number of Coins You Can Get


class Solution {
public:
    int maxCoins(vector<int>& piles) {
     sort(piles.begin(), piles.end());
     int ret = 0;

     for(int i=piles.size()/3; i <piles.size(); i+=2){
         ret += piles[i];
     }   

     return ret;
    }
};