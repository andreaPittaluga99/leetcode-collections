#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string& s) {

        std::stack<char> stack;
        for(const auto curr : s) {
            if (curr == '(' || curr == '[' || curr == '{') {
                stack.push(curr);
            }
            else {
                if(stack.empty()) return false;

                char prev = stack.top();
                stack.pop();
                switch (curr) {
                case ')':
                    if (prev != '(') return false;
                    break;
                
                case ']':
                    if (prev != '[') return false;
                    break;
                
                case '}':
                    if (prev != '{') return false;
                    break;
                
                default:
                    break;
                }
            }
        }

        return stack.empty();
    }
};