/**
Maximum Subarray
**/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int l=nums.size();
    if(l==0) return 0;
    if(l==1) return nums[0];
    int i;
    int xm=0, mt=-99999999999;
    
    for(i=0; i < l; i++){
        xm+=nums[i];
        if(xm >= 0){
            mt=max(mt,xm);       
        }
        else{
            mt=max(nums[i],mt);
            xm=0;
        }
        
    }    

    return mt;
    }
};