class Solution {
public:
    bool isAnagram(string s, string t) {
       int n1=s.size();
       int n2=t.size();
       if(n1!=n2)return 0;
       else{
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<n1;i++){
            arr1[s[i]-'a']++;
            arr2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)if(arr1[i]!=arr2[i])return 0;
        return 1;
       }
    }
};
