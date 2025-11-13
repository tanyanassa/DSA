#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct node
{
int data;
struct node*next;
struct node*bottom;
node(int data1)
{
data=data1;
next=nullptr;
bottom=nullptr;
}
};
struct node*createbottom(vector<int>&array)
{
struct node*head=new node(array[0]);
struct node*temp=head;
for(int i=1;i<array.size();i++)
{
struct node*newnode=new node(array[i]);
temp->bottom=newnode;
temp=temp->bottom;
}
return head;
}
void print(struct node*head)
{
while(head!=NULL)
{
struct node*temp1=head;
while(temp1!=NULL)
{
cout<<" "<<temp1->data<<" ";
temp1=temp1->bottom;
}
cout<<endl;
head=head->next;
}
}
struct node*createverticalist(vector<int>&arrayy)
{
struct node*head=new node(arrayy[0]);
struct node*mover=head;
for(int i=1;i<arrayy.size();i++)
{
struct node*newnode=new node(arrayy[i]);
mover->bottom=newnode;
mover=mover->bottom;
}
return head;
}
int main()
{
vector<vector<int>>array={{4,9},{5,6,8}};
struct node*head=createbottom(array[0]);
struct node*temp=head;
for(int i=1;i<array.size();i++)
{
temp->next=createbottom(array[i]);
temp=temp->next;
}
print(head);
vector<int>arrayy;
/*temp=head;
while(temp!=NULL)
{
struct node*temp1=temp;
while(temp1!=NULL)
{
arrayy.push_back(temp1->data);
temp1=temp1->bottom;
}
temp=temp->next;
}
for(auto i : arrayy)
{
cout<<" "<<i<<" ";
}
cout<<endl;
sort(arrayy.begin(),arrayy.end());
cout<<endl;
for(auto i : arrayy)
{
cout<<" "<<i<<" ";
}
head=createverticalist(arrayy);
cout<<endl;
print(head);
cout<<endl;*/
struct node*dummynode1=new node(-1);
struct node*current=dummynode1;
struct node*temp1;
temp=head;
temp1=head->next;
struct node*nextt;
if(temp->data<temp1->data)
{
current->bottom=temp;
nextt=temp->bottom;
temp->bottom=NULL;
current=current->bottom;
temp=nextt;
}
else
{
current->bottom=temp1;
nextt=temp1->bottom;
temp->bottom=NULL;
temp1=temp1->bottom;
current=current->bottom;
temp=nextt;
}
struct node*moverr=dummynode1->next;
cout<<"the final linked list is as the follows"<<endl;
while(moverr!=NULL)
{
cout<<" "<<moverr->data<<" ";
moverr=moverr->bottom;
}
return 0;
}