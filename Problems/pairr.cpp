#include<bits/stdc++.h>
using namespace std;
int create(vector<pair<int,string>>&v)
{
 for(int i=0;i<5;i++)
 {
    int a;
    string b;
    cin>>a;
    cin>>b;
    v.push_back({a,b});
 }


}
void show(vector<pair<int,string>>&v)
{
 for(auto it:v)
 {
  cout << it.first <<" "<< it.second << endl;
 }
}
int main()
{
    //pair
    // pair<int,int> p[4];
    // p={5,25};
    //  cout<<p.first  << " " << p.second << endl;
    // p.first=100;
    // cout << p.first  << " "<< p.second << endl;

    // p[0]={4,1};
    // p[1]={2,3};
    // p[2]={5,10};
    // p[3]={9,8};
    // for(int i=0;i<4;i++)
    // cout << p[i].first << p[i].second << endl;

  vector<pair<int,string>>v;
  create(v);   
  show(v);
}