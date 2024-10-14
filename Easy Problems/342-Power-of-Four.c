bool isPowerOfFour(int n) {
    bool choice;
    if(n <= 0 || n % 4 != 0)
    {
        choice = false;
    }
    else
    {
        while(n % 4 == 0)
        {
            n = n / 4;
        }
    }
        if(n == 1)
        {
            choice = true;
        }
    return choice;
}
