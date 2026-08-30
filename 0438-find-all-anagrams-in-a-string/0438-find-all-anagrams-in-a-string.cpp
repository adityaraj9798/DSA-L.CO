class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int m = p.size();
        int freqP[26] = {};
        for (char ch : p) {
            freqP[ch - 'a']++;
        }
        for (int i = 0; i + m <= s.size(); i++) {
            int freq[26] = {};
            for (int j = i; j < i + m; j++) {
                freq[s[j] - 'a']++;
            }
            bool same = true;
            for (int j = 0; j < 26; j++) {
                if (freq[j] != freqP[j]) {
                    same = false;
                    break;
                }
            }
            if (same) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};