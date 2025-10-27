#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter the array elements"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int k;
int len=0;
cout<<"enter k"<<endl;
cin>>k;
int sum;
int j;
for(i=0;i<n;i++)
{sum=0;
for(j=i;j<n;j++)
{
sum+=arr[j];
if(sum==k)
{
len=max(len,j-i+1);
}
}
}
cout<<"Length Of Longest Subarray Is As"<<len;
return 0;
}