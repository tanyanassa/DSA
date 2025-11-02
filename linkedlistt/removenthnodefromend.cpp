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
struct node* remove(struct node*head,int n)
{
int count=0;
struct node*temp=head;
while(temp!=NULL)
{
temp=temp->next;
count+=1;
}
int left=count-n;
int i=1;
struct node*mover=head;
while(i<left)
{
mover=mover->next;
i+=1;
}
struct node*next;
struct node*nextt;
next=mover->next;
nextt=mover->next->next;
mover->next=nextt;
next->next=NULL;
return head;
}
int main()
{
vector<int>array={1,2,3,4,5};
cout<<"the list created is as"<<endl;
struct node*head=createlist(array);
print(head);
int n;
cout<<"enter n"<<endl;
cin>>n;
struct node*final;
final=remove(head,n);
cout<<"the final list after the removal is as the"<<endl;
print(final);
return 0;
}