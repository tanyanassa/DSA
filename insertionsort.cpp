#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
int i;
int j;
int temp;
for(i=1;i<n;i++)
{
j=i-1;
temp=arr[i];
while(j>=0 && arr[j]>temp)
{
arr[j+1]=arr[j];
j-=1;
}
arr[j+1]=temp;
}
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
InsertionSort(arr,n);
cout<<"final array is"<<endl;
for(i=0;i<n;i++)
{
cout<<" "<<arr[i]<<" ";
}
return 0;
}