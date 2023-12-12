#include<bits/stdc++.h>
using namespace std;
int main()
{
    int choice;
    stack<int>st;
    do
    {
        cout << "1-------push" << endl;
        cout << "2-------pop" << endl;
        cout << "3-------peek" << endl;
        cout << "4-------isEmpty" << endl;
        cout << "5-------size" << endl;
        cout << "6-------Exit" << endl;

        cout<<"Enter your choice" << endl;
        cin>>choice;

        switch(choice){
            case 1:
            int num;
            cin>>num;
            st.push(num);
            break;

            case 2:
            st.pop();
            break;

            case 3:
            cout << st.top() << endl;
            break;

            case 4:
            cout << st.empty() << endl;
            break;

            case 5:
            cout << st.size() << endl;
            break;

            case 6:
            cout<<"See you later";
            break;

            default:
            cout << "Invalid choice";


        }
    }while(choice!=6);
}