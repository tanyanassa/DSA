#include<iostream>
using namespace std;
void LeftRotate(int arr[],int n)
{
int temp=arr[0];
int i;
for(i=1;i<n;i++)
{
arr[i-1]=arr[i];
}
arr[n-1]=temp;
}
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
LeftRotate(arr,n);
cout<<"the final array is"<<endl;
for(i=0;i<n;i++)
{
cout<<arr[i];
}
return 0;
}