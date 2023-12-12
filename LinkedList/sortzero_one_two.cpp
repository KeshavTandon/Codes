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

void print(Node* &head)
{
 Node* temp=head;
 while(temp!=NULL)
 {
    cout << temp->data << " ";
    temp=temp->next;
 }
}

Node* sort(Node* &head)
{
    Node* zero_head=new Node(-1);
    Node* zero_tail=zero_head;

    Node* one_head=new Node(-1);
    Node* one_tail=one_head;

    Node* two_head=new Node(-1);
    Node* two_tail=two_head;

    Node* curr=head;
    while(curr!=NULL)
    {
        if(curr->data==0)
        {
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            zero_tail->next=temp;
            zero_tail=temp;
        }
        else if(curr->data==1)
        {
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            one_tail->next=temp;
            one_tail=temp;
        }
        else{
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            two_tail->next=temp;
            two_tail=temp;
        }
    }

    //removing the -1 of all the LL

    Node* temp=one_head;
    one_head=one_head->next;
    temp->next=NULL;
    delete temp;

    temp=two_head;
    two_head=two_head->next;
    temp->next=NULL;
    delete temp;

    if(one_head!=NULL)
    {
        zero_tail->next=one_head;
        if(zero_head!=NULL)
        one_tail->next=two_head;
    }
    else{
        if(two_head!=NULL)
        zero_tail->next=two_head;
    }

    temp=zero_head;
    zero_head=zero_head->next;
    temp->next=NULL;
    delete temp;

    return zero_head;
}

int main()
{
  Node* first=new Node(2);
  Node* second=new Node(2);
  Node* third=new Node(2);
  Node* fourth=new Node(2);
  Node* fifth=new Node(2);

  first->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;

  cout << "Printing the LL:" << endl;
  print(first);
  cout << endl;
  Node* res=sort(first);
  print(res);

}