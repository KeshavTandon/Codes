#include<bits/stdc++.h>
using namespace std;
int main()
{
        cout << "Enter the amount 1" <<endl;

    int amount;
    int Rs100,Rs50,Rs20,Rs1;
    cout << "Enter the amount" <<endl;
    cin >> amount ;
    switch(1)
    {
       case 1:Rs100=amount/100;
       amount=amount%100;
       cout<< "No of 100 Rs notes:"<< Rs100 << endl; 

       case 2:Rs50=amount/50;
       amount=amount%50;
       cout<< "No of 50 Rs notes:"<< Rs50 << endl; 

       case 3:Rs20=amount/20;
       amount=amount%20;
       cout<< "No of 20 Rs notes:"<< Rs20 << endl; 

       case 4:Rs1=amount/1;
       amount=amount%1;
       cout<< "No of 1 Rs notes:"<< Rs1 << endl; 
    }

}