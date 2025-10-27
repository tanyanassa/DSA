#include<iostream>
#include<unordered_map>
using namespace std;
bool TwoSum(int arr[],int n,int target)
{
unordered_map<int,int>mpp;
int i;
int value;
int more;
for(i=0;i<n;i++)
{
value=arr[i];
more=target-value;
if(mpp.find(more)!=mpp.end())
{
return true;
}
if(mpp.find(more)==mpp.end())
{
mpp[arr[i]]=i;
}
}
return false;
}
int main()
{
int n,i;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter the array elements"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}    
int target;
cout<<"enter target"<<endl;
cin>>target;
int q=TwoSum(arr,n,target);
cout<<q;
return 0;
}