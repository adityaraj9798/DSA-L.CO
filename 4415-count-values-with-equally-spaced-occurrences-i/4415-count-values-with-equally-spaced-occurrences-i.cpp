class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int count=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto it : mp){
            vector<int>i = it.second;
            if(i.size()==3){
                int i1=i[0];
                int i2=i[1];
                int i3=i[2];
                if(i2-i1==i3-i2){
                    count++;
                }
            }
        }
        return count;
    }
};