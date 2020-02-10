class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int xSize = A.size();
        int ySize = A[0].size();
        vector<vector<int>> solution;
        for (int i = 0; i < ySize; i++){
            vector<int> sample;
            solution.push_back(sample);
        }
        
        for (int i = 0; i < xSize; i++){
            for (int j = 0; j < ySize; j++){
                solution[i].push_back(A[j][i]);
            }
        }
        return solution;
    }
};