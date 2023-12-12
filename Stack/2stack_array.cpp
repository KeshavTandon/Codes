#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size){
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    void push1(int data)
    {
        if(top2-top1==1)
        {
            cout << "Stack is full" << endl;
        }
        else{
            arr[++top1]=data;
        }
    }

    void push2(int data)
    {
        if(top2-top1==1)
        {
            cout << "Stack is Full" << endl;
        }
        else{
            arr[--top2]=data;
        }
    }

    void pop1()
    {
        if(top1==-1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Element is deleted" << arr[top1--] << endl;
        }
    }

    void pop2(){
        if(top2==size-1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Element is deleted" << arr[top2] << endl;
            arr[top2]=0;
            top2++;
        }
    }

    void show()
    {
        for(int i=0;i<size;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(5);
    s.push1(10);
    s.push1(20);
    s.push2(30);
    s.push2(50);
    s.show();
}
