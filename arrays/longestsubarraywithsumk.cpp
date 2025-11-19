#include<iostream>
using namespace std;
int LongestSubarray(int arr[],int n,int k)
{
int i=0;
int j;
int sum=0;
int len=0;
int maxlen=0;
for(j=0;j<n;j++)
{
sum+=arr[j];
while(sum>k){
sum-=arr[i];
i+=1;
}
if(sum==k)
{
len=j-i+1;
maxlen=max(len,maxlen);
}
}
return maxlen;
}
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
int len=LongestSubarray(arr,n,k);
cout<<"len is"<<" "<<len<<" ";
return 0;
}