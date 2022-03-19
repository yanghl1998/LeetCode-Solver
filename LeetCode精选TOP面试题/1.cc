class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 一边遍历一边放进一个map中以便查询
        map<int, int> n;
        for(int i = 0; i < nums.size(); i++) {
            if (n.find(target - nums[i]) != n.end()) {
                // 如果在map中找到了target减去现在数字所剩下的 说明找到了
                return vector<int> {i, n[target-nums[i]]};
            }
            else {
                // 没找到 就把现在的数和对应的下标存起来
                n[nums[i]] = i;
            }
        }
        return vector<int> {};
    }
};