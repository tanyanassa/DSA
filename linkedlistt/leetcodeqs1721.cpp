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
next=nullptr;
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
int k=2;
struct node*temp=head;
int i=1;
while(i<k)
{
temp=temp->next;
i++;
}
struct node*temp1=head;
int count=0;
while(temp1!=NULL)
{
count=count+1;
temp1=temp1->next;
}
int left;
left=count-k;
i=1;
temp1=head;
while(i<left+1)
{
temp1=temp1->next;
i++;
}
cout<<endl;
cout<<"temp->data"<<" "<<temp->data<<endl;
cout<<"temp1->data"<<" "<<temp1->data<<endl;
int value1;
int value2;
value1=temp->data;
value2=temp1->data;
temp->data=value2;
temp1->data=value1;
cout<<endl;
cout<<"the final linked list is as : "<<endl;
cout<<endl;
print(head);
cout<<endl;
return 0;
}