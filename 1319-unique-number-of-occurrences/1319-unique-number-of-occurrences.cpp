class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        unordered_set<int>st;
        for(auto it:mp){
            int frequency=it.second;
            if(st.count(frequency)){
                return false;
            }
            st.insert(frequency);
        }
        return true;
    }
};