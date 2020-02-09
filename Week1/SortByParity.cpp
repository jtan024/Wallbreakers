class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector <int> even;
        vector <int> odd;
        for (int i = 0; i < A.size(); i++){
            if(A.at(i) % 2 == 0){
                even.push_back(A.at(i));
            }
            else{
                odd.push_back(A.at(i));
            }
            
            
        }
        for(int i = 0; i < odd.size(); i++){
            even.push_back(odd.at(i));
        }
        
        return even;
    }
};