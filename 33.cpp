/**
Search in Rotated Sorted Array
**/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,l=nums.size();
        for(i=0; i<l; i++)
            if(target == nums[i]) return i;
        return -1;
    }
};