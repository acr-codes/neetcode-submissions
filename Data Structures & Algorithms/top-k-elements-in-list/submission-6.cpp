class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int, int> repetidos;
      set<pair<int,int>>sol;
      int minRep = 1;
      for(int i: nums){
        auto it = repetidos.find(i);
        if(it == repetidos.end()){
            repetidos.insert({i,1});
            if(sol.size() < k){
                sol.insert({1,i});
            }

        }else{

            int aux2 = repetidos[i];
            int aux = ++repetidos[i];
            
            if(aux > minRep){
                auto parAux = sol.find({aux2,i});
                if(!sol.empty() & parAux == sol.end()){
                    if(sol.size() == k){sol.erase(sol.begin());}
                    sol.insert({aux,i});
                }else if( parAux != sol.end()){
                    sol.erase({aux2,i});
                    sol.insert({aux,i});
                }
                minRep = sol.begin()->first;
            }
        }
      }
      vector<int> final;
      for(const auto & par : sol){
        final.push_back(par.second);
      }

      return final;
    }
};
