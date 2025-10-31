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
struct node * CreateList(vector <int> &array)
{
struct node*head=new node(array[0]);
struct node*mover=head;
int n=array.size();
for(int i=1;i<n;i++)
{
struct node*newnode=new node(array[i]);
mover->next=newnode;
mover=mover->next;
}
return head;
}
struct node *ReturnMid(struct node*head)
{
struct node*fast;
struct node*slow;
slow=head;
fast=head;
while(fast!=NULL)
{
fast=fast->next->next;
slow=slow->next;
}
return slow;
}
int main()
{
vector<int>array={1,2,3,4,5,6};
struct node*head;
head=CreateList(array);
struct node*moves=head;
while(moves!=NULL)
{
cout<<" "<<moves->data<<" ";
moves=moves->next;
}
struct node*mid;
mid=ReturnMid(head);
cout<<" "<<"mid of the linked list is as"<<mid->data<<" ";
return 0;
}