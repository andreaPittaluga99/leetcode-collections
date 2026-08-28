#include <string>
#include <algorithm>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;

        int carry = 0;
        std::string res = "";

        while (i >= 0 || j >= 0) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            res += (sum % 2) + '0';
            carry = sum / 2;
        }
        if(carry) res += '1';

        reverse(res.begin(), res.end());
        return res;
    }
};