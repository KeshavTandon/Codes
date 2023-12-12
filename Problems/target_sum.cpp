#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr,int target)
{
  if(target==0)
  {
    return 0; // we have successfully reach the target 
  }
  if(target<0)
  {
    return INT_MAX; // invalid 
  }

  int mini=INT_MAX;
  for(int i=0;i<arr.size();i++)
  {
    int ans=solve(arr,target-arr[i]);
    if(ans!=INT_MAX)
    mini=min(mini,ans+1);
  }
  return mini;
}

int main()
{
 int target=10;
 vector<int>arr{1,2,3};
 int ans=solve(arr,target);
 cout << ans << endl;
}