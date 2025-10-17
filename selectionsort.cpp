#include <iostream>
void SelectionSort(int arr[],int n)
{
int i;
int j;
int min;
for(i=0;i<=n-2;i++)
{
min=i;
for(j=i;j<=n-1;j++)
{
if(arr[j]<arr[min])
{
min=j;
}
}
if(min!=i)
{
swap(arr[min],arr[i]);
}
}
}
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
SelectionSort(arr,n);
cout<<"the final sorted array is : "<<endl;
for(i=0;i<n;i++)
{
cout<<" "<<arr[i]<<" ";
}
return 0;
}