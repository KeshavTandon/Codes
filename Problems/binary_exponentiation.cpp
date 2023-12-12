#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

int slow_expo(int a,int b)
{
    long long ans=1;
    for(int i=0;i<b;i++) //O(N)
    {
        ans=(ans*a)%M;
    }
    return ans%M;
}

int binary_expo(int a,int b) //fast exponentiation
{
    long long ans=1;
    while(b)           //O(log(b)bits)
    {
        if(b&1)
        {
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }
    return ans%M;
}

int main()
{
    long long int x=binary_expo(3,20);
    cout << x << endl;
    long long y= slow_expo(3,20);
    cout << y << endl;
}