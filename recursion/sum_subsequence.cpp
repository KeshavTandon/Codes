#include<bits/stdc++.h>
using namespace std;
void sum_subsequence(int index,vector<int>v,int n,vector<int>&ds,int sum,int s)
{
   if(index==n)
   {
    if(s==sum)
    {
        for(auto it:ds)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return;
   }

   s+=v[index];
   ds.push_back(v[index]);
   sum_subsequence(index+1,v,n,ds,sum,s);  //include
   s-=v[index];
   ds.pop_back();

   sum_subsequence(index+1,v,n,ds,sum,s); //exclude
}
int main()
{
  vector<int>v={1,2,1};
  vector<int>ds;
  sum_subsequence(0,v,3,ds,2,0);
}