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
vector <int> array = {1,2,3,4,5,6,7,8};
int n=array.size();
struct Node*Head=new Node(array[0]);
struct Node*Temp;
Temp=Head;
for(int i=1;i<n;i++)
{
struct Node*NewNode=new Node(array[i]);
Temp->Next=NewNode;
Temp=NewNode;
}
struct Node*Mover;
Mover=Head;
while(Mover!=NULL)
{
cout<<" "<<Mover->data<<" "<<endl;
Mover=Mover->Next;
}
return 0;
}