class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int num = 0;
        unordered_map <char, int> jewel_map;
        for(int i = 0; i < J.size(); i++){
            jewel_map[J[i]] = i;
        }
        for(int j = 0; j < S.size(); j++){
            if(jewel_map.find(S[j]) != jewel_map.end()){
                num++;
            }
        }
        return num;
    }
};