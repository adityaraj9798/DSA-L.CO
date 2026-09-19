class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0,left=0,zeros=0,right=0,n=nums.size();
        for(int right=0;right<n;right++){
            if(nums[right]==0){
                zeros++;
            }
            while(zeros>1){
                if(nums[left]==0){
                    zeros--;
                }
                left++;
            }
            ans =max(ans,right-left);
        }
        return ans;
    }
};
