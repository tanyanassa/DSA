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
struct node* removeduplicates(struct node*head)
{
struct node*temp1;
struct node*temp2;
temp1=head;
temp2=head->next;
while(temp2!=NULL)
{
if(temp1->data!=temp2->data)
{
temp1->next=temp2;
temp1=temp1->next;
}
temp2=temp2->next;
}
return head;
}
int main()
{
vector<int>array={1,1,2};
struct node*head=createlist(array);
print(head);
head=removeduplicates(head);
print(head);
return 0;
}