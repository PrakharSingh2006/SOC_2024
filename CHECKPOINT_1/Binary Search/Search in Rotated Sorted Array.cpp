
class Solution {
public:
int binarysearch(vector<int>& arr, int key, int size){
  int start = 0;
  int end = size;

  int mid =(end+start)/2;

  while(start<=end){
    if (arr[mid]==key)
    {
      return mid;
    }
    else if(arr[mid]>key){
      end=mid-1;
    }
    else{
      start=mid+1;
    }
    mid =(end+start)/2;
  }
    return -1;
  }
    int search(vector<int>& nums, int target) {
       int n=nums.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        int ans=mid;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            if(nums[s]<=nums[mid]){
                if(nums[s] <= target && target < nums[mid]){
                     e=mid-1;
                }
                // ans=mid;
                else{
                    s=mid+1;
                }
               
            }
            else{
                if (nums[mid] < target && target <= nums[e]) {
                    s = mid + 1;
                } else {
                    e= mid - 1;
                }
            }
            mid=s+(e-s)/2;
        }
        return -1;
       
    }
};
