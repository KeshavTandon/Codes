// Max sum of non-adjacent elements
//Memoization
#include <bits/stdc++.h>
using namespace std;
int MaxSum(vector<int> &cost, vector<int> &dp, int index)
{
    if(index==0) return cost[0];
    if(index<0) return 0;
    if(dp[index]!=-1) return dp[index];
    int pick=cost[index]+MaxSum(cost,dp,index-2);  
    int notPick=0+MaxSum(cost,dp,index-1);  
    return dp[index]=max(pick,notPick);
}
int main()
{
    vector<int> cost = {0, 10, 60, 10, 0, 50};
    vector<int> dp(6, -1);
    cout << MaxSum(cost, dp, 5);
}