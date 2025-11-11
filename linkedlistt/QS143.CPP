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
struct node*middlenode(struct node*head)
{
struct node*slow=head;
struct node*previous=slow;
struct node*fast=head;
while(fast!=NULL && fast->next!=NULL)
{
fast=fast->next->next;
slow=slow->next;
}
return slow;
}
pair<struct node*,struct node*>reversethelinkedlist(struct node*head,struct node*middle)
{
struct node*previous1=NULL;
struct node*temp=head;
while(temp!=NULL && temp!=middle)
{
previous1=temp;
temp=temp->next;
}
previous1->next=NULL;
struct node*previous;
previous=NULL;
struct node*current=middle;
struct node*next;
while(current!=NULL)
{
next=current->next;
current->next=previous;
previous=current;
current=next;
}
temp=previous;
while(temp->next!=NULL)
{
temp=temp->next;
} 
previous1->next=previous;   
return {head,previous};
}
struct node*FinalLinkedlist(struct node*head,struct node*mid)
{
struct node*temp=head;
struct node*tempn;
struct node*end=mid;
struct node*endn;
while(temp!=NULL && end!=NULL)
{
tempn=temp->next;
endn=end->next;
temp->next=end;
if(tempn==NULL)break;
end->next=tempn;
temp=tempn;
end=endn;
}
return head;
}
int main()
{
vector<int>array={1,2,3,4};
struct node*head=createlist(array);
print(head);
struct node*middle=middlenode(head);
cout<<endl;
cout<<" "<<" middle node data part"<<middle->data<<" ";
cout<<endl;
auto result=reversethelinkedlist(head,middle);
cout<<endl;
print(result.first);
cout<<endl;
cout<<" "<<result.second->data<<" ";
cout<<endl;
cout<<" "<<head->data<<" ";
struct node*mid=result.second; 
cout<<"the final linked list is as"<<endl;                           
head=FinalLinkedlist(head,mid);
cout<<endl;
print(head);
cout<<endl;
return 0;
}