//Day 10 - 1743. Restore the Array From Adjacent Pairs


class Solution {
public:
    unordered_map<int, vector<int>> graph;
    void dfs(int node, int prev, vector<int>& ret){
        ret.push_back(node);

        for(int n: graph[node]){
            if(n!=prev){
                dfs(n, node, ret);
            }
        }

    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {

        for(auto& edge:adjacentPairs){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        int root = 0;
        for(auto& pair: graph){
            if(pair.second.size() == 1){
                root = pair.first;
                break;
            }
        }
        
        vector<int> ret;
        dfs(root,INT_MAX, ret);
        return ret;
        
        /*
        //you are not checking for adjacency
        vector<int> nums;
        unordered_set<int> n;
        for(int i=0; i<adjacentPairs.size();i++){
            for(int j=0; j<adjacentPairs[i].size();j++){
                n.insert(adjacentPairs[i][j]);
            }
        }
        for(auto i:n) nums.push_back(i);
        return nums;
        */
    }
};