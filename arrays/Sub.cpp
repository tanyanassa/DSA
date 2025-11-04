#include<iostream>
using namespace std;
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
int k;
cout<<"enter k"<<endl;
cin>>k;
int sum=0;
int len=0;
int j;
i=0;
for(j=0;j<n;j++)
{
sum+=arr[j];
while(sum>k && j>i)
{
sum=sum-arr[i];
i+=1;
}
if(sum==k)
{
len=max(len,j-i+1);
}
}
cout<<"Length Of Longest Subarray"<<len;
return 0;
}