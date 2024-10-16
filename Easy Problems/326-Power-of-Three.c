// https://leetcode.com/problems/power-of-three/description/

bool isPowerOfThree(int n) {
    bool choice;
    if(n <= 0 || n % 3 != 0)
    {
        choice = false;
    }
    else
    {
        while(n % 3 == 0)
        {
            n = n / 3;
        }
    }
        if(n == 1)
        {
            choice = true;
        }
    return choice;
}
