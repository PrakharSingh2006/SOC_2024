class Solution {
private:
    bool check(vector<vector<char>>& board ,int i,int j){
        int temp[9] = {0};
        for(int ii = i; ii < i + 3; ii++){
            for(int jj = j; jj < j + 3; jj++){
                if(board[ii][jj] != '.'){
                    if(temp[board[ii][jj] - '1'] == 1) return false;
                    temp[board[ii][jj] - '1']++;
                }
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            int t1[9] = {0};
            int t2[9] = {0};
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    if(t1[board[i][j] - '1'] == 1) return false;
                    t1[board[i][j] - '1']++;
                }
                if(board[j][i] != '.'){
                    if(t2[board[j][i] - '1'] == 1) return false;
                    t2[board[j][i] - '1']++;
                }
            }
        }
        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                if(!check(board, i, j)) return false;
            }
        }
        return true;
    }
};
