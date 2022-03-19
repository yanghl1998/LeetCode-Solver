class Solution {
public:
    bool isValid(string s) {
        if (s.length()%2 != 0) return false;
        // 使用栈
        stack<char> ss;
        for(char i : s) {
            if (i=='(' || i=='[' || i=='{') ss.push(i);
            else {
                if (ss.empty()) return false;
                
                auto top = ss.top();
                if ((i == ')' && top != '(') || (i == ']' && top != '[') || (i == '}' && top != '{')) 
                    return false;
                else ss.pop();
            }
        }
        return ss.empty();
    }
};