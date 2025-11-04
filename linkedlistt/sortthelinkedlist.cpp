#include<iostream>
#include<algorithm>
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
vector<int>createvector(struct node*head)
{
vector<int>answer;
while(head!=NULL)
{
answer.push_back(head->data);
head=head->next;
}
return answer;
}
int main()
{
vector<int>array={5,6,1,2,1};
struct node*head;
head=createlist(array);
print(head);
vector<int>answer;
answer=createvector(head);
sort(answer.begin(),answer.end());
cout<<"The Final Linked List : "<<endl;
head=createlist(answer);
print(head);
cout<<endl;
return 0;
}