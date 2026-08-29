class Solution {
public:
    int mySqrt(int x) {
        unsigned int i = 0;
        unsigned int j = 1;

        while (!((i*i <= x && x < j*j))) {
            i++;
            j++;
        }

        return (int)i;
    }
};