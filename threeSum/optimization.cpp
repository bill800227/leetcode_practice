class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     
        vector<vector<int>> res;
        std::sort(nums.begin(),nums.end());
            

        for(int i = 0;i < nums.size();++i) {
            
            int front = i + 1;
            int end = nums.size() -1;
            int target = nums[i];
            
            while(front < end) {

                int sum = nums[front] + nums[end];
            
                if(sum + target > 0) end--;
                else if(sum + target < 0) front++;
                else {
                    //find solution
                    vector<int> solution(3,0);
                    solution[0] = nums[i];
                    solution[1] = nums[front];
                    solution[2] = nums[end];
                    res.push_back(solution);
                    
                    //handle duplicate soultions
                    while(front < end && solution[1] == nums[front]) front++;
                    while(front < end && solution[2] == nums[end]) end--;
                    
                    
                }     
            }
            
            while(i + 1 < nums.size() && nums[i] == nums[i+1]) i++;
        }
        
        return res;
    }
};
