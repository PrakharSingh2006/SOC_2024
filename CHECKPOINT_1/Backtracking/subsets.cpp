class Solution {
public:

void solve(vector<vector<int>>&ans,vector<int>out,int index,int n,vector<int>nums){
    if(n==index){
        ans.push_back(out);
        return;
    }
    solve(ans,out,index+1,n,nums);
    int x=nums[index];
    out.push_back(x);
    solve(ans,out,index+1,n,nums);
}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        vector<int >out;
        vector<vector<int>>ans;
        solve(ans,out,index,n,nums);
        return ans;
    }
};
