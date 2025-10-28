#include<iostream>
#include<vector>
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
using namespace std;
int main()
{
vector<int> arr={1,2,3,4,5,6};
int n=arr.size();
Node *Last=new Node(6);
Node *SecondLast=new Node(5,Last);
Node *ThirdLast=new Node(4,SecondLast);
Node *FourthLast=new Node(3,ThirdLast);
Node *Second=new Node(2,FourthLast);
Node *Head=new Node(1,Second);
Node*tem=Head;
int count=0;
while(tem!=NULL)
{
cout<<" "<<tem->data<<" "<<endl;
tem=tem->next;
count+=1;
}
cout<<"The Number Of Nodes In The Linked List"<<count;
return 0;
}