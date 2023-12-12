#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int top;
    int *arr;
    int size;
    Stack(int size){
        arr=new int[size];
        top=-1;
        this->size=size;
    }

    void push(int data)
    {
        if(top==size-1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[++top]=data;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout << "Stack Underflow" << endl;
        }
        else{
            cout << "Element deleted at" << arr[top] << endl;
            top--;
        }
    }

    void getTop()
    {
        if(top==-1)
        {
            cout << "No element is there" << endl;
        }
        else
        {
            cout << "Top element is " << arr[top] << endl;
        }
    }

    void show()
    {
        if(top==-1)
        {
            cout << "No element is there" << endl; 
        }
        else
        {
            for(int i=0;i<=top;i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    int getSize()
    {
        return top+1;
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Not Empty" << endl;
        }
    }
};

int main()
{
  Stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.show();
  s.pop();
  s.show();
  s.push(60);
  s.getTop();
  s.isEmpty();

}