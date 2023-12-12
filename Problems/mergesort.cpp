#include<bits/stdc++.h>
using namespace std;

void merge_sorted(int a[],int s,int m,int e)
{
    int l_size=m-s+1;
    int l[l_size+1];
    int r_size=e-s;
    int r[r_size+1];

    for(int i=0;i<l_size;i++)
    {
        l[i]=a[i+l];
    }
     for(int i=m+1;i<r_size;i++)
    {
        r[i]=a[i+m+1];
    }
    


}
 void mergeSort(int a[],int s,int e)
 {
       if(s==e)
       return;

       int m=s+(e-s)/2;

       mergeSort(a,0,m);
       mergeSort(a,m+1,e);

       merge_sorted(a,s,m,e);


 }


int main()
{
    int n;
    cout << "Enter size of array:" << endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergeSort(a,0,n-1);

    

}



