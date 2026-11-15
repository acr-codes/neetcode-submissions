class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();

        vector<int> sol(size,1);
        int total = 1;
        int ceros = 0;
        for(int j = 0;j < size; j++){
            if(nums[j] != 0){
            total *= nums[j] ;
            }else{
            ceros++;
            }
        }
        for(int i=0; i<size;i++){
            //int pos = (i+1) % size;
            if (ceros > 1){
                sol[i] = 0;
            }else if (ceros == 1){
                if(nums[i] == 0){
                    sol[i] = total;
                }else{
                    sol[i] = 0;
                }
            }else{
                sol[i] = total / nums[i] ;
            }
        }
        return sol;
    }
};
