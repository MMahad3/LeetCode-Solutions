/*Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.*/

class Solution {
    public:
        int trap(vector<int>& height) {
            int l=0;
            int r=height.size()-1;
            int leftmax = height[l];
            int rightmax = height[r];
            int result = 0;
    
            while(l<r){
                if(leftmax < rightmax){
                    l+=1;
                    leftmax= max(leftmax, height[l]);
                    result += leftmax - height[l]; 
                }
                else {
                    r-=1;
                    rightmax = max(rightmax, height[r]);
                    result += rightmax - height[r];
                }
                
            }
            return result;
    
        }
    };