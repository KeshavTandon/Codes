#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b[100],c[10000],i=0,j=0,k=0;
    int n,m;
    cout << "Enter the size of set1" << endl;
    cin>>n;
    cout << "Enter the elements of set1" << endl;
    for(int i=0;i<n;++i)
    cin>>a[i];
    cout << "Enter the size of set2" << endl;
    cin>>m;
    cout << "Enter the elements of set2" << endl;
    for(int i=0;i<m;++i)
    cin>>b[i];
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            if(a[i]==b[j])
                break;
        }
        if(j==m)
        {
           c[k]=a[i];
           k++;
        }
    }
     for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            if(b[i]==a[j])
                break;
        }
        if(j==n)
        {
           c[k]=b[i];
           k++;
        }
    }
    cout << "Symmetric difference is" << endl;
    for(i=0;i<k;++i)
    {
        cout << c[i];
    }
}