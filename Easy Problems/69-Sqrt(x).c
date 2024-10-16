// https://leetcode.com/problems/sqrtx/description/

// use the method that if any number is equal to x divided by that number
// it means, that number is the square root of x

int mySqrt(int x) {
    if (x == 0 || x == 1)
    {
        return x;
    }
    int sqrt = 1;
    for(int i = 2; i <= x / 2; i++)
    {
        if(i <= x/i)
        {
            sqrt = i;
        }
        else{
            break;
        }
    }
    return sqrt;
}
