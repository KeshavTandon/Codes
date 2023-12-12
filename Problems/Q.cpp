#include<bits/stdc++.h>
using namespace std;
// bool isSwap(int a,int b)
//     {
//         return a>b;
//     }
int main()
{
    // vector<int> vc;
    // int m;
    // cin>>m;
    // for(int i=0;i<m;++i)
    // {
    //     int num;
    //     cin>>num;
    //     vc.push_back(num);
    // }

    // for(int i=0;i<m;i++)
    // {
    //    for(int j=i+1;j<m;j++)
    //    {
    //     if(isSwap(vc[i],vc[j]))
    //     swap(vc[i],vc[j]);
    //    }
    // }

    // for(auto it:vc){
    // cout << it << " ";
    // }
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;++i)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    sort(v.begin(),v.end());

    for(auto it:v){
    cout << it.first <<" "<< it.second << " ";
    cout << endl;
    }


}