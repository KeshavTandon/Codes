#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j;
    cout << "Enter the size" << endl;
    cin >> n;
    cout << "Enter the array" << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++ )
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            cout<<"Duplicates are:"<< a[i]<< endl;
        }
    }
    
}