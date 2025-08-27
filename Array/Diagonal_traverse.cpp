class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty()) return {};
        int m=mat.size();
        int n=mat[0].size();
        int row=0,col=0;
        int dir=1;
        vector<int> result;
        for(int i=0;i<m*n;i++)
        {
            result.push_back(mat[row][col]);
            if(dir == 1)
            {
                if(col==n-1){
                    row++;
                    dir = -1;
                }
                else if(row==0){
                    col++;
                    dir = -1;
                }
                else{
                    row--;
                    col++;
                }
            }
            else
            {
                if(row==m-1){
                    col++;
                    dir = 1;
                }
                else if(col==0){
                    row++;
                    dir = 1;
                }
                else{
                    row++;
                    col--;
                }

            }
        }
        return result;
        
    }
};