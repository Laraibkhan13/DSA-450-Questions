#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;;
    }
    
};

void insertathead(Node* &head , int d )
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head)
{
     Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatmiddle(Node* &head , int position, int d)
{
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    Node* middlenode=new Node(d);
    middlenode->next=temp->next;
    temp->next=middlenode;



}
void deletenode(int position, Node* &head)
{
    Node*temp=head;
    if(position==1)
    {   Node*temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node*cur=head;
        Node*prev=NULL;
        int cnt=1;
        if(cnt<position)
        {
            prev=cur;
            cur=cur->next;
            cnt++;
        }
        prev->next=cur->next;
        cur->next=NULL;
        delete cur;
    }

}

int main()
{
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    
    Node* head=node1;
    print(head);
    insertathead(head,12);
  
    insertathead(head,16);
    insertatmiddle(head,3,30);
    // deletenode(4,head);
    print(head);
    
    return 0;

}