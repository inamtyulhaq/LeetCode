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
