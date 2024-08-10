// https://leetcode.com/problems/to-lower-case/description/

// iterate through the size of the string
// if found a character at any index between ascii 65 and 90 (capital letters)
// add 32 to it to convert its ascii to small letters (between 97 and 122)

char* toLowerCase(char* s) {
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
        }
    }
    return s;
}
