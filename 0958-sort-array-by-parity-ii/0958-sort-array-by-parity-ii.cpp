class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=1;
        while(left<n && right<n){
            if(nums[left]%2==0){
                left+=2;
            }
            else if(nums[right]%2!=0){
                right+=2;
            }
            else{
                swap(nums[right],nums[left]);
                left+=2;
                right+=2;
            }
        }
        return nums;
    }
};