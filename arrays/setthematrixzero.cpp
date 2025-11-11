#include<iostream>
#include<vector>
#include<map>
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
vector<int>array={1,2,3,3,4,4,5};
struct node*head=createlist(array);
print(head);
map<int,int>mpp;
struct node*temp=head;
cout<<endl;
while(temp!=NULL)
{
mpp[temp->data]++;
temp=temp->next;
}
for(auto i : mpp)
{
cout<<" "<<i.first<<" "<<i.second;
}
vector<int>array1;
temp=head;
for(auto i : mpp)
{
if(i.second==1)
{
array1.push_back(i.first);
}
}
cout<<endl;
for(auto i:array1)
{
cout<<" "<<i<<" ";
}
cout<<endl;
head=createlist(array1);
cout<<endl;
print(head);
cout<<endl;
return 0;
}