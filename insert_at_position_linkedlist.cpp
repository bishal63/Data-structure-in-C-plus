#include<bits/stdc++.h>
using namespace std;
//Node *head=NULL;
class Node
{
    public:
        int value;
        Node *next;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};
void Insert_at_tail(Node *&head,int value)
{
    Node *newNode=new Node(value);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void print_at_linkedlist(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_at_position(Node *head,int position,int value)
{
    Node *newNode=new Node(value);
    Node *temp=head;
    for(int i=1;i<position-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"insert at position"<<endl;
}
int main()
{
    Node *head=NULL;
    while(true)
    {
        cout<<"op-1:Insert at tail"<<endl;
        cout<<"op-2:print at linkedlist"<<endl;
        cout<<"op-3:insert at position"<<endl;
        cout<<"op-4:Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"please enter value";
            int value;
            cin>>value;
            Insert_at_tail(head,value);
        }
        else if(op==2)
        {
            print_at_linkedlist(head);
        }
        else if(op==3)
        {
            cout<<"enter position";
            int position,value;
            cin>>position;
            cout<<"enter value";
            cin>>value;
            insert_at_position(head,position,value);
        }
        else if(op==4)
        {
            break;
        }
    }
    
}