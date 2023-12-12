//Brute Force Bit Masking(generating all the subsets)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<(1<<n);i++) //generating all the subsets
    {
        for(int j=0;j<n;j++) //iterating on each bit and checking whether it is set or not
        {
            if((i>>j)&1)
            cout << arr[j] << " "; 
        }
        cout << endl;
    }
}