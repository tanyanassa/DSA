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
int left=2;
int right=4;
struct node*temp1=NULL;
struct node*temp2=NULL;
struct node*leftt;
struct node*rightt;
struct node*temp=head;
int i=1;
while(i<left)
{
temp1=temp;
temp=temp->next;
i++;
}
leftt=temp;
cout<<endl;
cout<<"leftt->data"<<" "<<leftt->data<<" "<<endl;
cout<<"temp1->data"<<" "<<temp1->data<<" "<<endl;
i=1;
while(i<right-1)
{
temp=temp->next;
i++;
temp2=temp->next;
}
rightt=temp;
cout<<"right->data"<<" "<<rightt->data<<endl;
cout<<"temp2->data"<<" "<<temp2->data<<endl;
cout<<endl;
rightt->next==NULL;
temp1->next=NULL;
struct node*previous=NULL;
struct node*current=leftt;
struct node*next=NULL;
while(current!=NULL)
{
next=current->next;
current->next=previous;
previous=current;
current=next;
} 
temp=previous;
while(temp!=NULL)
{
temp=temp->next;
}
temp1->next=temp;
previous->next=temp2;
cout<<endl;
print(head);
return 0;
}