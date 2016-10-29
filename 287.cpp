/**
Find the Duplicate Number
**/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector <bool> esta(nums.size()+1,false);
        int i,l=nums.size();
        for( i=0; i < l ; i++){
            if(esta[nums[i]]==true) return nums[i];
            else esta[nums[i]]=true;
        }
        
    }
};