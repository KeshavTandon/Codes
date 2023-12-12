#include<bits/stdc++.h>
using namespace std;

int rec(int n,int c)
{
   if(n==0)
   return c;

   int rem=n%10;
   if(rem==0)
   {
    c++;
    return rec(n/10,c);
   }
   return rec(n/10,c);

}
int count(int n)
{
    int c=0;
    return rec(n,c);
}

int main()
{
  cout << "Enter the number" << endl;
  int n;
  cin>>n;
 cout << count(n) << endl;
}