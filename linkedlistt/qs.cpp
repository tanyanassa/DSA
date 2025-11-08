#include<iostream>
#include<unordered_map>
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
struct node*CommonNode(struct node*head1,struct node*head2)
{
struct node*temp=head1;
unordered_map<struct node*,int>mpp;
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
return temp;
}
mpp[temp]=1;
temp=temp->next;
}
return NULL;
}
int main()
{
vector<int>array1={3,1};
vector<int>array2={1,2,4,5};
vector<int>common={4,6,2};
struct node*head1=createlist(array1);
struct node*head2=createlist(array2);
struct node*head3=createlist(common);
struct node*temp;
temp=head1;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=head3;
temp=head2;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=head3;
print(head1);
cout<<endl;
print(head2);
cout<<endl;
struct node*answer=CommonNode(head1,head2);
cout<<" "<<answer<<" "<<answer->data<<" ";
return 0;
}