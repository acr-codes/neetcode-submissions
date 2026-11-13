class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complementario = target - nums[i];
            
           
            if (indices.find(complementario) != indices.end()) {
                return {indices[complementario], i};
            }
            
            
            indices[nums[i]] = i;
        }
        
        return {}; 
    }
};