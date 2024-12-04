// https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments/

// iterate through the subsequence string
// for every character in the subsequence, iterate through the string str1
// for every nested loop iteration, increment the index in the string str1
// if the character in the subsequence is equal to the character in the string str1, increment the count
// if the count is equal to the size of the subsequence, return true
// else return false

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int m = str1.size(), n = str2.size(), i = 0, j = 0;
        while(i < n && j < m)
        {
            if(str2[i] == str1[j] || str2[i] == str1[j] + 1
             || str2[i] == str1[j] - 25)
            {
                i++;
            }
            j++;
        }
        cout << i << " " << j << endl;
        return i == n;
    }
};