// https://leetcode.com/problems/count-number-of-teams/description/

// iterate using a for loop using a nested loop
// such that every index in inside loop is greater than outer loop
// apply the condition
// increment the count

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count = 0;
        for (int i = 0; i < rating.size() - 2; i++) {
            for (int j = i + 1; j < rating.size() - 1; j++) {
                for (int k = j + 1; k < rating.size(); k++) {
                    if (rating[i] > rating[j] && rating[j] > rating[k]
                    && rating[i] > rating[k] ||
                        rating[i] < rating[j] && rating[j] < rating[k]
                        && rating[i] < rating[k]) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
