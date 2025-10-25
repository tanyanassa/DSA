#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter the array elements"<<endl;
int i;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int k;
cout<<"enter k"<<endl;
cin>>k;
int x;
cout<<"enter x"<<endl;
cin>>x;
int windowsize=k;
int sum=0;
int count=0;
i=0;
while(i<windowsize)
{
sum=sum+arr[i];
i+=1;
}
if(sum>=x)
{
count+=1;
}
while(i<n)
{
int oldv;
oldv=arr[i-windowsize];
sum=sum-oldv;
int newv;
newv=arr[i];
sum=sum+newv;
if(sum>=x)
{
count+=1;
}
i+=1;
}
cout<<"Count Of Subarrays Is"<<count;
return 0;
}