class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //rows
        int m = matrix.size();

        //col
        int n = matrix[0].size();

        //make an array of row and col to keep the track
        vector<int> row(m, 0);
        vector<int> col(n, 0);

    //Traverse the array and find out where are the 0 present and mark those row and col as 1
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
    
    //After making the rows and col that contain 0, travers again and check if there is 1, and that row or col is marked, convert that 1 to 0
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }


       
        
    }
};