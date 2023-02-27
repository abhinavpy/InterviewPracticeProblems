class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> umap;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++) {
            int numberToFind = target - nums[i];
            
            // If number to find is found on map return them
            if(umap.find(numberToFind) != umap.end()) {
                result.push_back(umap[numberToFind]);
                result.push_back(i);
                return result;
            }
            
            umap[nums[i]] = i;
        }
        return result;
    }
};