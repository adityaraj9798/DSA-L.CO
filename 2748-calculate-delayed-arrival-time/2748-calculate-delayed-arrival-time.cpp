class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int result=arrivalTime+delayedTime;
        return result%24;
    }
};