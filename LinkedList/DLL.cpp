#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int data;
   Node* prev;
   Node* next;
   Node(){
    this->data=0;
    this->next=NULL;
    this->prev=NULL;
   }
   Node(int data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
   }
};

void print(Node* &head)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout << temp->data << " ";
    temp=temp->next;
  }
}

int count(Node* &head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node* &head,int data)
{
    if(head==NULL)
    {
        Node* head=new Node(data);
    }
    else{
        Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void insertAtEnd(Node* &head,int data)
{
    if(head==NULL)
    {
        insertAtHead(head,data);
    }
    else
    {
        Node* newNode=new Node(data);
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
}

void insertAtPos(Node* &head,int pos,int data)
{
    int x=count(head);
    if(head==NULL || pos==0)
    {
        insertAtHead(head,data);
        return;
    }
    if(pos>=x)
    {
        insertAtEnd(head,data);
        return;
    }
    else{
        Node* newNode=new Node(data);
        Node* temp=head;
        int i=1;
        while(i<pos-1)
        {
            temp=temp->next;
        }
        Node* curr=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
        newNode->next=curr;
        curr->prev=newNode;
    }
}

void deleteAtBegin(Node* &head)
{
    if(head==NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    else{
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        cout << "Node Deleted" <<" "<< temp->data << endl;
        delete temp;
    }
}

void deleteAtEnd(Node* &head)
{
    int x=count(head);
    if(head==NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    if(x==1)
    {
        delete head;
        return;
    }
    else{
        Node* temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
      Node* curr=temp->next;
      curr->prev=NULL;
      temp->next=NULL;
      cout << "Node deleted at end" << " " << curr->data << endl;
      delete curr;
    }
}

void deleteAtPos(Node* &head,int pos)
{
    int x=count(head);
    if(head==NULL)
    {
        cout << "LL is empty" << endl;
        return; 
    }
    if(pos==1)
    {
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        cout << "Node deleted " << " " << temp->data << endl;
        delete temp;
        return;
    }
    if(pos>=x)
    {
        deleteAtEnd(head);
        return;
    }
    else{
        Node* temp=head;
        int i=1;
        while(i<pos-1)
        {
            temp=temp->next;
        }
        Node* curr=temp->next;
        temp->next=curr->next;
        curr->next->prev=temp;
        cout << "Node deleted " << " " << curr->data << endl; 
        delete curr;
    }
}

int main(){
    // Node* first=new Node(10);
    // Node* second=new Node(20);
    // Node* third=new Node(30);

    // first->next=second;
    // second->prev=first;
    // second->next=third;
    // third->prev=second;

    // cout << "Printing the LL:" << endl;
    // print(first);

    // insertAtHead(first,40);
    // print(first);

    Node* head=new Node(10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    cout << "Printing the LL" << endl;
    print(head);
    cout << endl;
    insertAtEnd(head,50);
    print(head);
    cout << endl;
    insertAtPos(head,2,100);
    print(head);
    cout << endl;
    deleteAtBegin(head);
    print(head);
    cout << endl;
    deleteAtEnd(head);
    print(head);
    cout << endl;
    deleteAtPos(head,1);
    print(head);

}