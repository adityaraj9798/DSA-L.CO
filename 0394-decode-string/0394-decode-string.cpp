class Solution {
public:
    string decodeString(string s) {
        while (s.find(']') != string::npos){
            int end=s.find(']');
            int start=s.rfind('[',end);
            int i=start-1;
            while(i>=0 && isdigit(s[i])){
                i--;
            }
            int k=stoi(s.substr(i+1,start-i-1));
            string part=s.substr(start+1,end-start-1);
            string repeated="";
            for(int j=0;j<k;j++){
                repeated+=part;
            }
            s.replace(i+1,end-i,repeated);
        }
        return s;
    }
};