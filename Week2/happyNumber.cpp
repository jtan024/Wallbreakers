class Solution {
public:
    bool isHappy(int n) {
        unordered_map <int,bool> map;
        while(n!=1){
            if(map.count(n))return false;
            map[n] = true;
            int n1 = 0;
            while (n) {
                int t= n % 10;
                n1 += pow(t,2);
                n /= 10;
            }
            n = n1;
        }
        return true;
    }
};