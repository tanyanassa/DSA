#include<iostream>
#include<vector>
using namespace std;
struct node
{
int data;
struct node*next;
struct node*prev;
node(int data1,struct node*prev1,struct node*next1)
{
data=data1;
next=next1;
prev=prev1;
}
node(int data1)
{
data=data1;
prev=NULL;
next=NULL;
}
};
struct node*createlist(vector<int>&array)
{
struct node*head;
head=new node(array[0]);
struct node*moves=head;
for(int i=1;i<array.size();i++)
{
struct node*newnode=new node(array[i]);
moves->next=newnode;
newnode->prev=moves;
moves=moves->next;
}
return head;
}
struct node*InsertFront(struct node*head,int x)
{
struct node*newnode=new node(x);
if(head==NULL)
{
head=newnode;
return head;
}
else
{
newnode->next=head;
head->prev=newnode;
head=newnode;
}
return head;
}
struct node*InsertEnd(struct node*head,int x)
{
struct node*newnode=new node(x);
if(head==NULL)
{
head=newnode;
return head;
}
struct node*moves=head;
while(moves->next!=NULL)
{
moves=moves->next;
}
moves->next=newnode;
newnode->prev=moves;
return head;
}
int main()
{
vector<int>array={1,2,3,4,5,6};
struct node*head;
head=createlist(array);
struct node*moves=head;
while(moves!=NULL)
{
cout<<" "<<moves->data<<" ";
moves=moves->next;
}
int x;
cout<<"enter x"<<endl;
cin>>x;
head=InsertFront(head,x);
struct node*movers;
movers=head;
while(movers->next!=NULL)
{
cout<<" "<<movers->data<<" ";
movers=movers->next;
}
cout<<"enter x"<<endl;
cin>>x;
head=InsertEnd(head,x);
struct node*traversal=head;
while(traversal!=NULL)
{
cout<<" "<<traversal->data<<" ";
traversal=traversal->next;
}
return 0;
}