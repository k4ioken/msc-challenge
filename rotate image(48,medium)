class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(int i=0;i<matrix.size();i++){
            
            for(int j=i;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }}

        for(int i=0;i<matrix.size();i++){
            int a=matrix[i].size();
            for(int j=0;j<a/2;j++){
                swap(matrix[i][j],matrix[i][a-j-1]);
            }}
        
        }
 
};
