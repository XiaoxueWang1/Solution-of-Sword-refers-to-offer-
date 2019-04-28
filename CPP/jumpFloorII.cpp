int jumpFloorII(int number) {
    vector<int> dp(number+1,0);
    dp[0]=1;
    for(int i=1;i<=number;i++)
        for(int j=0;j<i;j++)
            dp[i]+=dp[j];
    return dp[number];
}
