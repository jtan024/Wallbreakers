class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector <int> solution;
        for(int i = 0; i < nums.size(); i++){
            int searchNum = target - nums[i];
            if(umap.find(searchNum) != umap.end()){
                solution.push_back(umap[searchNum]);
                solution.push_back(i);
                return solution;
            }
        umap[nums[i]] = i;
         
        }
        return solution;
        
    }
};