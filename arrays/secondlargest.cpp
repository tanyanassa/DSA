#include<iostream>
using namespace std;
int SecondLargest(int arr[],int n)
{
int i;
int slargest;
int largest;
slargest=-1;
largest=0;
for(i=0;i<n;i++)
{
if(arr[i]>arr[largest])
{
slargest=largest;
largest=i;
}
if(arr[i]<arr[largest] && arr[i]>arr[slargest])
{
slargest=i;
}
}
return arr[slargest];
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
int q=SecondLargest(arr,n);
cout<<" "<<q<<" ";
return 0;
}