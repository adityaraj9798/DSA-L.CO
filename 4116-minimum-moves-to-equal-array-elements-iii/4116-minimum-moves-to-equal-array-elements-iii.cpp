class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int maxnum=INT_MIN;
        for(int num:nums){
            sum+=num;
            maxnum=max(num,maxnum);
        }
        return nums.size()* maxnum-sum;
    }
};