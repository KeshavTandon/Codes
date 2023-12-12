#include<bits/stdc++.h>
using namespace std;
void PrintSubsequence(string s,string output,int i, vector<string> &v)
{
 if(i>=s.size())
 {
    return;
 }

 //exclude
 PrintSubsequence(s,output,i+1,v);

 //include
 output+=s[i];
 v.push_back(output);
 PrintSubsequence(s,output,i+1,v);
}
int main()
{
    string s;
    cin>>s;
    string output="";
    vector<string> v;
 PrintSubsequence(s,output,0,v);
 for(auto i:v)
 cout<< i<< " ";

 cout << v.size() << endl;


}