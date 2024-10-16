// https://leetcode.com/problems/defanging-an-ip-address/description/

// create a new string
// now loop through the original address string
// if you find a character other than dot, simply append it to the new string
// if find dot, create three new characters and append them to the new string
// return the string

class Solution {
public:
    string defangIPaddr(string address) {
        string newAddress;
        for(int i = 0; i < address.length(); i++)
        {
            char temp = address[i];
            if(temp == '.')
            {
                temp = '[';
                char temp1 = '.';
                char temp2 = ']';
                newAddress += temp;
                newAddress += temp1;
                newAddress += temp2;
            }
            else
            {
                newAddress += temp;
            }
        }
        return newAddress;
    }
};