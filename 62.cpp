/**
Unique Paths
**/
class Solution {
public:
    int M,N;
    vector <vector<int> > w;
    int uniquePaths(int m, int n) {
        int i,j;
        M=m-1;
        N=n-1;
        w.resize(m+1);
        for(i=0; i < m; i++){
            for(j=0; j < n; j++){
                w[i].push_back(-1);
            }
            w[i].push_back(0);
        }
        for(i=0;i<=n;i++)
            w[m].push_back(0);
        w[M][N]=1;
        w[0][0]=DFS(0,0);
        return w[0][0];
    }
    
    int DFS(int x, int y){
        if(w[x][y]!=-1) return w[x][y];
        w[x][y]=DFS(x+1,y)+DFS(x,y+1);
        return w[x][y];
    }
};