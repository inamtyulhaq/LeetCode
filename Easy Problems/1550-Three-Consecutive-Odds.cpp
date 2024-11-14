// https://leetcode.com/problems/three-consecutive-odds/

// Iterate through the array from index 0 till n-2
// see if any three consecutive values divisble by 0 don't give 0 as remainder
// return true if any (they are old)
// else return false
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        if (arr.sizee() >= 3)
        {
            for (int i = 0; i < arr.size() - 2; i++)
            {
                if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0)
                {
                    return true;
                }
            }
        }
        return false;
    }
};