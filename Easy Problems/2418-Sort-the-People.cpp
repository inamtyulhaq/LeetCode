// https://leetcode.com/problems/sort-the-people/description/

// firstly, we need to sort the heights in descending order
// then we need to find the names of the people with the sorted heights
// we can do this by comparing the sorted heights with the original heights
// if the sorted height matches the original height, we can add the name of the person to the result vector
// finally, we return the result vector

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>result;
        vector<int>temp = heights;
        sort(temp.begin(), temp.end());
        for(int i = temp.size() - 1; i >= 0; i--)
        {
            for(int j = 0; j <= heights.size() - 1; j++)
            {
                if(temp[i] == heights[j])
                {
                    result.push_back(names[j]);
                }
            }
        }
        return result;
    }
};