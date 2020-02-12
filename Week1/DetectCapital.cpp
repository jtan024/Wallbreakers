class Solution {
public:
    bool detectCapitalUse(string word) {
        int capCount = 0;
        int lowCount = 0;
        for(int i = 0; i < word.size(); i++){
            if(isupper(word[i])) {
                capCount += 1;
            }
            else if(islower(word[i])){
                lowCount++;
            }
        
        
        }
  
        if(capCount == word.size() || (lowCount == word.size() || (lowCount == word.size() - 1 && isupper(word[0])))){
            
            
            return true;
        }
 
        return false;
    }
};