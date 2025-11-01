#include<iostream>
#include<vector>
using namespace std;
struct node
{
int data;
struct node*next;
struct node*prev;
node(int data1,struct node*next1,struct node*prev1)
{
data=data1;
prev=prev1;
next=next1;
}
node(int data1)
{
data=data1;
prev=nullptr;
next=nullptr;
}
};
struct node * createlist(vector<int>&array)
{
struct node*head=new node(array[0]);
struct node*mover=head;
for(int i=1;i<array.size();i++)
{
struct node * newnode = new node(array[i],nullptr,mover);
mover->next=newnode;
mover=mover->next;
}
return head;
}
void print(struct node * head)
{
while(head!=NULL)
{
cout<<" "<<head->data<<" ";
head=head->next;
}
}
struct node * deletebyposition(struct node * head,int k)
{
struct node * temp=head;
int count=0;
while(temp!=NULL)
{
count+=1;
if(count==k)
{
break;
}
temp=temp->next;
}
struct node * prev=temp->prev;
struct node *front=temp->next;
if(prev==NULL && front == NULL)
{
delete temp;
return NULL;
}
else if(prev==NULL)
{
head=head->next;
if(head!=NULL)
{
head->prev=NULL;
}
else if(front==NULL)
{
prev->next=NULL;
temp->prev=NULL;
delete temp;
}
else
{
prev->next=front;
front->prev=prev;
temp->next=NULL;
temp->prev=NULL;
delete temp;
}
}
return head;
}
int main()
{
vector<int>array={1,2,3,4,5,6};
struct node*head;
head=createlist(array);
print(head);
int k;
cout<<"enter k"<<endl;
cin>>k;
head=deletebyposition(head,k);
return 0;
}