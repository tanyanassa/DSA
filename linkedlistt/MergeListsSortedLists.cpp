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
struct node * createList(vector<int> &array1)
{
struct node*head=new node(array1[0]);
struct node*mover=head;
for(int i=1;i<array1.size();i++)
{
struct node*newnode=new node(array1[i]);
mover->next=newnode;
mover=mover->next;
}
return head;
}
vector<int> MergeList(struct node*head1 , struct node*head2)
{
struct node*head;
struct node*newnode;
struct node*temp1=head1;
struct node*temp2=head2;
vector<int>ans;
while(temp1!=NULL && temp2!=NULL)
{
if(temp1->data<temp2->data)
{
ans.push_back(temp1->data);
temp1=temp1->next;
}
else if(temp2->data<temp1->data)
{
ans.push_back(temp2->data);
temp2=temp2->next;
}
else{
ans.push_back(temp1->data);
temp1=temp1->next;
ans.push_back(temp2->data);
temp2=temp2->next;
}
}
if(temp1==NULL)
{
while(temp2!=NULL)
{
ans.push_back(temp2->data);
temp2=temp2->next;
}
}
else
{
while(temp1!=NULL)
{
ans.push_back(temp1->data);
temp1=temp1->next;
}
}
return ans;
}
int main()
{
vector<int> array1={1,2,4};
vector<int>array2={1,3,4};
struct node*head1;
struct node*head2;
head1=createList(array1);
cout<<"Linked List One Is"<<endl;
struct node*mover;
mover=head1;
while(mover!=NULL)
{
cout<<" "<<mover->data<<" ";
mover=mover->next;
}
cout<<"Linked List Two Is"<<endl;
head2=createList(array2);
mover=head2;
while(mover!=NULL)
{
cout<<" "<<mover->data<<" ";
mover=mover->next;
}
vector<int>ans;
ans=MergeList(head1,head2);
int n;
n=ans.size();
int i;
cout<<"the final answer is : "<<endl;
for(i=0;i<n;i++)
{
cout<<ans[i]<<endl;
}
return 0;
}