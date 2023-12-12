#include<bits/stdc++.h>
using namespace std;
bool  AnyOne_subsequence(int index,vector<int>v,vector<int>&ds,int sum,int s,int n)
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
            return true;
        }
       else return false;
    }

    s+=v[index];
    ds.push_back(v[index]);
   if(AnyOne_subsequence(index+1,v,ds,sum,s,n)==true) return true; //include
    s-=v[index];
    ds.pop_back();

  if(AnyOne_subsequence(index+1,v,ds,sum,s,n)==true) return true; //exclude 

  return false;
}
int main()
{
  vector<int>v={1,2,1};
  vector<int>ds;
  AnyOne_subsequence(0,v,ds,3,0,3);
}