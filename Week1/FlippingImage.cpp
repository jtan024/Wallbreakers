class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int xLength = A.size();
        int ylength = A[0].size();
        for(int i = 0; i < xLength; i++){
            int start = 0;
            int end = A[0].size() - 1;
            while(start < end){
                if(A[i][start] != A[i][end]){
                    int temp = A[i][start];
                    A[i][start] = A[i][end];
                    A[i][end] = temp;
                }
                start++;
                end--;
            }
        }
        
        for(int i = 0; i < xLength; i++){
            for(int j = 0; j < ylength; j++){
                if(A[i][j] == 0){
                    A[i][j] = 1;
                }
                else{
                    A[i][j] = 0;
                }
            }
        }
        
    return A;
    }
};