class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int area=0;
        int ans=0;

        while(l<r){
            area=min(height[l],height[r])*(r-l);
            ans=max(area,ans);
            if(height[r]<height[l])r--;
            else if(height[r]>height[l])l++;
            else {
                r--;
                l++;
            }
        }
        return ans;
    }
};
