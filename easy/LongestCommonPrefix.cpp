#include <vector>
#include <string>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string ret = strs[0];

        size_t ret_common = ret.length();

        for(const auto& curr : strs) {
            
            size_t i = 0;
            while (i < ret.size() && i < curr.size() && ret[i] == curr[i]) {
                i++;
            }

            if (i < ret_common) {
                ret_common = i;
            }
        }

        return {ret.begin(), ret.begin() + ret_common};
    }
};