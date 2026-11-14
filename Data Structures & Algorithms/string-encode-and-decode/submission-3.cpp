class Solution {
public:

    string encode(vector<string>& strs) {
        string sol= "";
        for(string s : strs){
            int longitud = s.size();
            sol += to_string(longitud) + "#" + s;
        }

        return sol;
    }

    vector<string> decode(string s) {
        vector<string> sol;
        int i= 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#') {j++;}
            int limite = stoi(s.substr(i,j-i));
            sol.push_back(s.substr(j+1,limite));
            i = j + limite +1;
        }

        return sol;
    }
};
