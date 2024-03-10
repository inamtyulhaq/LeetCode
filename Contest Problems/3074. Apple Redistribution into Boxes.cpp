// Question
// https://leetcode.com/contest/weekly-contest-388/problems/apple-redistribution-into-boxes/

// Explanation:
// firstly total all the packs of apples (apple vector).
// then sort the capacity vector in descending order.
// now start adding its boxes sizes (large integers from start).
// increment the count variable till this count is less than the total of apple packs
// that count is the number of minimum boxes required
// output the count

// Solution:
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int aTotal = 0;
        int bTotal = 0;
        int count = 0;
        for (int i = 0; i < apple.size(); i++) {
            aTotal += apple[i];
        }
        int b = capacity.size();
        sort(capacity.begin(), capacity.end(), greater<>());
        for (int i = 0; i < b; ++i) {
            if (bTotal < aTotal) {
                bTotal += capacity[i];
                count++;
            } else {
                break;
            }
        }
        cout << count << endl;
        return count;
    }
};
