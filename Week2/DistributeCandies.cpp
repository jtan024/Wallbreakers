class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int solution = 0;
        int numDuplicates = 0;
        int sample = candies.size() / 2;
        unordered_map <int, int> numMap;
        for(int i = 0; i < candies.size(); i++){
            if(numMap.find(candies[i]) == numMap.end()){
                numMap[candies[i]] = i;
                solution++;
            }
            else{
                numDuplicates++;
            }
            
        }
        for(int j = 0; j < sample - numDuplicates; j++){
            solution--;
        }
        return solution;
    }
};