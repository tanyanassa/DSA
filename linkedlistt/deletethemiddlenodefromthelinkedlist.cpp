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
struct node * createlist(vector<int>array)
{
struct node * head = new node(array[0]);
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
struct node * findmiddle(struct node * head)
{
struct node*fast=head;
struct node*slow=head;
while(fast!=NULL && fast->next!=NULL)
{
fast=fast->next->next;
slow=slow->next;
}
return slow;
}
struct node*deletenode(struct node*head,struct node*middle)
{
struct node*next=middle->next;
struct node*nextt=middle->next->next;
middle->data=next->data;
middle->next=nextt;
next->next=NULL;
return head;
}
int main()
{
vector<int>array={1,3,4,7,1,2,6};
struct node*head=createlist(array);
cout<<"the linked list is"<<endl;
print(head);
struct node*middle=findmiddle(head);
cout<<endl;
cout<<" "<<"middle node"<<" "<<middle->data<<" ";
cout<<"Linked List After Deleting The Middle Node Is"<<endl;
struct node*remove=deletenode(head,middle);
print(remove);
vector<int>array2={1,2,3,4};
head=createlist(array2);
cout<<endl;
cout<<"The Second List Is"<<endl;
print(head);
cout<<endl;
middle=findmiddle(head);
cout<<" "<<middle->data<<" ";
remove=deletenode(head,middle);
cout<<endl;
print(head);
return 0;
}