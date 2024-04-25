class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>Stack;
        int i=0;
        while(i<s.size()){
           Stack.push(s[i++]);
        }
        s.clear();
        
        while(!Stack.empty()){
           s.push_back(Stack.top());
           Stack.pop();
        }
    }
};
