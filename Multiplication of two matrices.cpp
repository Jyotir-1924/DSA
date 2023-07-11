class Solution
{   
    public:
    vector<vector<int> > multiplyMatrix( const vector<vector<int> >& a, const vector<vector<int> >& b)
    {
        int m=a.size(),n1=a[0].size();
        int n2=b.size(),p=b[0].size();
        if(n1!=n2)
            return {};
        vector<vector<int>>res;
        for(int i=0;i<m;i++){
            vector<int>row;
            for(int j=0;j<p;j++){
                int ans=0;
                for(int k=0;k<n1;k++){
                    ans+=(a[i][k]*b[k][j]);
                }
                row.push_back(ans);
            }
            res.push_back(row);
        }
        return res;
    }
};