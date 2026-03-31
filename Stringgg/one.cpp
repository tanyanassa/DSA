#include<bits/stdc++.h>
using namespace std;
class node
{
public:
int data;
node*left;
node*right;
node(int data1)
{
data=data1;
left=nullptr;
right=nullptr;
}
};
node*buildtree(node*root)
{
cout<<"enter the data for the root node"<<endl;
int data;
cin>>data;
if(data==(-1))
return nullptr;
root=new node(data);
cout<<"enter data for the left part of the root node"<<data<<" "<<endl;
root->left=buildtree(root->left);
cout<<"enter data for the right part of the root node"<<data<<" "<<endl;
root->right=buildtree(root->right);
return root;
}
bool Search_Node(node *root,int data1)
{
if(root==nullptr)
{
return false;
}
else
{
return ((root->data==data1)||(Search_Node(root->left,data1))||(Search_Node(root->right,data1)));
}
}
int main()
{
node*root=nullptr;
root=buildtree(root);
cout<<endl;
cout<<"Enter Data"<<endl;
int data;
cin>>data;
int search=Search_Node(root,data);
if(search==1)
{
cout<<"The node is present in the tree"<<endl;
}
else
{
cout<<"The node is not present in the tree"<<endl;
}
return 0;
}