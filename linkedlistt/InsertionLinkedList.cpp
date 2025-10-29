#include<iostream>
#include<vector>
using namespace std; 
struct node{
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
struct node* InsertHead(struct node * head,int value)
{
struct node*newnode=new node(value);
if(head==NULL)
{
head=newnode;
return head;
}
newnode->next=head;
head=newnode;
return head;
}
struct node *InsertEnd(struct node * head,int value)
{
struct node * newnode=new node(value);
if(head==NULL)
{
head=newnode;
return head;
}
if(head->next==NULL)
{
head->next=newnode;
newnode->next=NULL;
return head;
}
struct node*temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
return head;
}
int main()
{
vector<int> array = {1,2,3,4,5,6,7,8,9,10};
struct node*head= new node(1);
int n=array.size();
struct node*move;
move=head;
for(int i=1;i<n;i++)
{
struct node*newnode=new node(array[i]);
move->next=newnode;
move=move->next;
}
struct node*traverse=head;
while(traverse!=NULL)
{
cout<<" "<<traverse->data<<" ";
traverse=traverse->next;
}
int value;
cout<<"enter the value here"<<endl;
cin>>value;
head=InsertHead(head,value);
struct node * temp;
temp=head;
cout<<"after inserting at starting position we get linked list"<<endl;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
head=InsertEnd(head,value);
cout<<"enter value"<<endl;
cin>>value;
temp=head;
cout<<"After Inserting the value at the end of the linked list"<<endl;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
return 0;
}

