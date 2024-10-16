// https://leetcode.com/problems/palindrome-number/description/

// simple keep on dividing x by 10
// and keep on adding the remainder to another new variable (by mutliplying it with 10 and then adding the remainder)
// then compare the new variable with the original number
// if they are equal then return true
// else return false
// if x is negative then return false

bool isPalindrome(int x) {
    long int rem, revx = 0, x1=x;
    for(; x!=0; x=x/10 ){
        rem = x%10;
        revx = revx * 10 + rem;
    }
    if(x1 < 0){
        return false;
    }
    else if (x1 == revx){
        return true;
    }
    else{
        return false;
    }
}
