// Link to Question: https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    int climbStairs(int n) {
        /*
            n = 1, return 1
            n = 2, return 2
            climbStairs(n-1) + climbStairs(n-2)
        */
        
        int ways_to_climb[n+1];
        
        ways_to_climb[1] = 1;
        if (n > 1)
        {
            ways_to_climb[2] = 2;
            for (int i = 3; i < n+1; i++)
                ways_to_climb[i] = ways_to_climb[i-1] + ways_to_climb[i-2];
        
        }
        
        return ways_to_climb[n];
    }
};
