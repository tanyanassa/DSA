#include<iostream>
using namespace std;
struct Node
{
int data;
struct Node*next;
Node(int data1,struct Node*next1)
{
data=data1;
next=next1;
}
Node(int data1)
{
data=data1;
next=nullptr;
}
};
int main()
{
Node*Last=new Node(2);
/*cout<<Last->data<<endl;
cout<<Last->next<<endl;*/
Node*SecondLast= new Node(3,Last);
/*cout<<SecondLast->data<<endl;
cout<<SecondLast->next<<endl;
cout<<SecondLast->next->data<<endl;*/
Node*Head=new Node(5,SecondLast);
/*cout<<Head->data<<endl;
cout<<Head->next->data<<endl;
cout<<Head->next->next->data<<endl;*/
struct Node*NewNode=Head;
int count=0;
while(NewNode!=nullptr)
{
cout<<NewNode->data<<endl;
NewNode=NewNode->next;
count=count+1;
}
cout<<"The Number Of Nodes are "<<count;
/*cout<<NewNode->data<<endl;*/
return 0;
}