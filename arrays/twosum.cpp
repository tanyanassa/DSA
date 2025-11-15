#include<iostream>
#include<map>
using namespace std;
pair<int,int>TwoSum(int arr[],int n,int target)
{
int i;
map<int,int>mpp;
for(i=0;i<n;i++)
{
mpp[arr[i]]=i;
}
for(i=0;i<n;i++)
{
int more=target-arr[i];
if(mpp.find(more)!=mpp.end())
{
return {more,arr[i]};
}
}
return {-1,-1};
}
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<" "<<"enter the array elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int target;
cout<<"enter the target value"<<endl;
cin>>target;
pair<int,int>result=TwoSum(arr,n,target);
cout<<endl;
cout<<" "<<result.first<<" ";
cout<<" "<<result.second<<" ";
cout<<endl;
return 0;
}