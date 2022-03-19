class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // 先写分治法
        return helper(nums, 0, nums.size());
    }

private:
    int helper(vector<int>& nums, int left, int right) {
        // 左闭右开区间
        if (left == right) return 0;
        else if (left+1 == right) return nums[left];
        else {
            int leftRes = helper(nums, left, (left+right)/2);
            int rightRes = helper(nums, (left+right)/2, right);
            int crossRes=0, suml=INT_MIN, l=0, sumr=INT_MIN, r=0;
            for(int i = (left+right)/2-1; i >= left; i--) {
                l+=nums[i];
                suml = suml > l ? suml : l;
            }
            for(int j = (left+right)/2; j < right; j++) {
                r += nums[j];
                sumr = sumr > r ? sumr : r;
            }
            crossRes = suml+sumr;
            leftRes = leftRes > rightRes ? leftRes : rightRes;
            leftRes = leftRes > crossRes ? leftRes : crossRes;
            return leftRes;
        }
        return 0;
    }
};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // 动态规划
        int tmp = 0, res = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            if (tmp + nums[i] > nums[i]) {
                tmp = tmp + nums[i];
            }
            else tmp = nums[i];
            res = max(res, tmp);
        }
        return res;
    }
};