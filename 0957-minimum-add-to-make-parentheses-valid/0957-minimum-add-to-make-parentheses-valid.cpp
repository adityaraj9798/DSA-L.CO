class Solution {
public:
    int minAddToMakeValid(string s) {
        int depth=0;
        int score=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
               depth++;
            }
            else{
                if(depth>0){
                    depth--;
                }
                else{
                    score++;
                }
            }
        }
        return score+depth; 
    }
};