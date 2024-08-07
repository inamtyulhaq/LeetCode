// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

// increment or decrement based on whether the string in the vector
// is ++X, X++ or --X, X-- respectively

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0; i < operations.size(); i++)
        {
            if(operations[i] == "++X" || operations[i] == "X++")
            {
                x++;
            }
            else if (operations[i] == "--X" || operations[i] == "X--")
            {
                x--;
            }
        }
        return x;
    }
};
