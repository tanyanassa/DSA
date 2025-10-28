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
vector<int>array={1,2,3,4,5,6,7,8};
struct node*head=new node(1);
int n=array.size();
struct node*mover=head;
for(int i=1;i<n;i++)  
{
struct node*newnode=new node(array[i]);
mover->next=newnode;
mover=mover->next;
}
struct node*temp=head;
/*while(temp!=NULL)
{
cout<<" "<<temp->data<<" "<<endl;
temp=temp->next;
}*/
struct node*current=head;
struct node*prev=NULL;
struct node*next;
while(current!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;
struct node*move=head;
while(move!=NULL)
{
cout<<" "<<move->data<<" "<<endl;
move=move->next;
}
return 0;
}