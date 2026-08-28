#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int removed = 0;
        int i = 0;

        while(i < nums.size() - removed) {
            if (nums[i] == val){
                nums[i] = nums[nums.size() - 1 - removed];
                removed++;
            }
            else {
                ++i;
            }
        }
        return i;
    }
};