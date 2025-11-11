#include<iostream>
#include<unordered_map>
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
struct node * CommonNode(struct node*head1,struct node*head2)
{
struct node*temp1;
int count1=0;
int count2=0;
temp1=head1;
while(temp1!=NULL)
{
count1=count1+1;
temp1=temp1->next;
}
struct node*temp2;
temp2=head2;
while(temp2!=NULL)
{
count2+=1;
temp2=temp2->next;
}
int difference;
int i=0;
temp2=head2;
temp1=head1;
if(count1>count2)
{
difference=count1-count2;
while(i<difference)
{
temp1=temp1->next;
i++;
}
}
else
{
difference=count2-count1;
while(i<difference)
{
temp2=temp2->next;
i+=1;
}
}
while(temp1!=NULL)
{
if(temp1==temp2)
{
return temp1;
}
temp1=temp1->next;
temp2=temp2->next;
}
return NULL;
}
int main()
{
vector<int>array1={3,1};
vector<int>array2={1,2,4,5};
vector<int>common={4,6,2};
struct node*head1=createlist(array1);
struct node*head2=createlist(array2);
struct node*head3=createlist(common);
struct node*temp;
temp=head1;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=head3;
temp=head2;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=head3;
print(head1);
cout<<endl;
print(head2);
cout<<endl;
struct node*answer=CommonNode(head1,head2);
cout<<" "<<answer<<" "<<answer->data<<" ";
return 0;
}