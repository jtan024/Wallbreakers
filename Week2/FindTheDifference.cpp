class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_multiset<char> charMap;
        for(auto w : s){
            charMap.insert(w);
        }
        for(auto w : t){
            auto ww = charMap.find(w);
            if(ww == charMap.end()) {
                return w;
            }
                
            charMap.erase(ww);
        }
        return '0';
    }
};