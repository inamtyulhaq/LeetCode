// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

// Firstly, find the greatest number of candies that any child has.
// Now simply add the extra candies to every child's candies and compare it with the greatest candy number, a child has.
// Return false, if it's less else return true.

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> greaterOrNot;
        int max = 0;
        for (int i = 0; i < candies.size(); i++) {
               if(candies[i] > max)
               {
                max = candies[i];
               }
        }
        for (int i = 0; i < candies.size(); i++) {
            bool br = true;
            int candy = 0;
            candy = candies[i];
            candy += extraCandies;
            if(candy < max)
            {
                br = false;
            }
            greaterOrNot.push_back(br);
        }
        return greaterOrNot;
    }
};
