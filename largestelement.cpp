#include<iostream>
using namespace std;
int Largest(int arr[],int n)
{
int largest=0;
int i;
for(i=0;i<n;i++)
{
if(arr[i]>arr[largest])
{
largest=i;
}
}
return arr[largest];
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
int q=Largest(arr,n);
cout<<q;
return 0;
}