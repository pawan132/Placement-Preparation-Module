
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int dp[2][W+1];

        for(int i=0; i<2; i++)
            for(int j=0; j<W+1; j++)
                dp[i][j] = 0;

        for(int i=1; i<n+1; i++){
            for(int j=1; j<W+1; j++){
                if(j-wt[i-1] >= 0)
                    dp[(i%2)][j] = max(dp[(i-1)%2][j], dp[(i-1)%2][j-wt[i-1]]+val[i-1]);
                else
                    dp[(i%2)][j] = max(dp[(i-1)%2][j], dp[i%2][j-1]);
            }
        }
        
        return dp[n%2][W];
    }