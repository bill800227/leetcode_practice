class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ret;
        for(int i = 0; i < nums.size(); ++i)
        {
            int findIdx = abs(nums[i]) - 1;
            if(nums[findIdx] < 0)
                ret.push_back(abs(nums[i]));
            nums[findIdx] =  nums[findIdx] > 0 ? -nums[findIdx] : nums[findIdx];
        }
        return ret;
    }
};
