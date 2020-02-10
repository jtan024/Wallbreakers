class Solution {
public:
    
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        while(start < end){
            if(isVowel(s[start]) && isVowel(s[end])){
                swap(s[start++], s[end--]);
            }
            if(!isVowel(s[start])){
                start++;
            }
            if(!isVowel(s[end])){
                end--;
            }
    }
        return s;
}
    
 
               
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};