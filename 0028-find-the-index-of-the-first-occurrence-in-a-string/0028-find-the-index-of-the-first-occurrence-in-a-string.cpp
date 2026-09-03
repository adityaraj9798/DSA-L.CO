class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        for(int i=0;i+m<=n;i++){
            bool match=true;
            if(haystack[i]==needle[0]){
                for(int j=0;j<m;j++){
                    if(haystack[i+j]!=needle[j]){
                        match=false;
                        break;
                    }
                }
            }
            else{
                match=false;
            }
            if(match){
                return i;
            }
        }
        return -1;
    }
};