class Solution {
public:
    string reverseStr(string s, int k) {
        string ans="";
        for(int i=0;i<s.size();i+=2*k){
            string part1=s.substr(i,k);
            string part2="";
            if(i+k<s.size()){
                part2=s.substr(i+k,k);
            }
            reverse(part1.begin(),part1.end());
            ans+=part1;
            ans+=part2;
        }
        return ans;
    }
};