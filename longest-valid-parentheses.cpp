#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        int max_len = 0;
        int left = 0;
        int right = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                left++;
            } else {
                right++;
            }

            if (right == left) {
                max_len = max(max_len, 2 * left);
            } else if (right > left) {
                // Reset the counts since invalid
                left = right = 0;
            }
        }

        left = right = 0;

        // Traverse backward to handle cases like ")()())"
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '(') {
                left++;
            } else {
                right++;
            }

            if (left == right) {
                max_len = max(max_len, 2 * left);
            } else if (left > right) {
                // Reset the counts since invalid
                left = right = 0;
            }
        }

        return max_len;
    }
};
