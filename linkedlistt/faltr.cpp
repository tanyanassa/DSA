#include<iostream>
#include<vector>
using namespace std;
struct node
{
int data;
struct node*next;
struct node*bottom;
node(int data1,struct node*next1,struct node*bottom1)
{
data=data1;
next=next1;
bottom=bottom1;
}
node(int data1)
{
data=data1;
next=nullptr;
bottom=nullptr;
}
};
struct node*createbottom(vector<int>&array1)
{
struct node*head=new node(array1[0]);
struct node*mover=head;
for(int i=1;i<array1.size();i++)
{
struct node*newnode=new node(array1[i]);
mover->bottom=newnode;
mover=mover->bottom;
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
temp=temp->bottom;
}
cout<<endl;
head=head->next;
}
}
int main()
{
vector<vector<int>>array={{4,9},{5,6,8}};
struct node*head=createbottom(array[0]);
struct node*temp=head;
for(int i=1;i<array.size();i++)
{
temp->next=createbottom(array[i]);
temp=temp->next;
}
print(head);
struct node*t1=head;
struct node*t2=head->next;
cout<<"t1->data"<<t1->data<<endl;
cout<<"t2->data"<<t2->data<<endl;
struct node*dummynode1=new node(-1);
struct node*current=dummynode1;
struct node*bottom;
while(t1!=NULL && t2!=NULL)
{
if(t1->data<t2->data)
{
current->bottom=t1;
t1=t1->bottom;
current=current->bottom;
}
else{
current->bottom=t2;
t2=t2->bottom;
current=current->bottom;
}
}
if(t2==NULL)
{
current->bottom=t1;
}
else
{
current->bottom=t2;
}
cout<<"the final linked list";
cout<<endl;
struct node*mover=dummynode1->bottom;
while(mover!=NULL)
{
cout<<" "<<mover->data<<" ";
mover=mover->bottom;
}
return 0;
}