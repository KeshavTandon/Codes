// Frog Jump with k steps
#include <bits/stdc++.h>
using namespace std;
int MinJumps(vector<int> &cost, vector<int> &dp, int index,int k)
{
    if(index==0) return 0;
    if(dp[index]!=-1) return dp[index];
    int mmsteps=INT_MAX;
    for(int i=1;i<=k;i++)
    {
        if(index-i>=0)
        {
            int jump=MinJumps(cost,dp,index-i,k)+abs(cost[index]-cost[index-i]);
            mmsteps=min(jump,mmsteps);
        }
    }
    return dp[index]=mmsteps;
}
int main()
{
    vector<int> cost = {30, 10, 60, 10, 60, 50};
    vector<int> dp(6, -1);
    cout << MinJumps(cost, dp, 5,1);
}