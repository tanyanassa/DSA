#include<iostream>
#include<vector>
struct Node
{
int data;
struct Node*Next;
Node(int data1,struct Node*Next1)
{
data=data1;
Next=Next1;
}
Node(int data1)
{
data=data1;
Next=nullptr;
}
};
using namespace std;
int main()
{
vector<int> array={1,2,3,4,5,6,7,8};
int n=array.size();
Node *Last=new Node(array[n-1]);
struct Node*Head=Last;
for(int i=n-2;i>=0;i--)
{
Node* NewNode=new Node(array[i],Head);
Head=NewNode;
}
struct Node*Temp=Head;
while(Temp!=NULL)
{
cout<<" "<<Temp->data<<" "<<endl;
Temp=Temp->Next;
}
struct Node*Previous=NULL;
struct Node*Current=Head;
struct Node*Nextt;
while(Current!=NULL)
{
Nextt=Current->Next;
Nextt->Next=Current;
Current=Current->Next;
Previous=Current->prev;
}
return 0;
}