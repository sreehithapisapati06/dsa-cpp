class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int time=arrivalTime+delayedTime;
        if(1<=arrivalTime && arrivalTime<24 && 1<=delayedTime && delayedTime<=24){
            if(time<=23){
                return time;
            }
        
        }
        return time%=24;
    }
        
        
};
