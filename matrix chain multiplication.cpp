int matrixMultiplication(int N, int arr[])
    {
        // code here
        int dp[N][N];
        for(int i=0;i<N;i++){
            dp[i][i+1]=0;
        }
        
        for(int gap=2;gap<N;gap++){
            for(int i=0;i+gap<N;i++){
                int j=i+gap;
                dp[i][j]=INT_MAX;
                for(int k=i+1;k<j;k++)
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]+arr[i]*arr[j]*arr[k]);
            }
        }
        return dp[0][N-1];
    }