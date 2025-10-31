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
prev=prev1;
next=next1;
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
struct node*head=new node(array[0]);
struct node*mover=head;
for(int i=1;i<array.size();i++)
{
struct node*newnode=new node(array[i]);
mover->next=newnode;
newnode->prev=mover;
mover=mover->next;
}
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
return 0;
}