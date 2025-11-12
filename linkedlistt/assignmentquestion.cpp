#include<iostream>
#include<vector>
using namespace std;
struct node
{
char data;
struct node*next;
node(char data1,struct node*next1)
{
data=data1;
next=next1;
}
node(char data1)
{
data=data1;
next=nullptr;
}
};
struct node*createlist(vector<char>&array)
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
vector<char>array1={'a','b','c','d','e','f','g','h','i'};
struct node*head=createlist(array1); 
print(head);
cout<<endl;
struct node*dummynode1=new node('#');
struct node*dummynode2=new node('#');
struct node*vowelhead=dummynode1;
struct node*consonanthead=dummynode2;
struct node*temp=head;
struct node*newnode;
struct node*nextnode;
while(temp!=NULL)
{
if(temp->data=='a'||temp->data=='e'||temp->data=='i'||temp->data=='o'||temp->data=='u')
{
dummynode1->next=temp;
dummynode1=dummynode1->next;
nextnode=temp->next;
temp->next=NULL;
temp=nextnode;
}
else
{
dummynode2->next=temp;
dummynode2=dummynode2->next;
nextnode=temp->next;
temp->next=NULL;
temp=nextnode;
}
}
vowelhead=vowelhead->next;
consonanthead=consonanthead->next;
dummynode1->next=consonanthead;
cout<<endl;
cout<<" the final linked list is as ";
print(vowelhead);
cout<<endl;
return 0;
}