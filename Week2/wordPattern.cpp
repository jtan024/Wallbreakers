class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> mapA;
        unordered_map<string, char> mapB;
        vector<string> words;
        stringstream iss(str);
        string word;
        int i = 0;
        while(iss >> word){
            words.push_back(word);
        }
        if(words.size() != pattern.size()) return false;
        for(int i = 0; i < words.size(); i++){
            mapA[pattern[i]] = words[i];
            mapB[words[i]] = pattern[i];
    }
        for(int i = 0; i < words.size(); i++){
            if(mapA[pattern[i]] != words[i] || mapB[words[i]] != pattern[i]){
                return false;
        }
    }
        return true;
        
    }
};