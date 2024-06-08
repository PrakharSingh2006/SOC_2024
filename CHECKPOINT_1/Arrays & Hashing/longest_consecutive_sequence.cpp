class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int cnt=1;
        if(nums.size()<2)return nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1])cnt++;
            else if(nums[i]==nums[i+1])continue;
           
            else{
                ans=max(cnt,ans);
                cnt=1;
            }
        }
        ans=max(cnt,ans);
        return ans;
    }
};
