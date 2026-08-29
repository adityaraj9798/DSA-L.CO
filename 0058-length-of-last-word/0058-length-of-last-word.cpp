class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        for(i=s.size()-1;i>=0;i--){
            if(s[i]!= ' '){
                break;
            }
        }
        int count=0;
        for(;i>=0;i--){
            if(s[i]== ' '){
                break;
            }
            count++;
        }
        return count;
    }
};