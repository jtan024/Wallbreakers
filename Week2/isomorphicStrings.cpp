class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        map<char, char> first, second;
        if( n == 1)
            return true;

        for(int i = 0 ;i < n; i++){
            if(first.find(s[i]) == first.end())
                first[s[i]] = t[i];
            else{
                if(first[s[i]] != t[i])
                    return false;
            }
        }
        for(int i= 0; i < n; i++){
            if(second.find(t[i]) == second.end())
                second[t[i]] = s[i];
            else{
                if(second[t[i]] != s[i])
                    return false;
            }
        }
        return true;
        
    }
};