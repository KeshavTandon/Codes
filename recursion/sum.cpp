#include<bits/stdc++.h>
using namespace std;
// void sum(int x,int &summ)
// {
//     if(x==0)
//     {
//         return;
//     }
//     summ+=x;
//     sum(x-1,summ);
// }

int sum(int x)
{
  if(x==0) return 0;
  return x+sum(x-1);
}
int main()
{
    int x=3;
    int y=sum(x);
    cout << y;
}