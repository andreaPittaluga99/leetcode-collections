#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> ret;
        ret.reserve(numRows);

        if (numRows == 0) return ret;

        ret.push_back({1});

        for (int i = 1; i < numRows; i++) {
            std::vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = ret[i - 1][j - 1] + ret[i - 1][j];
            }

            ret.push_back(row);
        }

        return ret;
    }
};