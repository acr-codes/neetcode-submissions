class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sol(nums.begin(),nums.end());

        if(sol.empty()){return 0;}
        int maxCont = 1;
        for (int num : sol){
            if(sol.find(num -1) == sol.end()){
                int cont = 1;
                while (sol.find(num + cont) != sol.end()){cont++;}
                maxCont = max(cont,maxCont);
            }
        }

        return maxCont;
    }
       
        
    };
        
