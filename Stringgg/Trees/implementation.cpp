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
node* buildtree(node*root)
{
cout<<"Enter data for root node"<<endl;
int data;
cin>>data;
root=new node(data);
if(data==-1)
return nullptr;
cout<<"Enter data for the left part of the root node"<<endl;
root->left=buildtree(root->left);
cout<<"Enter data for the right part of the root node"<<endl;
root->right=buildtree(root->right);
return root;
}
int Count_Nodes(node*root)
{
if(root==nullptr)
return 0;
else return 1+Count_Nodes(root->left)+Count_Nodes(root->right);
}
int Leaf_Nodes(node*root)
{
if(root==nullptr)
return 0;
if(root->left==nullptr && root->right ==nullptr)
return 1;
return Leaf_Nodes(root->left)+Leaf_Nodes(root->right);
}
int Sum_Of_All_Nodes(node*root)
{
if(root==nullptr)
return 0;
return root->data+Sum_Of_All_Nodes(root->left)+Sum_Of_All_Nodes(root->right);
}
int Height(node*root)
{
if(root==nullptr)
{
return -1;
}
return max(Height(root->left),Height(root->right));
}
vector<int> Level_Order_Traversal(node * root)
{
queue<node*>q;
q.push(root);
q.push(nullptr);
vector<int>answer;
while(!q.empty())
{
if(q.front()==nullptr)
{
q.pop();
if(!q.empty())
q.push(nullptr);
continue;
}
else{
if(q.front()->left!=nullptr)
q.push(q.front()->left);
if(q.front()->right!=nullptr)
q.push(q.front()->right);
answer.push_back(q.front()->data);
q.pop();
}
}
return answer;
}
int main()
{
node*root = nullptr;
root=buildtree(root);
int count=0;
count=Count_Nodes(root);
cout<<count<<endl;
count=Leaf_Nodes(root);
cout<<count<<endl;
count=Sum_Of_All_Nodes(root);
cout<<count;
count=Height(root);
cout<<count;
vector<int>answer;
answer=Level_Order_Traversal(root);
cout<<"Level Order Traversal Of The Tree :"<<endl;
for(auto i : answer)
cout<<" "<<i<<" ";
return 0;
}