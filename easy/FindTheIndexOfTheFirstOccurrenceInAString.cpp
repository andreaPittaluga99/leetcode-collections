#include <string>


class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if(needle.length() > haystack.length() || needle.empty()) return -1;

        for(size_t i = 0; i < haystack.length(); ++i) {
            if(needle[0] == haystack[i] && needle.length() <= haystack.length() - i &&  
            needle == haystack.substr(i, needle.length())) {
                return i;
            }
        }

        return -1;
    }
};