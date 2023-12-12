#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
int a[n];
int hsh[n];
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    hsh[a[i]]++;
  }
  int x;
  cin>>x;
  cout << hsh[x] << endl;
}  

//  Time Complexity O(n)