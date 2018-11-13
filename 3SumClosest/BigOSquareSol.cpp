class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        if(nums.size() < 3) return 0;
        else if(nums.size() == 3) return nums[0] + nums[1] + nums[2];
        
        int ClosestSum = nums[0] + nums[1] + nums[2];
        std::sort(nums.begin(),nums.end());
        
        
        for(int i = 0;i < nums.size() - 2;++i) {
            
            int front = i + 1;
            int back = nums.size() - 1;
            
            //bypass for duplicated case
            while(i < nums.size()- 2 && nums[i] == nums[i+1]) ++i;
            
            while(front < back) {
                
                //Current Sum estimation
                int curSum      = nums[i] + nums[front] + nums[back];
                int curDiff     = abs(curSum - target);
                int ClosetDiff  = abs(ClosestSum - target);
                if(curDiff == 0) {
                    
                    return target;
                }
                else if(curDiff < ClosetDiff) {
                    
                    ClosestSum = curSum;
                }
                
                //idx adjustment
                if(curSum > target) back--;
                if(curSum < target) front++;
            }
        }
        
        
        return ClosestSum;
    }
};
