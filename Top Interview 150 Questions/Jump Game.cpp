/*You are given an integer array nums. You are initially positioned at the array's first index, and each 
element in the array represents your maximum jump length at that position.
Return true if you can reach the last index, or false otherwise.*/

class Solution {
    public:
        bool canJump(vector<int>& nums) {
    
            int Max=0;
            int index=0;
    
            for(int jump:nums){
    
                if(index>Max){return false;}
                Max = max(Max, index + jump); 
                index++;
            
            }
    
            return true;
            
        }
    };