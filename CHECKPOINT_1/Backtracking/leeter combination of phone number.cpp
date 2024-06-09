class Solution {

    private:
    void solve(string digits,int index,vector<string>&ans,string out,string map[]){
        if(index>=digits.size()){
            ans.push_back(out);
            return;
        }
    int val=digits[index]-'0';
    string possi=map[val];

    for(int i=0;i<possi.size();i++){
        out.push_back(possi[i]);
         solve(digits,index+1,ans,out,map);
         out.pop_back();
            }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string out="";
        if(digits.size()==0)return ans;
        int index=0;
         string map[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,index,ans,out,map);
        return ans;
    }
};
