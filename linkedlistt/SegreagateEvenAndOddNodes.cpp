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
struct node*head=new node(array[0]);
struct node*mover=head;
for(int i=1;i<array.size();i++)
{
struct node*newnode= new node(array[i]);
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
vector<int> SegregateNumbers(struct node * head)
{
vector<int>answer;
struct node*temp=head;
while(temp!=NULL)
{
if(temp->data%2!=0)
{
answer.push_back(temp->data);
}
temp=temp->next;
}
temp=head;
while(temp!=NULL)
{
if(temp->data%2==0)
{
answer.push_back(temp->data);
}
temp=temp->next;
}
return answer;
}
int main()
{
vector<int>array={1,2,3,4,5};
struct node*head=createlist(array);
cout<<"The Linked List Is"<<endl;
print(head);
cout<<endl;
vector<int>answer;
answer=SegregateNumbers(head);
cout<<"The Answer Of Vector Is As"<<endl;
for(auto i : answer)
{
cout<<" "<<i<<" ";
}
cout<<"The Final Linked List"<<endl;
head=createlist(answer);
print(head);
return 0;
}