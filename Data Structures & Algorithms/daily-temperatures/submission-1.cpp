class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        stack<int> indices;
        vector <int> sol(n,0);
        
        for(int i = 0; i < n ;i++){
           int aux = temperatures[i];
           while(!indices.empty() && aux > temperatures[indices.top()]){
            sol[indices.top()] = i - indices.top();
            indices.pop();
           }
            indices.push(i);
        }

        return sol;
    }
};
