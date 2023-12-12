#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n >> m;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
      int temp=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i<j)
            {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<< a[i][j] << " ";
        }
        cout << endl;
    }

}