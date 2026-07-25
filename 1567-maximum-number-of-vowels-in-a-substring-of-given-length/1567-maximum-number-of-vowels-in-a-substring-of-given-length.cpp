class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        int maxcount=count;
        for(int i=k;i<s.size();i++){
            if (isVowel(s[i - k])) {
                count--;
            }
            if (isVowel(s[i])) {
                count++;
            }
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};