/**
Range Sum Query 2D - Immutable
**/

class NumMatrix {
public:
    vector < vector <int> > lds;
    NumMatrix(vector<vector<int>> &matrix) {
        int i, j, l2, l1=matrix.size();

        if(l1>0){
            lds.resize(l1+1);
            l2=matrix[0].size();
            
            for(j=0;j< l1 ; j++){
                lds[j].push_back(0);
                for(i=0; i <l2 ; i++){
                    lds[j].push_back(lds[j][i] + matrix[j][i]);
                }
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int i, count=0, v;
        for(i=row1 ; i <= row2 ; i++){
            v= lds[i][col2+1] - lds[i][col1];
            count+=v;
        }
        return count;
    }
};


// Your NumMatrix object will be instantiated and called as such:
// NumMatrix numMatrix(matrix);
// numMatrix.sumRegion(0, 1, 2, 3);
// numMatrix.sumRegion(1, 2, 3, 4);