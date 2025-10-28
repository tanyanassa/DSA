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
struct node *deletebyvalue(struct node*head,int value)
{
struct node*temp=head;
struct node*previous;
while(temp->data!=value)
{
previous=temp;
temp=temp->next;
}
previous->next=temp->next;
temp->next=NULL;
delete temp;
return head;
}
struct node *DeleteTailNode(struct node* head)
{
if(head==NULL || head->next ==NULL)
{
return NULL;
}
struct node * temp;
temp=head;
while(temp->next->next!=NULL)
{
temp=temp->next;
}
struct node*nexttnodee;
nexttnodee=temp->next;
nexttnodee->next=NULL;
temp->next=NULL;
free(nexttnodee);
return head;
}
struct node*deletetail(struct node * head)
{
if(head==NULL|| head->next==NULL)
{
return NULL;
}
struct node*tempp;
struct node*prevv;
tempp=head;
while(tempp->next!=NULL)
{
prevv=tempp;
tempp=tempp->next;
}
prevv->next=NULL;
tempp->next=NULL;
delete tempp;
return head;
}
struct node* deletehead(struct node* head)
{
if(head==NULL)
{
return head;
}
struct node*temp;
temp=head;
head=head->next;
temp->next=NULL;
delete temp;
return head;
}

struct node *deleteposition(struct node*head,int k)
{
if(head==NULL)
{
return NULL;
}
struct node*temp1=head;
int count=0;
while(temp1!=0)
{
temp1=temp1->next;
count++;
}
if(k>count)
{
return head;
}          
if(k==1)
{
deletehead(head);
}
if(k==count)
{
deletetail(head);
}
struct node*temp=head;
struct node*previous;
int i=1;
while(i<k)
{
previous=temp;
temp=temp->next;
i++;
}
previous->next=temp->next;
temp->next=NULL;
return head;
}
int main()
{
vector<int> array={1,8,9,3,12,13,16,19,20,21};
int n=array.size();
struct node*head=new node(1);
struct node*mover=head;
for(int i=1;i<n;i++)
{
struct node*newnode=new node(array[i]);  
mover->next=newnode;
mover=newnode;
}
struct node*temp;
temp=head;
while(temp!=NULL)
{
cout<<temp->data;
temp=temp->next;
}
head = deletehead(head);
cout<<"head->data  "<<head->data;
cout<<"now the list is"<<endl;
struct node*moverr=head;
while(moverr!=NULL)
{
cout<<" "<<moverr->data<<" ";
moverr=moverr->next;
}
head=deletetail(head);
struct node*traversal=head;
cout<<endl;
cout<<"After Deleting The Tail"<<endl;
while(traversal!=NULL)
{
cout<<" "<<traversal->data<<" ";
traversal=traversal->next;
}
head=DeleteTailNode(head);
cout<<"again after deleting the tail the answer is here "<<endl;
struct node*traverse=head;
while(traverse!=NULL)
{
cout<<" "<<traverse->data<<" ";
traverse=traverse->next;
}
int k;
cout<<"enter k"<<endl;
cin>>k;
head=deleteposition(head,k);
struct node* movess=head;
while(movess!=NULL)
{
cout<<movess->data<<" ";
movess=movess->next;
}
int value;
cout<<"enter value"<<endl;
cin>>value;
head=deletebyvalue(head,value);
cout<<"By Deleting The Value"<<value<<" The Linked List Is As"<<" "<<endl;
struct node * see= head;
while(see!=NULL)
{
cout<<" "<<see->data<<" ";
see=see->next;
}
cout<<"So That Was Our Final LinkedList After Performing All Operations"<<endl;
return 0;
}

