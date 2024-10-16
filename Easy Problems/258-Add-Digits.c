// https://leetcode.com/problems/add-digits/description/

// repeatedly divide the number by 10
// and keep on adding digits by taking its remainder by 10

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
