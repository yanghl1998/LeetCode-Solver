class Solution {
public:
    int mySqrt(int x) {
        // 我不懂但我大受震撼
        int left=1, right=x, res;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if (1L*mid*mid > x) {
                right = mid-1;
            }
            else if (1L*mid*mid <= x) {
                left = mid + 1;
                res = mid;
            }
        }
        return res;
    }
};