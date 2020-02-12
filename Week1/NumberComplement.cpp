class Solution {
public:
    int findComplement(int num) {
        numBits = floor(log2(num)) + 1;  
        return ((1 << numBits) - 1) ^ num; 
        
    }
};