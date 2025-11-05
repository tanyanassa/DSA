#include<iostream>
#include<vector>
using namespace std;
struct node
{
int data;
struct node*next;
node(int data1,struct node*next1)
{
data=data1;
next=next1;
}
node(int data1)
{
data=data1;
next=nullptr;
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
mover=mover->next;
}
return head;
}
void print(struct node*head)
{
while(head!=NULL)
{
cout<<" "<<head->data<<" ";
head=head->next;
}
}
struct node * findmiddle(struct node*head)
{
struct node*fast=head;
struct node*slow=head;
while(fast->next!=NULL && fast->next->next!=NULL)
{
fast=fast->next->next;
slow=slow->next;
}
return slow;
}
struct node*merge(struct node*lefthead,struct node*righthead)
{
if(lefthead==NULL)
{
return righthead;
}
if(righthead==NULL)
{
return lefthead;
}
struct node*result;
result=NULL;
if(lefthead->data<=righthead->data)
{
result=lefthead;
result->next=merge(lefthead->next,righthead);
}
else{
result=righthead;
result->next=merge(lefthead,righthead->next);
}
return result;
}
struct node * mergesort(struct node*head)
{
if(head==NULL||head->next==NULL)
{
return head;
}
struct node*mid=findmiddle(head);
struct node*lefthead=head;
struct node*righthead=mid->next;
mid->next=NULL;
lefthead=mergesort(lefthead);
righthead=mergesort(righthead);
return merge(lefthead,righthead);
}
int main()
{
vector<int>array={5,4,3,2,1};
struct node*head=createlist(array);
print(head);
cout<<endl;
struct node*ans=mergesort(head);
print(ans);
return 0;
}

