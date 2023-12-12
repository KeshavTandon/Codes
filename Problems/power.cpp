#include<bits/stdc++.h>
using namespace std;

double myFun(double x, int n)
{
   double ans=x;
        if(n==1)
        return x;

       ans=ans*myFun(x,n-1); 
    return ans;
}

int main()
{
    double x;
    cin>>x;
    int n;
    cin>>n;
    double n1;
    if(n<0)
    n1=n1*(-1);
    double ans=myFun(x,n1);
    if(n<0)
    {
      ans=1/ans;
    }
    else
    cout << ans;

}