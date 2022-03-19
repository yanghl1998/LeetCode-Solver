class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fast=1, slow=0;
        while(fast < nums.size()) {
            if (nums[fast] != nums[slow]) {
                slow += 1;
                nums[slow] = nums[fast];
            }
            fast += 1;
        }
        return slow+1;
    }
};