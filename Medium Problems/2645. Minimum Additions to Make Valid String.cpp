// https://leetcode.com/problems/minimum-additions-to-make-valid-string/

// There will be three situations to keep in mind
// first:
// if the index we are at right now in the word is 'a' and next index is 'b' and again the 
// next index is 'c', simply increment the index 'i' by 2, and then it will be incremented again in the
// for loop. There won't be any increment in count and now your next index that will be analyzed will be i+3.
// e.g. "abca" --> it will result in 2, as the pointer will be at the second 'a' after the first iteration.
// second:
// if the index we are at right now in the word is 'a' and next index is 'b' or we are at 'b' and next index
// is 'c' aur we are at 'a' and next index is 'c', here increment by 1, as we only either need c, a, or b.
// here increment the index of the for loop by 1, which will then be incremented again by the for loop i++.
// third:
// if the index we are at right now in the word is 'a' and and next index is not 'b' or we are at 'b' and next index
// is not 'c' aur we are at 'c', simply increment count by 2.
// no need to increment the index here as we must have to see the next letter in the word.

class Solution {
public:
    int addMinimum(string word) {
        int count = 0;
        for(int i = 0; i < word.length(); i++)
        {
            if(word[i] == 'a' && word[i+1] == 'b' && word[i+2] == 'c')
            {
                i+=2;
            }
            else if (word[i] == 'a' && word[i+1] == 'b' ||
                     word[i] == 'b' && word[i+1] == 'c' ||
                     word[i] == 'a' && word[i+1] == 'c')
            {
                count+=1;
                i+=1;
            }
            else if (word[i] == 'a' && word[i+1] != 'b' ||
                     word[i] == 'b' && word[i+1] != 'c' || 
                     word[i] == 'c')
            {
                count+=2;
            }
        }
        return count;
    }
};
