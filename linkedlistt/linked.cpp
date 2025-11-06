#include<iostream>
#include<vector>
#include<unordered_map>
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
struct node*createlist(vector<int>&array1)
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
void print(struct node*head1)
{
while(head1!=NULL)
{
cout<<" "<<head1->data<<" ";
head1=head1->next;
}
}
int main()
{
vector<int>array1={3,1,4,6,2};
vector<int>array2={1,2,4,5,4,6,2};
struct node*head1=createlist(array1);
print(head1);
cout<<endl;
struct node*head2=createlist(array2);
print(head2);
cout<<endl;
struct node*temp=head1;
while(temp!=NULL)
{
if(temp->data==4)
{
break;
}
temp=temp->next;
}
struct node*temp1=head2;
while(temp1->next->next->next!=NULL)
{
temp1=temp1->next;
}
cout<<" "<<temp->data<<" ";
cout<<" "<<temp1->data<<" ";
temp->next=temp1->next;
cout<<endl;
print(head1);
cout<<endl;
print(head2);
unordered_map<struct node*,int>mpp;
temp=head1;
while(temp!=NULL)
{
mpp[temp]=1;
temp=temp->next;
}
temp=head2;
while(temp!=NULL)
{
if(mpp.find(temp)!=mpp.end())
{
cout<<temp->data<<" ";
cout<<endl;
break;
}
mpp[temp]=1;
temp=temp->next;
}
return 0;
}