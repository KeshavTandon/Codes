#include<bits/stdc++.h>
using namespace std;
void insertSorted(stack<int>&s,int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }

    if(s.top()>=target)
    {
        s.push(target);
        return;
    }

    int TopElement=s.top();
    s.pop();

    insertSorted(s,target);

    s.push(TopElement);
}

void sortStack(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int topElement=s.top();
    s.pop();
    sortStack(s);
    
    insertSorted(s,topElement);

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
  s.push(12);
  s.push(1);
  s.push(2);
  s.push(121);
  s.push(200);
  sortStack(s);
  print(s);
}