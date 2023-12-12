#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, a, b;
    cout << "Enter number of vertex: ";
    cin >> x;
    vector<int> v[x];
    cout << "Enter number of edges: ";
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        cout << "Enter edge : ";
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout << "ADJ list: \n";
    for (int i = 0; i < x; i++)
    {
        cout << i << ":";
        for (auto a : v[i])
        {
            cout << a << ",";
        }
        cout << endl;
    }
    vector<bool> status(x);
    queue<int>q;
    q.push(0);
    status[0]=true;
    while(!q.empty())
    {
        int f=q.front();
        cout << f << " ";
        q.pop();
       for(auto p:v[f])
       {
        if(!status[p])
        {
            q.push(p);
            status[p]=true;
        }
       }
    }
}