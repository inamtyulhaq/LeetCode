// https://leetcode.com/problems/left-and-right-sum-differences/

// firstly, find the left sum and right sum of each element in the array
// then, find the absolute difference between the left sum and right sum of each element
// return the answer array

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum, rightSum;
        vector<int>answer;
        for(int i = 0; i < nums.size(); i++)
        {
            int left = 0, right = 0;
            for(int j = 0; j < i; j++)
            {
                left += nums[j];
            }
            for(int k = i+1; k < nums.size(); k++)
            {
                right += nums[k];
            }
            leftSum.push_back(left);
            rightSum.push_back(right);
        }
        for(int i = 0; i < leftSum.size(); i++)
        {
            int result = abs(leftSum[i] - rightSum[i]);
            answer.push_back(result);
        }
        return answer;
    }
};