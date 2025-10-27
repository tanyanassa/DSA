#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
int n,i;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"entre the array elements"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int k;
cout<<"enter k"<<endl;
cin>>k;
unordered_map<int ,int >mpp;
mpp[0]=-1;
int j;
int sum=0;
int len=0;
for(j=0;j<n;j++)
{
sum=sum+arr[j];
if(mpp.find(sum-k)!=mpp.end())
{
int index;
index=mpp[sum-k];
len=max(len,j-index);
}
if(mpp.find(sum)==mpp.end())
{
mpp[sum]=j;
}
}
cout<<endl;
cout<<"The Length Of Array"<<len;
return 0;
}