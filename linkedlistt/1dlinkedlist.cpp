#include<iostream>
using namespace std;
struct Node 
{
int data;
struct Node*next;
Node(int data1,struct Node*next1)
{
data=data1;
next=next1;
}
Node(int data1)
{
data=data1;
next=nullptr;
}
};
int main()
{
Node *n4=new Node(4);
Node *n3=new Node(3,n4);
Node *n2=new Node(2,n3);
Node *head=new Node(1,n2);
/*while(temp!=NULL)
{
cout<<" "<<temp->data<<" "<<endl;
temp=temp->next;
}*/
struct Node*NewNode=new Node(5);
n4->next=NewNode;
/*struct Node*temp=head;
while(temp!=NULL)
{
cout<<" "<<temp->data<<" "<<endl;
temp=temp->next;
}*/
struct Node*NewNode1=new Node(6);
NewNode1->next=head;
head=NewNode1;
struct Node*temp=head;
while(temp!=NULL)
{
cout<<" "<<temp->data<<" "<<endl;
temp=temp->next;
}
return 0;
}