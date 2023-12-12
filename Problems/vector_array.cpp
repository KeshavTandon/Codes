#include<bits/stdc++.h>
using namespace std;
// void show(vector<int> v[],int n)
// {
//   for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

void show2(vector<int> v[],int n)
{
  for(int i=0;i<n;i++)         //the for each loop can only print container 
  {                            //array is not a container
    for(auto j:v[i])
    {
        cout << j << " ";
    }
    cout << endl;
  }
}
void myFun(int n)
{
    vector<int> v[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            v[i].push_back(i+1);
        }
    }

    show2(v,n);

    
}
int main()
{
    int n;
    cin>>n;
    myFun(n);
    
}