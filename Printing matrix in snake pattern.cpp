class Solution
{   
    public:
    vector<int> snakePattern(vector<vector<int> > mat)
    {
        vector<int>res;
        int n=mat.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    res.push_back(mat[i][j]);
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    res.push_back(mat[i][j]);
                }
            }
        }
        return res;
    }
};