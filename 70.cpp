/**
Climbing Stairs
**/

class Solution {
public:
    int N;
    vector <int> v;
    int fun(int x){
        if(x > N) return 0;
        if(x==N) return 1;

        if(v[x]==-1){
            v[x]= fun(x+1)+fun(x+2);
            return v[x];
        }
        else{
            return v[x];
        }
    }
    int climbStairs(int n) {
        v.resize(n,-1);
        N=n;
        return fun(0);
        
    }
};