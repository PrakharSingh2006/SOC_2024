class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int m = matrix.size();
         int n = matrix[0].size();
            int temp=-1;
            vector<int>v1;
            vector<int>v2;
            int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0 ){
                    cnt++;
                    v1.push_back(i);
                    v2.push_back(j);
                }
            }
        }
        while(cnt--){
            for(int i=0;i<m;i++)matrix[i][v2[cnt]]=0;
            for(int i=0;i<n;i++)matrix[v1[cnt]][i]=0;
        }
    }
};
