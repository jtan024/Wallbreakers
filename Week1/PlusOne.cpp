class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int lastDigit = digits.size() - 1;
        auto itPos = digits.begin() + 1;
        if(digits.at(lastDigit) != 9){
        digits.at(digits.size() - 1) += 1;
    }
        else{
            int i = 0;
            while(digits.at(lastDigit - i) == 9){
                digits.at(lastDigit - i) = 0;
                i++;   
            }
            if(lastDigit - i == 0){
                digits.insert(itPos, 1);
            }
            else{
                digits.at(lastDigit - i) += 1;
            }
            
        }
        return digits;
        
    }
};