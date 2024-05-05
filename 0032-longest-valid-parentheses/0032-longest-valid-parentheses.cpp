class Solution {
public:
    int longestValidParentheses(string s) {
        int len{0};
        stack<int> stk;
        stk.push(-1);
        
        for(int i{0}; i < s.length(); i++) {
            if(s[i] == '(')
                stk.push(i);
            else {
                stk.pop();
                
                if(not stk.empty())
                    len = max(len, i - stk.top());
                else
                    stk.push(i);
            }
        }

        return len;
    }
};