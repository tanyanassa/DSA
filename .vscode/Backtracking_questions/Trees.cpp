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
node*buildtree(vector<int>&arr,int i)
{if(i>=arr.size()||arr[i]==-1)
{return nullptr;}
struct node*root=new node(arr[i]);
root->left=buildtree(arr,2*i+1);
root->right=buildtree(arr,2*i+2);
return root;
}
void preorder(struct node*root,vector<int>&a)
{
if(root==nullptr)
{return;}
a.push_back(root->data);
preorder(root->left,a);
preorder(root->right,a);
}
int main()
{
vector<int>arr={1,2,3,4,5,6,7,8,9,10};
int n=arr.size();
int i=0;
node*root;
root=buildtree(arr,i);
vector<int>a;
preorder(root,a);
for(auto i : a)
cout<<" "<<i<<" "<<endl;
return 0;
}

