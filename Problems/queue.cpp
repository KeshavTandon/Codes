#include<bits/stdc++.h>
using namespace std;
int main()
{
    int choice;
    queue<int>st;
    do
    {
        cout << "1-------push" << endl;
        cout << "2-------pop" << endl;
        cout << "4-------isEmpty" << endl;
        cout << "5-------size" << endl;
        cout << "6-------front" << endl;
        cout << "7-------back" << endl;
        cout << "8-------Exit" << endl;

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

            case 4:
            cout << st.empty() << endl;
            break;

            case 5:
            cout << st.size() << endl;
            break;

            case 6:
            cout << st.front() << endl;
            break;

             case 7:
            cout << st.back() << endl;
            break;

            case 8:
            cout<<"See you later";
            break;

            default:
            cout << "Invalid choice";
        }
    }while(choice!=8);
}