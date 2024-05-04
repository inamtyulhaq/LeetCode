// https://leetcode.com/problems/count-of-matches-in-tournament/description/

// The formulae are given in the problem statement
// There are n teams given in the argument of the function and we have to return the number of matches
// Make two if elses
// One for that, if number of teams are even, n/2 matches are playe and teams also become half (n/2).
// If number of teams are odd, ( (n-1) / 2 ) matches are played in total.
// 1 team automatically goes to the next round, so it is removed from that odd number of teams, and the resulting
// even number of teams play with each other ( basically, number of matches).
// Regarding the teams who will advance if number of teams are odd,
// logic is this, that if there are 7 teams, 1 will automatically move forward.
// There will be three matches and 3 more teams will move forward to next round. So, in total 4 teams.
// It is equal to (n+1)/2 teams who will move to the next round

class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0;
        while (n > 1) {
            if (n % 2 != 0) {
                matches += (n - 1) / 2;
                n = (n + 1) / 2;
            } else {
                matches += n / 2;
                n = n / 2;
            }
        }
        return matches;
    }
};
