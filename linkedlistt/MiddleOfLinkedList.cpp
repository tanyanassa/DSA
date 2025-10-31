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
struct node * create (vector<int> &ans)
{
struct node*head=new node(ans[0]);
struct node*mover=head;
for(int i=1;i<ans.size();i++)
{
struct node*newnode=new node(ans[i]);
mover->next=newnode;
mover=mover->next;
}
return head;
}
int main()
{
vector<int> ans={1,2,3,4,5,6};    
struct node*head;
head=create(ans); 
struct node*mover=head;
cout<<"The Linked List Formed"<<endl;
int count=0;
while(mover!=NULL)
{
count+=1;
cout<<" "<<mover->data<<" ";
mover=mover->next;
}
cout<<endl;
cout<<"Count Of Linked List "<<count;
count=count/2;      
int moves=0;
struct node * movers;
movers=head;
while(moves!=count)
{
movers=movers->next;
moves++;
}
cout<<" "<< movers->data <<" ";    
return 0;
}