class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> repetidos;
        for(int i: nums){
            if(repetidos.find(i) == repetidos.end()){
                repetidos.insert({i,0});
            }else{
                return true;
            }
        }

        return false;
    }
};