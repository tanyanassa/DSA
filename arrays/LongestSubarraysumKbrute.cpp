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
int len;
len=0;
int j;
int k;
int sum=0; 
int K; 
cout<<"Enter K"<<endl;
cin>>K;   
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{sum=0;
for(k=i;k<=j;k++)
{
sum+=arr[k];
if(sum==K)
{
len=max(len,j-i+1);
}
}
}
}
cout<<"The Length Of The Longest Subarray"<<len;
return 0;
}