class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans=k;
        while(true){
            int i=0;;
            while(i<nums.size() && nums[i]!=ans){
                i++;
            }
            if(i==nums.size()){
                return ans;
            }
            
        ans+=k;
        }
    }
};