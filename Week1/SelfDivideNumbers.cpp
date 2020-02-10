class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> solution;
        for(int i = left; i <= right; i++){
           if(CheckNum(i)){
               solution.push_back(i);
           }
        }
        return solution;
    }
    
    bool CheckNum(int n){
        int num = n;
        while(num != 0){
            int first = num % 10;
            num = num / 10;
            if(first == 0 || n % first != 0){
                return false;
            }
            
        }
        return true;
    }
};