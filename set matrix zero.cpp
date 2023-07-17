class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
               if(matrix[i][j]==0) v.push_back({i,j});
            }
        }
       
        for(auto m:v)
        {
             int i=0;
             int j=0;
            while(i<matrix[m.first].size()) 
            {
                matrix[m.first][i]=0;
                i++;
            }
            while( j<matrix.size())
            {
                matrix[j][m.second]=0;
                j++;
            }
        }
    }
};