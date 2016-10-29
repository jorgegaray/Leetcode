/**
303. Range Sum Query - Immutable
**/

class NumArray {
public:
    vector <int> lds;
    NumArray(vector<int> &nums) {
        int i, l=nums.size();
        if(l>0){
            lds.push_back(0);
            for(i=0; i <l ; i++){
                lds.push_back(lds[i] + nums[i]);
            }
        }
    }

    int sumRange(int i, int j) {
         return lds[j+1]- lds[i];
    }
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);