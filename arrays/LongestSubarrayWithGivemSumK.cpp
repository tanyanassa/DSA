#include<iostream>
using namespace std;
int main()
{
int n,i,k;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter the vale of k here"<<endl;
cin>>k;
cout<<"enter the array elements"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
} 
int len=0;
i=0;
int sum=0;
int j;
for(j=0;j<n;j++)
{
sum=sum+arr[j];
while(sum>k)
{
sum=sum-arr[i];
i+=1;
}
if(sum==k)
{
len=max(len,j-i+1);
}
}
cout<<"Length Of Longest Subarray"<<len<<endl;
return 0;
}