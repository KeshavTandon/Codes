#include<bits/stdc++.h>
using namespace std;
// void print_1_to_n(int x)
// {
//     if(x==0)
//     {
//         return;
//     }
//     print_1_to_n(x-1);
//     cout << x << " ";
// }
void print_n_to_1(int x)
{
     if(x==0)
     {
        return;
     }
     cout << x << " ";
     print_n_to_1(x--);
}
int main()
{
    int x=5;
    // print_1_to_n(x);
    print_n_to_1(5);
}