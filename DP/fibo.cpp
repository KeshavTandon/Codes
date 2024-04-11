// Memoization
#include<bits/stdc++.h>
using namespace std;
int Fibonacci(int n,vector<int>&dp)
{
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=Fibonacci(n-1,dp)+Fibonacci(n-2,dp);
}
int main()
{
    int n=10;
    vector<int>dp(n+1,-1);
    Fibonacci(n,dp);
    cout << dp[n];
}