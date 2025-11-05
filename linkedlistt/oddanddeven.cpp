#include<iostream>
#include<vector>
#include<list>
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
vector<int>array={1,3,4,2,5,6};
struct node*head;
head=createlist(array);
print(head);
list<int>ll;
struct node*temp;
temp=head;
while(temp!=NULL)
{
ll.push_back(temp->data);
temp=temp->next->next;
}
temp=head->next;
while(temp!=NULL)
{
ll.push_back(temp->data);
if(temp->next==NULL)
{
break;
}
temp=temp->next->next;
}
cout<<"The List Is As : "<<endl;
for(auto i : ll)
{
cout<<" "<<i<<" ";
}
temp=head;
cout<<endl;
for(auto i : ll)
{
temp->data=i;
temp=temp->next;
}
cout<<endl;
print(head);
return 0;
}