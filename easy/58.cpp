#include <string>


class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int ret = 0;
        for (size_t i = s.length() - 1; i >= 0; i--) {
            if(s[i] == ' ') {
                if (ret > 0 ) break;
            }
            else ret++;
        }
        return ret;
    }
};