#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> Stack;
        int i = 0;
        while(s[i]!='\0'){
            if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
                Stack.push(s[i]);
            } else if (!Stack.empty() && 
                       ((s[i]==')' && Stack.top() == '(') || 
                        (s[i]==']' && Stack.top() == '[') || 
                        (s[i]=='}' && Stack.top() == '{'))) {
                Stack.pop();
            } else {
                return false;
            }
            i++;
        }
        return Stack.empty();
    }
};
