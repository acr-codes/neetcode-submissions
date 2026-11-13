class Solution {

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,int> anagramas;
      vector<vector<string>> solucion;
      int cont = 0;
      for(string s : strs){
        string aux = s;
        sort(aux.begin(),aux.end());
        auto it = anagramas.find(aux);
        if(it == anagramas.end()){
            anagramas.insert({aux,cont});
            solucion.push_back({s});
            cont++;
        }else{
            int indice = anagramas[aux];
            solucion[indice].push_back(s);
        }
      }
      return solucion;
    }
};
