#include <vector>

class Solution {
public:
    int climbStairs(int n) {

        if(n == 1) return 1;
        if(n == 2) return 2;

        unsigned int minus_two = 1;
        unsigned int minus_one = 2;
        unsigned int curr;
        for (int i = 2; i < n; i++) {
            curr = minus_one + minus_two;
            minus_two = minus_one;
            minus_one = curr;
        }
        
        
        return curr;
    }
};