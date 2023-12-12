#include<bits/stdc++.h>
using namespace std;
void subsequence(int index,vector<int>arr,int n,vector<int>&ds,int sum,int s,int &count)
{
    if(index>=n)
    {
      if(s==sum)
      {
        count++;
      }
      return;
    }
    s+=arr[index];
    ds.push_back(arr[index]);
    subsequence(index+1,arr,n,ds,sum,s,count); //picking
    s-=arr[index];
    ds.pop_back();
    subsequence(index+1,arr,n,ds,sum,s,count);//not picking
}
int main()
{
    vector<int>arr={1,2,3};
    vector<int>ds;
    int count=0;
    subsequence(0,arr,3,ds,2,0,count);
    cout << count << endl;
}