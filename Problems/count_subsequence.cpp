#include<bits/stdc++.h>
using namespace std;
int subse(int arr[],int n,int target,int i,int sum)
{
    if(i==n)
    {
        if(sum==target)
        return 1;
        else return 0;
    }
    sum+=arr[i];
    int left=subse(arr,n,target,i+1,sum);
    sum-=arr[i];
    int right=subse(arr,n,target,i+1,sum);

    return left+right;
}
int main()
{
  int arr[]={1,2,1};
  cout << subse(arr,3,2,0,0);

}