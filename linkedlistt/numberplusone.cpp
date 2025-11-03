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
int count(struct node*head)
{
int number=0;
while(head!=NULL)
{
number=(number*10)+head->data;
head=head->next;
}
return number;
}
struct node * reversethelinkedlist(struct node * head)
{
struct node * previous=NULL;
struct node * current=head;
struct node * next=NULL;
while(current!=NULL)
{
next=current->next;
current->next=previous;
previous=current;
current=next;
}
return previous;
}
int main()
{
vector<int>array={9,9};
struct node*head=createlist(array);
print(head);
cout<<endl;
int number=count(head);
cout<<number;
cout<<endl;
int numberplusone=number+1;
cout<<numberplusone;
vector<int>answer;
while(numberplusone!=0)
{
answer.push_back(numberplusone%10);
numberplusone=numberplusone/10;
}
cout<<endl;
for(auto i : answer)
{
cout<<" "<<i<<" ";
}
cout<<endl;
head=createlist(answer);
cout<<endl;
print(head);
cout<<endl;
cout<<"The Final Linked List Is As"<<endl;
cout<<endl<<"Final Answer Linked List"<<endl;
head=reversethelinkedlist(head);
cout<<endl;
cout<<endl;
print(head);
cout<<endl;
cout<<endl;
return 0;
}