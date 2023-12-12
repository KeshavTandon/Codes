// C++ program to demonstrate the
// ordered set in GNU C++
#include <bits/stdc++.h>

// Header files, namespaces,
// macros as defined above
// #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

using ordered_set =tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>values(n);
    for(int i=0;i<n;i++)
    {
        cin>>values[i];
    }
    ordered_set<pair<int,int>>st;
    for(int i=0;i<k;i++)
    {
        st.insert({value[i],i});
    }
    cout << st.find_by_order(k-1/2).first << " ";
    for(int i=k;i<n;i++)
    {
        st.erase({values[i-k],i-k});
        st.insert({values[i],i});
        cout << st.find_by_order(k - 1 / 2).first << " ";
    }
}