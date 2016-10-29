/**
229. Majority Element II
**/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        vector<int> l;
        set <int> w;
        float x=(float)nums.size()/3.0;
        for(int i=0; i < nums.size(); i++){
            m[nums[i]]++;
            if((float)m[nums[i]] > x){
                if(w.insert(nums[i]).second)
                    l.push_back(nums[i]);
            } 
        }
        return l;
    }
};