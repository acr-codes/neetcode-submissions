class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool filas[9][9] = {false};
        bool columnas[9][9] ={false};
        bool cajas[9][9] = {false};

        for(int i = 0; i<9 ; i++){
            for(int j = 0; j<9 ; j++){

                char aux = board[i][j];
                if( aux != '.'){
                    int num = aux  - '0';
                    num--;
                    int boxIndex = (i/3) * 3 + (j/3);

                    if(filas[i][num] || columnas[j][num] || cajas[boxIndex][num]){
                        return false;
                    }

                    filas[i][num] = true;
                    columnas[j][num] = true;
                    cajas[boxIndex][num] = true;
                }
            }
        }

        return true;
    }
        
        
};
