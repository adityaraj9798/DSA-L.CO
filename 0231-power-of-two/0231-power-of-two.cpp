class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long pow=1;
        while(pow<=n){
            if(n==pow){
                return true;
            }
            pow=pow*2;
        }
        return false;
    }
};