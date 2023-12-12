#include<bits/stdc++.h>
using namespace std;
//complexity-Exponential(2^n)
int fibo(int x)
{
    if(x<=1)
    {
        return x;
    }
    int last=fibo(x-1);
    int slast=fibo(x-2);
    return last+slast;
}
int main()
{
    int x=4;
    int y=fibo(x);
    cout << y << endl;
}