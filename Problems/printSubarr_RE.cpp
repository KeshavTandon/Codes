#include<bits/stdc++.h>
using namespace std;
void helperFunction(vector<int> &v,int start,int end)
{
  //base case
  if(end==v.size())
  return;

  //condition
  for(int i=start;i<=end;i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  //RE
  helperFunction(v,start,end+1);
}

 void printSubarray(vector<int> &v)
{
    for(int start=0;start<v.size();start++)
    {
        int end=start;
        helperFunction(v,start,end);
    }
}
int main()
{
 vector<int> v{1,2,3,4,5};
 printSubarray(v);
}