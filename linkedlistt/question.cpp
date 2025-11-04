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
struct node* createlist(vector<int>&array)
{
int n=array.size();
struct node*head=new node(array[0]);
struct node*mover=head;
struct node*temp=NULL;
for(int i=1;i<array.size();i++)
{
struct node*newnode=new node(array[i]);
if(array[i]==2)
{
temp=newnode;
}
mover->next=newnode;
mover=mover->next;
}
/*mover->next=temp;*/
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
vector<int>array={1,2,3,4,5};
struct node*head=createlist(array);
/*print(head);*/
unordered_map<struct node*,int>mpp;
struct node*temp=head;
while(temp!=NULL)
{
if(mpp.find(temp)!=mpp.end())
{
cout<<"exists"<<endl;
break;
}
mpp[temp]=1;
temp=temp->next;
}
if(temp==NULL)
{
cout<<"doesnt exists"<<endl;
}
return 0;
}