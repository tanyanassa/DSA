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
struct node*ChangingLinks(struct node*head)
{
if(head==NULL || head->next==NULL)
{
return NULL;
}
struct node*evenhead;
struct node*odd;
struct node*even;
odd=head;
even=head->next;
evenhead=even;
while(even!=NULL&&even->next!=NULL)
{
odd->next=odd->next->next;
odd=odd->next;
even->next=even->next->next;
even=even->next;
}
odd->next=evenhead;
return head;
}
int main()
{
vector<int>array={2,3,1,4,5,6};
struct node*head;
head=createlist(array);
print(head);
head=ChangingLinks(head);
print(head);
return 0;
}