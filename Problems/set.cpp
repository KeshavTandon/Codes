#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int x;
    cin>>x;
    while(x--)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    for(auto i=s.begin();i!=s.end();i++)
    {
        cout << *i << " ";
    }
}