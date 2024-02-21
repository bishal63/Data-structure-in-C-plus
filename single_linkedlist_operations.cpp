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
    for(int i=0;i<position-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void inser_at_head(Node *&head,int value)
{
    Node *newNode=new Node(value);
    newNode->next=head;
    head=newNode;
}
void delete_at_position(Node *head,int position)
{
    Node *temp=head;
    for(int i=0;i<position-1;i++)
    {
        temp=temp->next;
    }
    Node *deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}
void delete_at_head(Node *&head)
{
    Node *deleteNode=head;
    head=head->next;
    delete deleteNode;
}
int main()
{
    Node *head=NULL;
    while(true)
    {
        cout<<"op-1:Insert at tail"<<endl;
        cout<<"op-2:print at linkedlist"<<endl;
        cout<<"op-3:insert at position"<<endl;
        cout<<"op-4:insert at head"<<endl;
        cout<<"op-5:delete at position"<<endl;
        cout<<"op-6:delete at head"<<endl;
        cout<<"op-7:Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"please enter value";
            int value;
            cin>>value;
            Insert_at_tail(head,value);
            cout<<"inserted tail"<<endl;
        }
        else if(op==2)
        {
            print_at_linkedlist(head);
            cout<<"printed linklist"<<endl;
        }
        else if(op==3)
        {
            cout<<"enter position";
            int position,value;
            cin>>position;
            cout<<"enter value";
            cin>>value;
            if(position==0)
            {
                inser_at_head(head,value);
            }
            else
            {
                insert_at_position(head,position,value);
            }
            cout<<"inserted position"<<endl;
        }
        else if(op==4)
        {
            int value;
            cout<<"enter value";
            cin>>value;
            inser_at_head(head,value);
            cout<<"inserted head"<<endl;
        }
        else if(op==5)
        {
            int position;
            cout<<"enter position"<<endl;
            cin>>position;
            delete_at_position(head,position);
            cout<<"deleted position"<<endl;          
        }
        else if(op==6)
        {
            delete_at_head(head);
            cout<<"deleted head"<<endl;
        }
        else if(op==7)
        {
            break;
        }
    }
    
}