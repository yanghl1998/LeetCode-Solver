class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n <= 0) return;
        // 想起来了 从后面往前填数字
        int i = m-1, j=n-1, k=m+n-1;
        while(j>=0&&i>=0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                k--;i--;
            }
            else {
                nums1[k]=nums2[j];
                k--;j--;
            }
        }
        // 老老实实这么写 不容易出错
        while (i>=0) {
            nums1[k]=nums1[i];
            k--;i--;
        }
        while(j>=0) {
            nums1[k]=nums2[j];
            k--;j--;
        }
        return;
    }
};