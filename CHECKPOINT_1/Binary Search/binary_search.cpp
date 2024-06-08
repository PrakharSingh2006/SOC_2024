class Solution {
public:
    int search(vector<int>& arr, int key) {
       int size=arr.size();
  int start = 0;
  int end = size;
    if(size==1){
        if(arr[0]==key)return 0;
        else return -1;
    }
  int mid = start + (end-start)/2;

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
    mid = start + (end-start)/2;
  }
    return -1;
  }
    
};
