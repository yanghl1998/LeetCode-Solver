class Solution {
public:
    int climbStairs(int n) {
        int prev=2, pprev=1, cur;
        if (n <= 1) return pprev;
        if (n == 2) return prev;
        for(int i = 3; i <=n; i++) {
            cur = prev + pprev;
            pprev = prev;
            prev=cur;
        }
        return cur;
    }
};