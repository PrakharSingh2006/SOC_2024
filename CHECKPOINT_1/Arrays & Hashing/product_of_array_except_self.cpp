class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int p=1;
        int f=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)f++;
            else p*=nums[i];
        }
        vector<int>v;
         for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(f==1)v.push_back(p);
                else v.push_back(0);
            }
            else if(f>0)v.push_back(0);
           else  v.push_back(p/nums[i]);
         }
         return v;
    }
};
