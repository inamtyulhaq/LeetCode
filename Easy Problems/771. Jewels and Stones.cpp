// https://leetcode.com/problems/jewels-and-stones/description/ 

// The problem is way simpler
// Simply use a nested loop and
// compare every character of one string with every character of another string
// convert every character to its ascii (int) before comparing
// increment the count, if match is found

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i = 0; i < jewels.length(); i++)
        {
            int a = jewels[i];
            for(int j = 0; j < stones.length(); j++)
            {
                int b = stones[j];
                if(a == b)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
