class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
            return 0;
        vector<int>::iterator i = nums.begin();
        while(i != nums.end())
        {
            if(*i == val)
                nums.erase(i);
            else
                i++;
        }
        return nums.size();
    }
};