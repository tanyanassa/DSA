#include<iostream>
#include<vector>
#include<stack>
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
vector<int>array={1,3,2,5};
struct node*head;
head=createlist(array);
print(head);
stack<int>ss;
struct node*temp=head;
while(temp!=NULL)
{
ss.push(temp->data);
temp=temp->next;
}
cout<<"the data in the stack"<<endl;
stack<int>copy(ss);
vector<int>answer;
while(!copy.empty())
{
cout<<copy.top();
answer.push_back(copy.top());
copy.pop();
}
cout<<endl;
cout<<" the answers in vectors "<<endl;
cout<<endl;
for(auto i : answer)
{
cout<<" "<<i<<" ";
}
cout<<endl;
head=createlist(answer);
print(head);
cout<<endl;
return 0;
}