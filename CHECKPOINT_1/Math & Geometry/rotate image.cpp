class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>m(matrix);
        int n=matrix.size();
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++)matrix[i][n-j-1]=m[j][i];
        }
    }
};
