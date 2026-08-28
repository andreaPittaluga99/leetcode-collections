#include <string>


class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int ret = 0;
        for (size_t i = s.length(); i > 0; i--) {
            if(s[i - 1] == ' ') {
                if (ret > 0 ) break;
            }
            else ret++;
        }
        return ret;
    }
};