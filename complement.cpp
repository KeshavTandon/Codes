#include<bits/stdc++.h>
using namespace std;

int complement(int n)
{
    
    int mask=0;
    int m;
    m=n;
    if(n==0)
    return 1;
    while(m!=0)
    {
        mask=(mask << 1)|1;
        m=m >> 1;
    }
    int ans=(~n) & mask;
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<< complement(n);

}
