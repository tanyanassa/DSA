#include<iostream>
#include<vector>
using namespace std;
struct node
{
int data;
struct node*next;
struct node*child;
node(int data1,struct node*next1,struct node*child1)
{
data=data1;
next=next1;
child=child1;
}
node(int data1)
{
data=data1;
next=nullptr;
child=nullptr;
}
};
struct node*createbottom(vector<int>&array)
{
struct node*head=new node(array[0]);
struct node*temp=head;
for(int i=1;i<array.size();i++)
{
struct node*newnode=new node(array[i]);
temp->child=newnode;
temp=temp->child;
}
return head;
}
void print(struct node*head)
{
while(head!=NULL)
{
struct node*temp=head;
while(temp!=NULL)
{
cout<<" "<<temp->data<<" ";
temp=temp->child;
}
cout<<endl;
head=head->next;
}
}
int main()
{
vector<vector<int>> array = {{3},{2,10},{1,7,11,12},{4,9},{5,6,8}};
struct node*head=createbottom(array[0]);
struct node*temp=head;
for(int i=1;i<array.size();i++)
{
temp->next=createbottom(array[i]);
temp=temp->next;
}
print(head);
return 0;
}