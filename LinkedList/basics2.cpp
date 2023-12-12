#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int count(Node* &head)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void print(Node* &head)
{
 Node* temp=head;
 while(temp!=NULL)
 {
    cout << temp->data << " ";
    temp=temp->next;
 }
}
void insertAtHead(Node* &head,int data)
{
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}

void insertAtEnd(Node* &head,int data)
{
    if(head==NULL)
    {
        insertAtHead(head,data);
        return;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        Node* newNode=new Node(data);
        temp->next=newNode;
    }
}

void insertAtPosition(Node* &head,int position,int data)
{
  if(head==NULL){
    insertAtHead(head,data);
    return;
  }

  if(position==0){
    insertAtHead(head,data);
    return;
  }
  else if(position>=count(head))
  {
    insertAtEnd(head,data);
    return;
  }
  else
  {
    Node* prev=head;
    int i=1;
    while(i<position-1)
    {
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    Node* newNode=new Node(data);
    prev->next=newNode;
    newNode->next=curr;
  }
}

void deleteAtBegin(Node* &head)
{
    if(head==NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    int x=count(head);
    if(x==1)
    {
        delete head;
    }
    else
    {
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        cout << "Deleted from beginning:" << temp->data << endl;
        delete temp;
    }
}

void deleteAtEnd(Node* &head)
{
    if(head==NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    int x=count(head);
    if(x==1)
    {
        delete head;
    }
    else{
        Node* temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        Node* curr=temp->next;
        temp->next=NULL;
        cout << "Deleted Node value:" << curr->data << endl;
        delete curr;
    }
}

void searchfromValue(Node* &head,int val)
{
    if(head==NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    else{
        Node* temp=head;
        int i=1;
        while(temp->next!=NULL)
        {
            if(temp->data==val)
            {
                cout << "Node is present at index:" <<" " <<  i << endl;
                return;
            }
            i++;
        }
        cout << "Node not found" << endl;
    }
}

Node* reverse(Node* &prev,Node* &curr)
{
    //Base Case
    if(curr==NULL) {
        return prev;
    }

    Node* forward=curr->next;
    curr->next=prev;

    reverse(curr,forward);
}
int main()
{
    Node* head=new Node(10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    insertAtHead(head,60);
    cout << "Before reversing" << endl;
    print(head);
    cout << "After reversing" << endl;
    Node* prev=NULL;
    Node* &curr=head;
    head=reverse(prev,head);
    print(head);   
}