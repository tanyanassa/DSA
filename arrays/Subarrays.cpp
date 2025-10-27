#include<iostream>
using namespace std;
int main()
{
int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int target;
cin>>target;
int sum=0;
int j;
int k;
int len=0;
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{sum=0;
for(k=i;k<=j;k++)
{
sum=sum+arr[k];
if(sum==target)
{
len=max(len,j-i+1);
}
}
}
}
cout<<endl;
cout<<len;
return 0;
}