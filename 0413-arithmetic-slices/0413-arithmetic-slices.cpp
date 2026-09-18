class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans=0;
        int current=0;
        for(int i=2;i<nums.size();i++){
            int diff1=nums[i]-nums[i-1];
            int diff2=nums[i-1]-nums[i-2];
            if(diff1==diff2){
                current=current +1;
                ans=ans+current;
            }
            else{
                current=0;
            }
        }
        return ans;
    }
};