// https://leetcode.com/problems/count-pairs-that-form-a-complete-day-i/description/

// iterate through the array
// for each element, iterate through the rest of the array
// if the sum of the two elements is divisible by 24, increment the count
// return the count

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count = 0;
        for(int i  = 0; i < hours.size(); i++)
        {
            for(int j = i+1; j < hours.size(); j++)
            {
                if((hours[i] + hours[j]) % 24 == 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};