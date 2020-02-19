class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
    stringstream in(A);
    stringstream on(B);
    string word;
    unordered_map<string,int> stringMap;
    
    while(in >> word) stringMap[word]+= 1;
    while(on >> word) stringMap[word]+= 1;
    vector<string> solution;
    for(auto i:stringMap){
        cout << i.first << " " << i.second << endl;
        if(i.second == 1)
            solution.push_back(i.first);
    }
    return solution;
    }
};