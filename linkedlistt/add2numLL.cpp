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
struct node*FinalListt(struct node*head1,struct node*head2)
{
struct node*head;
struct node*dummynode=new node(-1);
struct node*current=dummynode;
struct node*temp1=head1;
struct node*temp2=head2;
int carry=0;
int sum=0;
while(temp1!=NULL || temp2!=NULL)
{
if(temp1!=NULL && temp2!=NULL)
sum=temp1->data+temp2->data+carry;
if(temp1==NULL&& temp2!=NULL)
sum=temp2->data+carry;
if(temp2==NULL && temp1!=NULL)
sum=temp1->data+carry;
struct node*newnode=new node(sum%10);
carry=sum/10;
current->next=newnode;
current=current->next;
temp1=temp1->next;
temp2=temp2->next;
}
if(carry>0
head=dummynode->next;
return head;
}
int main()
{
vector<int>array1={3,5};
struct node*head1=createlist(array1);
print(head1);
cout<<endl;
vector<int>array2={4,5,9,9};
struct node*head2=createlist(array2);
print(head2);
cout<<endl;
cout<<"The Final Linked List"<<endl;
struct node*FinalList=FinalListt(head1,head2);
print(FinalList);
cout<<endl;
return 0;
}
