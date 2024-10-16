// https://leetcode.com/problems/power-of-two/description/

// simple logic is that if a number is a power of 2
// then it will be divisible by 2

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        int arr[31];
        bool choice;
        for(int i =0; i < 31; i++)
        {
            arr[i] = pow(2, i);
        }
        for(int i = 0; i < 31; i++)
        {
            if(arr[i] == n)
            {
                choice = true;
                break;
            }
            else
            {
                choice = false;
            }
        }
        return choice;
    }
};
