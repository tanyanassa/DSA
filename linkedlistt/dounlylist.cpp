#include<iostream>
#include<vector>
using namespace std;
struct node
{
int data;
struct node*prev;
struct node*next;
node(int data1,struct node*prev1,struct node*next1)
{
data=data1;
prev=prev1;
next=next1;
}
node()
{
data=0;
prev=nullptr;
next=nullptr;
}
node(int x)
{
data=x;
prev=NULL;
next=NULL;
}
};
struct node* CreateList(vector<int>&array)
{
int n=array.size();
struct node*head=new node(array[0]);
struct node*mover=head;
for(int i=1;i<n;i++)
{
struct node*newnode=new node(array[i]);
mover->next=newnode;
newnode->prev=mover;
mover=mover->next;
}
return head;
} 
struct node * DeleteBegg(struct node * head)
{
if(head==NULL)
{
return head;
}
if(head->next==NULL)
{
return NULL;
}
struct node*temp;
temp=head;
head=head->next;
temp->next=NULL;
head->prev=NULL;
delete temp;
return head;
}
struct node * DeleteEndd(struct node * head)
{
struct node*mover=head;
while(mover->next!=NULL)
{
mover=mover->next;
}
struct node*tail;
tail=mover;
tail=tail->prev;
tail->next=nullptr;
mover->prev=nullptr;
delete mover;
return head;
}
int main()
{
vector<int>array={1,2,3,4,5,6};
struct node*head;
head=CreateList(array);
struct node*traverse=head;
while(traverse!=NULL)
{
cout<<" "<<traverse->data<<" ";
traverse=traverse->next;
}
head=DeleteBegg(head);
traverse=head;
cout<<"after deleting the node from beginning"<<endl;
while(traverse!=NULL)
{
cout<<" "<<traverse->data<<" ";
traverse=traverse->next;
}
head=DeleteEndd(head);
traverse=head;
while(traverse!=NULL)
{
cout<<" "<<traverse->data<<" ";
traverse=traverse->next;
}
return 0;
}