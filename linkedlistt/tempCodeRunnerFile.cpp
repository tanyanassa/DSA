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
vector<char>array={'a','b','c','d','e','f','g','h','i'};
struct node*head=createlist(array);
cout<<"the linked list formed is as"<<endl;
print(head);
cout<<endl;
struct node*dummynode1=new node('#');
struct node*dummynode2=new node('#');
struct node*vowelhead=dummynode1;
struct node*consonanthead=dummynode2;
struct node*temp=head;
struct node*newnode;
while(temp!=NULL)
{
if(temp->data=='a'||temp->data=='e'||temp->data=='i'||temp->data=='o'||temp->data=='u')
{
newnode=new node(temp->data);
dummynode1->next=newnode;
dummynode1=dummynode1->next;
}
else
{
newnode=new node(temp->data);
dummynode2->next=newnode;
dummynode2=dummynode2->next;
}
temp=temp->next;
}
struct node*vowelstart=dummynode1;
struct node*consonantstart=dummynode2;
vowelhead=vowelstart->next;
consonanthead=consonantstart->next;
struct node*temp1=vowelhead;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=consonanthead;
cout<<endl;
cout<<endl;