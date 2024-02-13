int addDigits(int num) {
    while(num >= 10)
    {
        int rem, sum = 0;
        while(num > 0)
        {
            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        num = sum;
    };
    return num;
}
