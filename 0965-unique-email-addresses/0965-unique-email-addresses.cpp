class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;
        for(string email : emails){
            string normalized="";
            bool ignore=false;
            bool inDomain=false;
            for(char ch:email){
                if(ch=='@'){
                    inDomain=true;
                    normalized+=ch;
                }
                else if(inDomain){
                    normalized+=ch;
                }
                else if(ch=='+'){
                    ignore=true;;
                }
                else if(ch=='.'){
                    continue;
                }
                else if(!ignore){
                    normalized+=ch;
                }
            }
            st.insert(normalized);
        }
        return st.size();
    }
};