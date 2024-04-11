//Frog Jump
#include<bits/stdc++.h>
using namespace std;
int MinJumps(vector<int>&cost,vector<int>&dp,int index)
{
    if(index==0) return 0;
    if(dp[index]!=-1) return dp[index];
    int left=MinJumps(cost,dp,index-1)+abs(cost[index]-cost[index-1]);
    int right=INT_MAX;
    if(index>1){
        right=MinJumps(cost,dp,index-2)+abs(cost[index]-cost[index-2]);
    }
    return dp[index]=min(left,right);
}
int main()
{
    vector<int>cost={30,10,60,10,60,50};
    vector<int>dp(6,-1);
    cout << MinJumps(cost,dp,5);
}