#include<bits/stdc++.h>
using namespace std;
void counting(int n)
{
  if(n==0) return;
  counting(n-1);
  cout << n << " ";
}
int main()
{
 counting(5);
}