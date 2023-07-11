class Solution
{   
    public:
    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        vector<vector<int>>res;
        if(A.size()!=B.size()||A[0].size()!=B[0].size())
            return res;
        
        for(int i=0;i<A.size();i++){
            vector<int>rowin;
            for(int j=0;j<A[0].size();j++){
                rowin.push_back(A[i][j]+B[i][j]);
            }
            res.push_back(rowin);
        }
        return res;
    }
};