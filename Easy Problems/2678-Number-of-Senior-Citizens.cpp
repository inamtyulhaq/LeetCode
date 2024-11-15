// https://leetcode.com/problems/number-of-senior-citizens/description/

// iterate through the vector
// take in every string
// check if the 11th and 12th character are greater than or equal to 6 and 1 respectively
// also check if the 11th character is greater than 6 and 12th character is greater than or equal to 0
// if either of the conditions are true, increment the count
// return the count

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++)
        {
            string s = details[i];
            if(s[11] >= '6' && s[12] >= '1' || s[11] > '6' && s[12] >= '0')
            {
                count++;
            }
        }
        return count;
    }
};