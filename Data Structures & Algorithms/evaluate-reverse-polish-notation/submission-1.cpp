class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operaciones;
        int res = 0;
        for(int i = 0; i < tokens.size();i++){
            string c = tokens[i];
            if(c == "+" || c == "-" || c ==  "*" || c == "/"){
                int a = operaciones.top(); operaciones.pop();
                int b = operaciones.top(); operaciones.pop();
                char op = c[0];
                switch(op){
                    case '+':
                    res = a + b;
                    operaciones.push(res);
                    break;

                    case '-':
                    res = b -a;
                    operaciones.push(res);
                    break;

                    case '*':
                    res = a * b;
                    operaciones.push(res);
                    break;

                    case '/':
                    res = b/a;
                    operaciones.push(res);
                    break;
                }
            }else{
                int aux = stoi(c);
                operaciones.push(aux);
            }
        }

        return operaciones.top();
    }
};
