class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<int>>v;
         vector<vector<string>>ans;
         vector<int >temp;
         vector<string>t;
         int n =strs.size();
         int arr[10000]={0};
         for(int i=0;i<strs.size();i++){
            
            for(int j=0;j<strs[i].size();j++){
                temp.push_back(strs[i][j]-'a');
            }
            sort(temp.begin(),temp.end());
            v.push_back(temp);
            temp.clear();

         }
         for(int i=0;i<strs.size();i++){
            // t.push_back(strs[i]);
            for(int j=i;j<n;j++){
                if(v[i]==v[j]&&arr[j]!=1){
                    t.push_back(strs[j]);
                    arr[j]++;
                }
            }
                // arr[i]++;
            if(t.size()!=0)ans.push_back(t);
            
            t.clear();

         }
         return ans;
    }
};
