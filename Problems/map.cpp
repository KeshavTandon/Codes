#include<bits/stdc++.h>
using namespace std;
// void print(map<int,string>mp)
// {
//     if(mp.find(1)!=mp.end())
//     {
//         mp.erase(1);
//         cout << "erased" << endl;
//     }
//     else
//     cout << "not found" << endl;

//     cout << mp.size() << endl;
//   }

// int main()
// {
//    map<int,string>mp;
//    mp[1]="keshav";
//    mp[9]="xyz";
//    print(mp);
// }

//complexity 
// insertion:-log(n)
//access -o(1)
//find-logN
// print:-log(n)

// Q wap to take n strings from user and printout string in alphabetical order with their frequency 
int main()
{
  map<string,int> mp;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    // if(mp.find(s)!=mp.end())
    // {
    //   mp[s]++;
    // }
    // else
    // {
    //   mp.insert({s,1});
    // }
    mp[s]++;
  }
  for(auto it:mp)
  {
    cout << it.first << it.second << endl;
  }

  
}
