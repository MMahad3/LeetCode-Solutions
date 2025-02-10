/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.*/

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
             
            int n= nums.size();
             k %= n;
            reverse(nums.begin(), nums.end()); // Reverse entire array
            reverse(nums.begin(), nums.begin() + k); // Reverse first k elements
            reverse(nums.begin() + k, nums.end());
            }
        
    };