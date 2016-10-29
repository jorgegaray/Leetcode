/**
 Find Minimum in Rotated Sorted Array II
**/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int i,m=9999999999;
        for(i=0; i< nums.size();i++){
            m=min(m,nums[i]);
        }
        return m;
    }
};