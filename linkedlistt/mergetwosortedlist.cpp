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
void print(struct node*list)
{
while(list!=NULL)
{
cout<<" "<<list->data<<" ";
list=list->next;
}
}
vector<int> SortedList(struct node*list1,struct node*list2)
{
vector<int>answer;
struct node*temp1=list1;
struct node*temp2=list2;
while(temp1!=NULL && temp2!=NULL)
{
if(temp1->data==temp2->data)
{
answer.push_back(temp1->data);
answer.push_back(temp2->data);
temp1=temp1->next;
temp2=temp2->next;
}
else if(temp1->data>temp2->data)
{
answer.push_back(temp2->data);
temp2=temp2->next;
}
else
{
answer.push_back(temp1->data);
temp1=temp1->next;
}
}
if(temp1==NULL)
{
while(temp2!=NULL)
{
answer.push_back(temp2->data);
temp2=temp2->next;
}
}
else
{
while(temp1!=NULL)
{
answer.push_back(temp1->data);
temp1=temp1->next;
}
}
return answer;
}
int main()
{
vector<int>array1={1,2,4};
vector<int>array2={1,3,4};
struct node*list1;
struct node*list2;
list1=createlist(array1);
cout<<"List1"<<endl;
print(list1);
cout<<"List2"<<endl;
list2=createlist(array2);
print(list2);
cout<<endl;
cout<<"Sorted List"<<endl;
vector<int>list;
cout<<endl;
list=SortedList(list1,list2);
cout<<endl;
struct node*final=createlist(list);
print(final);
cout<<endl;
return 0;
}
