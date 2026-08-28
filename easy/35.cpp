#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        
        while (start <= end) {
            int candidate = (start + end) / 2;

            if(nums[candidate] == target) return candidate;
            
            if(target < nums[candidate]) end = candidate - 1;
            else start = candidate + 1;
        }

        return start;
    }
};