// https://leetcode.com/problems/replace-all-digits-with-characters/

// take an array of characters
// allocate it the same memory size as of the given character array (string)
// iterate through the given string (character array)
// now if you find any digit, just simply add it to the previous alphabet
// and add it to the new character array
// else add every simple alphabet to the character array
// null-terminate the string and return

char* replaceDigits(char* s) {
    char* s1 = (char*)malloc((strlen(s) + 1) * sizeof(char));
    for (int i = 0; i < strlen(s); i++) {
        if (isdigit(s[i])) {
            int temp = s[i] - '0';
            s1[i] = s[i-1] + temp;
        } else {
            s1[i] = s[i];
        }
    }
    s1[strlen(s)] = '\0';
    return s1;
}
