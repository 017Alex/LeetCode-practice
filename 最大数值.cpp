//https://leetcode-cn.com/problems/maximum-lcci/
//编写一个方法，找出两个数字a和b中最大的那一个。不得使用if-else或其他比较运算符。
class Solution {
public:
    int maximum(int a, int b) {
        long k = (((long)a - (long)b) >> 63) & 1;
        return b * k + a * (k ^ 1);
    }
};