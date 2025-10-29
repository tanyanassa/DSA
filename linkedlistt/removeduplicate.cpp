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
struct node * RemoveDuplicates(struct node * head)
{
struct node*temp=head;
struct node*moves=temp->next;
while(moves->next!=NULL)
{
while(moves->data==temp->data && moves->next!=NULL)
{
moves=moves->next;
}
temp->next=moves;
temp=moves;
moves=moves->next;
}
return head;
}
int main()
{
vector<int> array={1,2,2,3,3};
struct node*head=new node(1);
struct node*mover=head;
int n=array.size();
for(int i=1;i<n;i++)
{
struct node*newnode=new node(array[i]);
mover->next=newnode;
mover=newnode;
}
struct node*Traverse;
Traverse=head;
/*while(Traverse!=NULL)
{
cout<<Traverse->data<<" ";
Traverse=Traverse->next;
}*/
head=RemoveDuplicates(head);
cout<<"After Removing The Duplicates From The Sorted List"<<endl;
Traverse=head;
while(Traverse!=NULL)
{
cout<<" "<<Traverse->data<<" ";
Traverse=Traverse->next;
}
return 0;
}