class Solution {
public:
    int binaryGap(int N) {
        int dist = 0;
        int maxDist = 0;
        bool foundOne = false;
        int num = N;
        while(num){
            int x = num & 1;
            if(x == 1 && foundOne == false){
                foundOne = true;
            }
            else if(x == 0 && foundOne == true){
                dist++;
            }
            else if(x == 1 && foundOne == true){
                dist += 1;
                if(dist > maxDist){
                    maxDist = dist;
                }
                dist = 0;
            }
            num >>= 1; 
        }
        return maxDist;
    }
};