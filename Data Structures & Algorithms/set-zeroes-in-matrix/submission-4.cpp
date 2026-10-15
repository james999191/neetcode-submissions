class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        bool rz = false;

        for (int i = 0; i < rows; i++){
            for (int j = 0; j < cols; j ++){
                if (matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    if (i > 0){
                        matrix[i][0] = 0;
                    } else {
                        rz = true;
                    }
                }
            }
        }

        for (int r = 1; r< rows; r ++){
            for (int c = 1; c < cols; c++){
                if (matrix[r][0]== 0 || matrix[0][c]==0){
                    matrix[r][c] = 0;
                }
            }
        }

        if (matrix[0][0] == 0){
            for (int r = 1; r < rows; r ++){
                matrix[r][0] = 0;
            }
        }

        if (rz){
            for (int c = 0; c<cols; c++){
                matrix[0][c] = 0;
            }
        }
        
    }
};
