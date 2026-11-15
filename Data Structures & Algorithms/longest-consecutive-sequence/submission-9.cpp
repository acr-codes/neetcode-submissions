class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.empty()) return 0;

        set<int> sol(nums.begin(), nums.end());

        int maxCont = 1;
        int cont = 1;

        auto it = sol.begin();
        int ant = *it;
        it++;

        for (; it != sol.end(); ++it) {
            int act = *it;
            if (act == ant + 1) {
                cont++;
            } else {
                cont = 1; // Se reinicia siempre que haya un salto
            }
            maxCont = max(maxCont, cont);
            ant = act;
        }

        return maxCont;
    }
        
    };
        
