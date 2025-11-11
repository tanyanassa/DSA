#include<iostream>
#include<vector>
using namespace std;
struct node
{
char data;
struct node*next;
node(char data1,struct node*next1)
{
data=data1;
next=next1;
}
node(char data1)
{
data=data1;
next=nullptr;
}
};
struct node*createlist(vector<char>&array)
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
vector<char>array={'a','b','a','b','d','e','e','d'};
struct node*head=createlist(array);
cout<<" "<<"the linked list is as follows :"<<endl;
print(head);
vector<char>array1;
vector<char>array2;
struct node*temp=head;
while(temp!=NULL)
{
if(temp->data=='a'||temp->data=='e'||temp->data=='i'||temp->data=='o'||temp->data=='u')
{
array1.push_back(temp->data);
}
else{
array2.push_back(temp->data);
}
temp=temp->next;
}
struct node*head1=createlist(array1);
struct node*head2=createlist(array2);
cout<<" "<<"the first linked list"<<" "<<endl;
print(head1);
cout<<" "<<"the second linked list"<<" "<<endl;
print(head2);
struct node*temp1=head1;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=head2;
cout<<endl;
cout<<" "<<"the final linked list is as : "<<endl;
print(head1);
cout<<endl;
return 0;
}                             