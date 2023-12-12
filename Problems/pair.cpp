#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<pair<int,int> > p;
   int x;
   cin>>x;
   while(x--)
   {
    int x,y;
    cin>>x>>y;
    p.push_back({x,y});
   }
   for(auto i=p.begin();i!=p.end();i++)
   {
    cout << (*i).first  << " "<< (*i).second << endl;
  }
}