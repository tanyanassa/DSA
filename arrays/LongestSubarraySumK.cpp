#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"the array elements are"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
} 
int target;
cout<<"enter target"<<endl;
cin>>target;
i=0;int len=0;
int sum=0;
for(int j=0;j<n;j++)
{
sum=sum+arr[j];
while(sum>target)
{
sum=sum-arr[i];
i+=1;
}
if(sum==target)
{
len=max(len,j-i+1);
}

}
cout<<"Length Of Subarray Is"<<len;
return 0;
}