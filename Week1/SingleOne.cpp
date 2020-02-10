class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> numMap;
        for(int i = 0; i < nums.size(); i++){
            if(numMap.find(nums[i]) != numMap.end()){
                numMap.erase(nums[i]);
            }
            else{
                numMap[nums[i]] = i;
            }
        }
         return numMap.begin()->first;
    }
};