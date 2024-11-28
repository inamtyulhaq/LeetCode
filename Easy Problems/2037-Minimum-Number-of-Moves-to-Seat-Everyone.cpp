// https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/

// sort both arrays
// iterate through both arrays and calculate the difference between the elements
// add the difference to the moves variable
// return the moves variable

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int moves = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for(int i = 0; i < seats.size(); i++)
        {
            moves += abs(students[i] - seats[i]);
        }
        return moves;
    }
};