#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
vector<vector<int>>matrix;
int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter the array elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
unordered_map<int,int>mpp;
int target;
cout<<"enter target"<<endl;
cin>>target;
for(int i=0;i<n;i++)
{
mpp[arr[i]]=i;
} 
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
int more=target-(arr[i]+arr[j]);
if(mpp.find(more)!=mpp.end()&&mpp[more]!=i&&mpp[more]!=j)
{
matrix.push_back({arr[i],arr[j],more});
}
}
cout<<endl;
}
for(auto &row:matrix)
{
for(auto &val:row)
{
cout<<" "<<val<<" ";
}
cout<<endl;
}
return 0;
}