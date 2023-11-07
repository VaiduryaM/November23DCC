//Day 7 - 1921. Eliminate Maximum Number of Monsters


class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {

        int monsters = 0;

        //first get speed
        vector<float> arrival;
        for(int i=0; i<dist.size();i++)
        arrival.push_back((float)dist[i]/speed[i]);

        //second sort arrivals
        sort(arrival.begin(), arrival.end());

        //kill the monsters
        for(int i=0; i<arrival.size();i++){
            if(arrival[i] <= i) break;

            monsters++;
        }


        return monsters;

        
    }
};