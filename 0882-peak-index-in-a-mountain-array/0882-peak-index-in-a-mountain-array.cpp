class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maximum = arr[0];
        int index=0;
        for(int i = 1; i <arr.size(); i++) {
            if(arr[i] > maximum) {
                maximum = arr[i];
                index=i;
            }
        }
        return index;
    }
    
};