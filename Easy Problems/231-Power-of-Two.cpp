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
        for(int i =0; i < 31; i++)
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
