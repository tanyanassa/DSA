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
struct node*newnode= new node(array[i]);
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
struct node*mid(struct node*head)
{
int count=0;struct node*temp=head;
while(temp!=NULL)
{
temp=temp->next;
count++;
}
int middle=(count)/2+1;
temp=head;
while(--middle)
{
temp=temp->next;
}
return temp;
}
int main()
{
vector<int>array={1,2,3,4,5};
struct node*head;
head=createlist(array);
print(head);
struct node*middle=mid(head);
cout<<endl;
cout<<"the middle node is as the following"<<endl;
cout<<middle->data;
cout<<endl;
vector<int>array1={1,2,3,4,5,6};
cout<<endl;
head=createlist(array1);
print(head);
middle=mid(head);
cout<<"the middle node is as the following"<<middle->data<<endl;
cout<<endl;
return 0;
}