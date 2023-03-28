#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;


    }
};

void print(Node* &head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getlength(Node* head)
{
    Node*temp=head;
    int length=0;
    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    return length;

}
void insertathead(Node* &head,int d)
{
 Node*temp=new Node(d);
 temp->next=head;
 head->prev=temp;
 head=temp;
 
}
void insertattail(Node* &tail,int d)
{
    Node*temp=new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;

}
void insertatany(Node*&head,Node*&tail,int d,int pos)
{
    if(pos==1)
    {
        insertathead(head,d);
        return;
    }
    Node*temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
    }
    Node*nodetoinsert= new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev= temp;



}

int main()
{
    Node*node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    
    insertathead(head,11);
    insertattail(tail,25);
    insertatany(head,tail,30,1);
   
    print(head);
    cout<<getlength(head);
    

}