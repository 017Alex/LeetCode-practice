//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。https://leetcode-cn.com/problems/rotate-array/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};