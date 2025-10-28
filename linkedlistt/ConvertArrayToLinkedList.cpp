#include<iostream>
using namespace std;
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
int main()
{
vector<int>array ={1,2,3,4,5,6};
int n=array.size();
Node *Last=new Node(array[n-1]);
Node *Head=Last;
for(int i=n-1;i>=0;i--)
{
Node* NewNode=new Node(array[i],Head);
Head=NewNode;
}
struct Node*Temp=Head;
while(Temp!=NULL)
{
cout<<" "<<Temp->data<<" "<<endl;
Temp=Temp->next;
}
return 0;
}