class Solution {
    private:
        bool check(int a1[26],int a2[26]){
    for(int i=0;i<26;i++){
        if(a1[i]!=a2[i]){
            return 0;
        }
    }
    return 1;
}
    
public:

    bool checkInclusion(string s1, string s2) {
        int arr1[26]={0};
   int arr2[26]={0};
   int n=s1.size();
   for(int i=0;i<n;i++){
       char c=s1[i];
       arr1[c-'a']++;
   }
   int m=s2.size();
   int i=0;
   while(i<n&&i<m){
       char c=s2[i];
       arr2[c-'a']++;
       i++;
   }
   if(check(arr1,arr2)==1){
       return 1;

   }
// int i=n-1;
while(i<m){
    char c=s2[i];
       arr2[c-'a']++;
       char d=s2[i-n];
       arr2[d-'a']--;
       i++;
       if(check(arr1,arr2)){
       return 1;

   }
}
return 0;
    }
};
