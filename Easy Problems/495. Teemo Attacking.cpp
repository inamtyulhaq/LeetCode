// https://leetcode.com/problems/teemo-attacking/

// there are three cases
// if the sum of duration seconds + the current time, is at max equal
// to the next time he will attack with poison, increment the seconds variable with duration
// for last index, also increment the seconds variable with duration
// else if the first condition doesn't satisfy, increment the seconds variable with the 
// difference of (next time he will attack with poison) and (current time when he is attacking with poison)

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int seconds = 0;
        for(int i = 0; i < timeSeries.size(); i++)
        {
            if(i == timeSeries.size()-1)
            {
                seconds += duration;
            }
            else if(timeSeries[i+1] >= timeSeries[i] + duration)
            {
                seconds += duration;
            }
            else
            {
                seconds += (timeSeries[i+1] - timeSeries[i]);
            }
        }
        return seconds;
    }
};
