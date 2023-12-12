#include <bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    if(b==0) return 1;
    int half_power=power(a,b/2);
    if(b%2==0) //even
    return half_power*half_power;
    else 
    return half_power*half_power*a;
}
int main()
{
   cout <<  power(2,13);
}