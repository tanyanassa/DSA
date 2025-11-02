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
struct node * createlist(vector<int>&array)
{
struct node * head= new node(array[0]);
struct node* mover=head;
for(int i=1;i<array.size();i++)
{
struct node * newnode=new node(array[i]);
mover->next=newnode;
mover=mover->next;
}
return head;
}
void print(struct node * head)
{
while(head!=NULL)
{
cout<<" "<<head->data<<" ";
head=head->next;
}
}
struct node * Reverse(struct node * temp)
{
struct node * head=temp;
struct node*previous=NULL;
struct node*next;
while(temp!=NULL)
{
next=temp->next;
temp->next=previous;
previous=temp;
temp=next;
}
return previous;
}
bool CheckPalindrome(struct node * head)
{
struct node*temp=head;
int count=0;
while(temp!=NULL)
{
count+=1;
temp=temp->next;
}
struct node * fast=head;
struct node * slow=head;
while(fast!=NULL && fast->next!=NULL)
{
fast=fast->next->next;
slow=slow->next;
}
struct node * reverse;
if(count%2==0)
{
reverse=Reverse(slow);
}
else{
reverse=Reverse(slow->next);
}
while(reverse!=NULL)
{
if(head->data!=reverse->data)
{return false;}
head=head->next;
reverse=reverse->next;
}
return true;
}
int main()
{
vector<int>array={1,2};
struct node*head;
head=createlist(array);
print(head);
int q;
q=CheckPalindrome(head);
cout<<"Check Palindrome Linked List"<<q<<endl;
return 0;
}