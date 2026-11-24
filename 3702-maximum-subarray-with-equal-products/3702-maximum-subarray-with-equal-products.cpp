class Solution {
public:
    int maxLength(vector<int>& nums) {
        int good=2;
        int left=0;
        int product=1; 
        for(int right=0;right<ssize(nums);++right){
            int x=nums[right];
            while(gcd(product,x)>1)
            product/=nums[left++];
            product*=x;
            good=max(good,right-left+1);
        }
        return good;
    }
};