#include<bits/stdc++.h>
using namespace std;
void PrintSubsequence(string s,string output,int i,vector<string>&v)
{
 if(i>=s.size())
 {
    v.push_back(output);
    return;
 }


 //Include
 PrintSubsequence(s,output,i+1,v);
 output+=s[i];
 
 

 //exclude
 PrintSubsequence(s,output,i+1,v);


}
int main()
{
    string s;
    cin>>s;
    string output="";
    vector<string>v;

 PrintSubsequence(s,output,0,v);

 for(auto it:v)
 cout << it << " ";
}