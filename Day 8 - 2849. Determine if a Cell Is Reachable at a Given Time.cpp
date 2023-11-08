//Day 8 - 2849. Determine if a Cell Is Reachable at a Given Time


class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        
        //because one move must be made to any of the adjacent cell
        if(sx==fx && sy==fy && t==1) return false;
        int x = abs(sx-fx);
        int y = abs(sy-fy);

        if(x <= t && y <= t) return true;
        else return false;
        
    }
};