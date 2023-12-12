#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s,int target)
{
  //Base Case
  if(s.empty())
  {
    s.push(target);
    return;
  }

  int tp=s.top();

  s.pop();

  solve(s,target);
  s.push(tp);
}
void print(stack<int>s)
{
    int sz=s.size();
    while(sz!=0)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int target=100;
    solve(s,target);
    print(s);
}