#include<iostream>
#include<map>
using namespace std;
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter the array elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int k;
cout<<"enter k"<<endl;
cin>>k;
map<int,int>mpp;
int sum=0;
mpp[0]=-1;
int len=0;
int maxlen=0;
for(int i=0;i<n;i++)
{
sum=sum+arr[i];
if(mpp.find(sum-k)!=mpp.end())
{
len=i-mpp[sum-k];
maxlen=max(maxlen,len);
}
mpp[sum]=i;
}
cout<<"maxlen"<<maxlen<<endl;
return 0;
}