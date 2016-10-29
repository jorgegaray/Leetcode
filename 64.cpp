/**
 Minimum Path Sum
**/
class Solution {
public:
    vector < vector<int> > costo;
    int inf=999999999;
    int minPathSum(vector<vector<int>>& grid) {
        int i,j;
        int l1,l2;
        l1=grid.size();
        if(l1==0) return 0;
        l2=grid[0].size();
        costo.resize(l1+2);
        for(i=0 ; i<= l1; i++){
            for(j=0; j <= l2; j++){
                costo[i].push_back(inf);
            }
        }
        costo[1][0]=0;
        costo[0][1]=0;
    
        for(i=0; i < l1 ; i++){
            for(j=0; j < l2; j++){
                costo[i+1][j+1]=min(costo[i+1][j]+grid[i][j] , costo[i][j+1]+grid[i][j]);
            }
        }
        return costo[l1][l2];
    }
};