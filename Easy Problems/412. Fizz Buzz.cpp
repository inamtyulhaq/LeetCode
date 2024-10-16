// https://leetcode.com/submissions/detail/1193707065/

// took a vector
// iterated from 1 till n, given.
// if any number is divisible by 3 and 5, pushed FizzBuzz to vector
// else if divisible by 3, pushed back Fizz
// else if divisible by 5, pushed back Buzz
// else if no as such condition met, simply pushed that number
// output the vector

// Solution:
class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string>vec;
        for(int i = 1; i <= n; i++)
        {
            if(i%3==0 && i%5==0)
            {
                vec.push_back("FizzBuzz");
            }
            else if(i%3==0)
            {
                vec.push_back("Fizz");
            }
            else if(i%5==0)
            {
                vec.push_back("Buzz");
            }
            else
            {
                vec.push_back(to_string(i));
            }
        }
        return vec;
    }
};
