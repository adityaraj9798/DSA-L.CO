class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int count=0;
        int breakindex=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                count++;
                breakindex=i;
            }
        }
        if(count==0){
            return 0;
        }
        if(count>1){
            return -1;
        }
        if(nums[nums.size()-1]>nums[0]){
            return -1;
        }
        return nums.size()-breakindex-1;
    }
};