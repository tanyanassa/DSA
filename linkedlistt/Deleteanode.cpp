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
int main()
{
vector<int> array={4,5,1,9};
int n=array.size();
struct node*head=new node(4);
struct node*mover=head;
for(int i=1;i<n;i++)
{
struct node*newnode=new node(array[i],mover);
mover->next=newnode;
mover=newnode;
}
struct node*temp=head;
while(temp!=NULL)
{
cout<<temp->data<<endl;
temp=temp->next;
}
return 0;
}