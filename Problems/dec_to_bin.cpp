#include<bits/stdc++.h>
using namespace std;
//  int decimal_to_binary(int n)
// {
//  int rem=0;
//  int i=0;
//  while(n!=0)
//  {
//    int var=n&1;
//     rem=var*pow(10,i++)+rem;
//     n=n >> 1;

//  }
//  return rem;
// }

int binary_to_decimal(int n)
{
    int rem=0;
    int i=0;
    while(n!=0)
    {
        int last_bit=n & 1;
        // int last_bit=n%10;
        rem=last_bit*pow(2,i++)+rem;
        n=n >> 1;
        // n=n/10;
    }
    return rem;
}
int main()
{
    int n;
    cin>>n;
//    int x= decimal_to_binary(n);
//    cout << x << endl;
//    if(n&1==0)
//    cout << "even" << endl;
//    else
//    cout << "odd" << endl;

  cout << binary_to_decimal(n) << endl;
}
