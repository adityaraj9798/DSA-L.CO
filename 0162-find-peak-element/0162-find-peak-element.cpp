class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maximum=nums[0];
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maximum){
                maximum=nums[i];
                index=i;
            }
        }
        return index;
    }
};