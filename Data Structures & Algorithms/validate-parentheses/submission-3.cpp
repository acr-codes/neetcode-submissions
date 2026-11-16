class Solution {
public:
    bool isValid(string s) {
        stack<char> pila;
        queue<char> cola;

        pair<char,char> parentesis = {'(', ')'};
        pair<char,char>  llaves = {'{', '}'};
        pair<char,char> corchetes = {'[', ']'};

        for(char a : s){
            if( a == '(' || a == '[' || a == '{'){
                pila.push(a);
            } else{
                char abierto = pila.top();
                pair<char,char> aux =  {abierto, a};

                if(!pila.empty() && (aux == parentesis || aux == llaves || aux == corchetes ) ){
                    pila.pop();
                }else{
                    return false;
                }
                
            }
        }

        if(!pila.empty()){return false;}
        return true;
    }
};
