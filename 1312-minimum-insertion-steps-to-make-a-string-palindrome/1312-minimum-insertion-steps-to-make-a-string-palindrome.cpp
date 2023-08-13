class Solution {
public:
    int solve(int i,int j, string &s,vector<vector<int>>&dp)
    {
        if(i>j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s[i]==s[j])
            return dp[i][j]=solve(i+1,j-1,s,dp);
        else
            return dp[i][j]=min(1+solve(i+1,j,s,dp),1+solve(i,j-1,s,dp));
                    //min(when insert i, when insert j) //add 1 for current insertion
    }
    int minInsertions(string s) {
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(0,s.size()-1,s,dp);
    }

};
