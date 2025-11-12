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
int main()
{
vector<int>array={1,4,3,2,5,2};
struct node*head=createlist(array);
print(head);
struct node*dummynode1=new node(-1);
struct node*dummynode2=new node(-1);
struct node*smallerhead=dummynode1;
struct node*largerhead=dummynode2;
int x=3;
struct node*temp=head;
struct node*nextnode;
while(temp!=NULL)
{
if(temp->data<x)
{
dummynode1->next=temp;
nextnode=temp->next;
temp->next=NULL;
dummynode1=dummynode1->next;
temp=nextnode;
}
else
{
dummynode2->next=temp;
nextnode=temp->next;
dummynode2=dummynode2->next;
temp->next=NULL;
temp=nextnode;
}
}
cout<<endl;
smallerhead=smallerhead-> next;
largerhead=largerhead->next;
dummynode1->next=largerhead;
cout<<endl;
cout<<"the final linked list is as"<<endl;
print(smallerhead);

return 0;
}
