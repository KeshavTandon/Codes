#include<bits/stdc++.h>
using namespace std;
void pattern(int r,int c)
{
    if(r==0)
    return;

    if(r>c)
    {
        cout << "*";
        pattern(r,c+1);
    }
   
    else
    {
        cout << "\n";
        pattern(r-1,0);
    }
}
int main()
{
   int r=4;
   int c=0;
   pattern(r,c);
}