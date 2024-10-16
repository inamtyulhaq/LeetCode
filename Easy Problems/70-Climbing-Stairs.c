// https://leetcode.com/problems/climbing-stairs/description/

// the logic is this that if we have to climb n stairs
// then we can either climb 1 stair and then climb n-1 stairs
// or we can climb 2 stairs and then climb n-2 stairs
// so the total number of ways to climb n stairs is the sum of the number of ways to climb n-1 stairs and n-2 stairs

int climbStairs(int n) {
    int i = 0, ways[n+1];
    ways[0] = 1;
    ways[1] = 1;
    for(i = 2; i <= n; i++)
    {
        ways[i] = ways[i-1] + ways[i-2];
    }
    return ways[n];
}
