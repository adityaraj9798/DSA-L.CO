class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& matrix, int r, int c) {
        vector<vector<int>>result;
        result.push_back({});
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0;
        int col=0;
        if(m*n!=r*c){
            return matrix;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(col<c){
                    result[row].push_back(matrix[i][j]);
                    col++;
                }
                else{
                    result.push_back({});
                    row++;
                    col=0;
                    result[row].push_back(matrix[i][j]);
                    col++;
                }
            }
        }
        return result;
    }
};