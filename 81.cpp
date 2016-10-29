/**
Search in Rotated Sorted Array II 
**/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i,l=nums.size();
        for(i=0; i<l; i++)
            if(target == nums[i]) return true;
        return false;       
    }
};