class Solution {
public:
    int dp_helper(int i, int j, vector<int>& v, vector<vector<long long>>& memo)
    {
        if(j-i<2)
            return 0;
        if(memo[i][j]!=-1)
            return memo[i][j];
        long long best = LLONG_MAX;
        for(int k=i+1;k<j;k++)
        {
            long long cost = 1LL * v[i]*v[k]*v[j]+dp_helper(i,k,v,memo)+dp_helper(k,j,v,memo);
            best = min(best,cost);
        }
        return memo[i][j] = (int) best;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        vector<vector<long long>> memo(n, vector<long long>(n,-1));
        return dp_helper(0,n-1,values,memo);
    }
};