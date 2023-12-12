#include<bits/stdc++.h>
using namespace std;
void subsequence(int index,vector<int>arr,int n,vector<int>&ds)
{
    if(index>=n)
    {
       for(auto it:ds)
       {
        cout << it << " ";
       }
       if(ds.size()==0)
      {
        cout << "{}" << " ";
     }
      cout << endl;
      return;
    }
    
    ds.push_back(arr[index]);
    subsequence(index+1,arr,n,ds); //picking
    ds.pop_back();
    subsequence(index+1,arr,n,ds);//not picking
}
int main()
{
    vector<int>arr={1,2,3};
    vector<int>ds;
    subsequence(0,arr,3,ds);
}