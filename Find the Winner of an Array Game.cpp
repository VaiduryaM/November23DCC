//1535. Find the Winner of an Array Game

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        if (k >= arr.size()) {
            return *std::max_element(arr.begin(), arr.end());
        }

        if(k==1) return max(arr[0], arr[1]);

        int winnerNow = arr[0];
        int consecutiveWins = 0;

        for(int i=1; i<arr.size(); i++){

            if(arr[i] > winnerNow){
                winnerNow = arr[i];
                consecutiveWins = 1;
            }else{
                consecutiveWins++;
            }

            if(consecutiveWins == k) return winnerNow;
        }

        return winnerNow;

        /*
        //you are running extra iterations so time is exceeding
        
        int won;
        bool winner = false;
        if (k >= arr.size()) {
            return *std::max_element(arr.begin(), arr.end());
        }
        if(k==1) return max(arr[0], arr[1]);

        map<int,int> match;
        while(winner== false){
            if(arr[0] > arr[1]){
                int i = arr[1];
                arr.erase(arr.begin()+1);
                arr.push_back(i);
            }
            else{
                int temp = arr[0];
                arr[0] = arr[1];
                arr[1] = temp;
            }

        int w = match[arr[0]]++;
        if(w == k) { 
            won = arr[0]; 
            winner = true;
        }
        }

        return won;
        */
        
    }
};