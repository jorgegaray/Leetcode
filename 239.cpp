/**
Sliding Window Maximum
**/
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector <int> sol;
        if(nums.size()==0) return sol;
        if(nums.size()==1 || k==1) return nums;
        vector <int> n(nums.size());
        int i;
        for(i=0; i < nums.size(); i++)
            n[i]=nums[i];
            
int max1,ind1,ind2, max2,aux, auxind,e;
max1=n[0];
ind1=0;
max2=n[1];
ind2=1;
if(max1<max2){
	max1=max2;
	max2=n[0];
	ind1=1;
	ind2=0;
}
for(i=2; i < k ; i++){
	if(n[i]>= max1){
	    auxind=ind1;
	    ind1=i;
	    ind2=auxind;
 		aux=max1;
		max1=n[i];
		max2=aux;
	}
	else if(n[i]>=max2){
		max2=n[i];
		ind2=i;
	}

}
sol.push_back(max1);

for(i=1; i< n.size()-k+1; i++){
	if(ind1 < i){
		max1=max2;
		ind1=ind2;
		max2=-999999999;
		for(e=i; e < i+k-1 ; e++){
			if(n[e]>max2 && e != ind1){
				max2=n[e];
				ind2=e;
			}
		}
	}
	if(ind2 < i){
		max2=-999999999;
		for(e=i+1; e < i+k-1 ; e++){
			if(n[e]>max2 && e != ind1){
				max2=n[e];
				ind2=e;
			}
		}		
	}
	if(n[i+k-1] >= max1){
		auxind=ind1;
		ind1=i+k-1;
		ind2=auxind;
		aux=max1;
		max1=n[i+k-1];
		max2=aux;
	}
	else if(n[i+k-1] >= max2){
		max2=n[i+k-1];
		ind2=i+k-1;
	}
    sol.push_back(max1);
}
        return sol;
    }
};