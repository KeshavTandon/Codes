#include<bits/stdc++.h>
using namespace std;
int subsequence(int index,vector<int>arr,int n,int sum,int s)
{
    if(index>=n)
    {
      if(s==sum)
      {
        return 1;
      }
      return 0;
    }
    s+=arr[index];
    int l=subsequence(index+1,arr,n,sum,s); //picking
    s-=arr[index];
    int r=subsequence(index+1,arr,n,sum,s);//not picking
    return l+r;
}
int main()
{
    vector<int>arr={1,2,1};
    vector<int>ds;
    int count=subsequence(0,arr,3,2,0);
    cout << count << endl;
}