#include<iostream>
using namespace std;
#include<vector>
struct node 
{
public:
int data;
struct node*next;
public:
node(int data1, node*next1)
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
int main()
{
vector<int> arr={1,2,3,4,5};
node x= node(2,nullptr);
cout<<x.data<<endl;
cout<<x.next<<endl;
node * y= new node(3);
cout<<y->data<<endl;
cout<<y->next<<endl;
return 0;
}