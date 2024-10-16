// https://leetcode.com/problems/valid-perfect-square/description/

bool isPerfectSquare(int num) {
    bool choice = false;
    for(long int i = 1; i <= num; i++)
    {
        long int j = i * i;
        if(num == j)
        {
            choice = true;
            break;
        }
        else if (num < j){
            break;
        }
    }
    return choice;
}
