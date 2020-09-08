//在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
//https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty())
            return false;

        int rowSize = matrix.size(), columnSize = matrix[0].size();
        int row = 0, column = columnSize - 1;

        while(row < rowSize && column >= 0 && !matrix.empty())
        {
            if(matrix[row][column] == target)
                return true;
            else if(matrix[row][column] < target)
                row++;
            else
                column--;
        }
        return false;
    }
};