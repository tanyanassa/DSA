#include<iostream>
#include<vector>
using namespace std;
struct node
{
int data;
struct node*next;
struct node*prev;
node(int data1)
{
data=data1;
prev=nullptr;
next=nullptr;
}
node(int data1,struct node*prev1,struct node*next1)
{
data=data1;
next=next1;
prev=prev1;
}
};
struct node * createlist(vector<int>&array)
{
struct node * head=new node(array[0]);
struct node * movers=head;
for(int i=1;i<array.size();i++)
{
struct node * newnode=new node(array[i],movers,nullptr);
movers->next=newnode;
movers=movers->next;
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
struct node * inserthead(struct node * head,int x)
{
struct node * newnode=new node(x);
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
struct node * insertend(struct node * head,int x)
{
struct node * newnode=new node(x);
if(head==NULL)
{
head=newnode;
return head;
}
struct node * tail;
tail=head;
while(tail->next!=NULL)
{
tail=tail->next;
}
tail->next=newnode;
newnode->prev=tail;
return head;
}
struct node * insertb4rtail(struct node * head,int x)
{
struct node * newnode=new node(x);
if(head==NULL)
{
head=newnode;
}
struct node * tail;
tail=head;
while(tail->next!=NULL)
{
tail=tail->next;
}
struct node*previous;
previous=tail->prev;
previous->next=newnode;
newnode->prev=previous;
newnode->next=tail;
tail->prev=newnode;
return head;
}
struct node * insertbeforekthnode(struct node * head,int x,int k)
{
struct node * temp = head;
int count=0;
while(temp!=NULL)
{
count++;
if(count==k)
{
break;
}
temp=temp->next;
}
struct node * previous = temp->prev;
struct node * newnode=new node(x,previous,temp);
previous->next=newnode;
newnode->next=temp;
return head;
}
struct node * insertbeforenode(struct node*head,struct node *index,int x)
{
struct node*previous=index->prev;
struct node *newnode=new node(x,previous,index);
previous->next=newnode;
newnode->next=index;
return head;
}
int main()
{
vector<int>array={1,2,3,4,5,6};
struct node*head=createlist(array);
print(head);
cout<<endl;
cout<<"after inserting at beginning"<<endl;
head=inserthead(head,7);
print(head);
cout<<endl;
cout<<"after inserting at end"<<endl;
head=insertend(head,9);
print(head);
cout<<endl;
cout<<"after inserting before tail"<<" "<<endl;
head=insertb4rtail(head,12);
print(head);
cout<<endl;
cout<<"after inserting before the kth node"<<endl;
head=insertbeforekthnode(head,20,3);
print(head);
cout<<endl;
cout<<"after inserting before node"<<endl;
head=insertbeforenode(head,head->next,30);
print(head);
return 0;
}