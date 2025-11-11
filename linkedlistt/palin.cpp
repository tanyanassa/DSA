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
vector<int>array={1,2,3,4,5};
struct node*head=createlist(array);
print(head);
cout<<endl;
int k;
cout<<"enter k";
cin>>k;
vector<int>array1;
int count=0;
struct node*temp=head;
while(temp!=NULL)
{
count=count+1;
temp=temp->next;
}
temp=head;
int movers;
movers=count-k;
int i=0;
while(i<movers)
{
temp=temp->next;
i++;
}
while(temp!=NULL)
{
array1.push_back(temp->data);
temp=temp->next;
}
cout<<"the array elements are as the follows"<<endl;
for(auto i : array1)
{
cout<<" "<<i<<" ";
}
cout<<endl;
struct node*head1=createlist(array1);
print(head1);
cout<<endl;
struct node*temp1=head1;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
cout<<" "<<temp1->data<<" ";
temp=head;
i=0;
while(i<count-k-1)
{
temp=temp->next;
i++;
}
temp->next=head1;
cout<<endl;
print(head);
cout<<endl;
return 0;
}
