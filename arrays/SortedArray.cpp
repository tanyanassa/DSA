#include<iostream>
using namespace std;
bool SortedArray(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
{
if(arr[i]>arr[i+1])
{
return false;
break;
}
}
return true;
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
int a=SortedArray(arr,n);
cout<<" "<<a<<" ";
return 0;
}