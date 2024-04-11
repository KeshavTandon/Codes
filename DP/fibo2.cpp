//Tabulation
#include <bits/stdc++.h>
using namespace std;
void Fibonacci(int n, vector<int> &dp)
{
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
}
int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1);
    Fibonacci(n, dp);
    cout << dp[n];
}