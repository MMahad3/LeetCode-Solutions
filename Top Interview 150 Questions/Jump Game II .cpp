/*You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].
Each element nums[i] represents the maximum length of a forward jump from index i. In other words, if you are at 
nums[i], you can jump to any nums[i + j] where:

1) 0 <= j <= nums[i] and
2) i + j < n
Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].*/


class Solution {
    public:
        int jump(vector<int>& nums) {
            
            if(nums.size()==1){return 0;}
    
            int jump=0;
            int farthest=0;
            int currentend=0;
    
            for(int i=0;i<nums.size()-1;i++){
    
                farthest=max(farthest,i+nums[i]);
                if(i==currentend){
                    jump++;
                    currentend=farthest;
    
                    if(currentend >=nums.size()-1){break;}
                }
    
            }
    
            return jump;
        }
    };