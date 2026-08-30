class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        string sortedS1= s1;
        sort(sortedS1.begin(),sortedS1.end());
        for(int i=0;i<s2.size();i++){
            string temp=s2.substr(i,k);
            sort(temp.begin(),temp.end());
            if(temp==sortedS1){
                return true;
            }
        }
        return false;
    }
};