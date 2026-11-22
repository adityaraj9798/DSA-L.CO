class Solution {
public:
    bool checkString(string s) {
        bool flag=true;
        for(int i=1;i<s.size();i++){
            if(s[i-1]=='b' && s[i]=='a'){
                flag=false;
                break;
            }
        }
        return flag;
    }
};