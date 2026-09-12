class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto it : mp){
            vector<int>idx = it.second;
            if(idx.size()>=3){
                int diff=idx[1]-idx[0];
                bool special=true;
                for(int i=2;i<idx.size();i++){
                    if(idx[i]-idx[i-1] != diff){
                        special=false;
                        break;
                    }
                }
                if(special){
                    count++;
                }
            }
        }
        return count;
    }
};