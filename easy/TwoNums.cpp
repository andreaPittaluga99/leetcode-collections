#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        map.reserve(nums.size());
        
        for (int i = 0; i < nums.size(); i++) {
            auto found = map.find(nums[i]);
            if (found != map.end()) {
                return {found->second, i};
            }
            map[target - nums[i]] = i;
        }
        
        return {0, 0};
    }  
};