#include<iostream>
#include<vector>
using namespace std;
struct node
{
int data;
struct node*next;
struct node*prev;
node(int data1)
{
data=data1;
next=nullptr;
prev=nullptr;
}
node(int data1,struct node*next1,struct node*prev1)
{
data=data1;
prev=prev1;
next=next1;
}
node()
{
data=0;
prev=nullptr;
next=nullptr;
}
};
struct node * createlist(vector<int> &array)
{
struct node * head = new node(array[0]);
struct node * movers=head;
for(int i=1;i<array.size();i++)
{
struct node * newnode= new node(array[i],nullptr,movers);
movers->next=newnode;
movers=movers->next;
}
return head;
}
void print(struct node *  head)
{
while(head!=NULL)
{
cout<<" "<<head->data<<" ";
head=head->next;
}
}
struct node * deletenode(struct node * head,int x)
{
struct node * movers=head;
while(movers!=NULL)
{
if(movers->data==x)
{
movers->prev->next=movers->next;
movers->next->prev=movers->prev;
break;
}
movers=movers->next;
}
return head;
}
struct node * deletebyposition(struct node * head,int k)
{
struct node * index=head;
int i=1;
while(i<k)
{
index=index->next;
i=i+1;
}
return head;
}
int main()
{
vector<int> array={1,2,3,4,5,6};
struct node*head=createlist(array);
print(head);
int x;
cout<<"enter x";
cin>>x;
head=deletenode(head,x);
print(head);
int k;
cout<<"enter k"<<endl;
cin>>k;
head=deletebyposition(head,k);
return 0;
}