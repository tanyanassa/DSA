#include<iostream>
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
i=0;
int j;
while(j<=n-1)
{
if(arr[i]==arr[j])
{
j+=1;
}
if(arr[i]!=arr[j])
{
arr[i+1]=arr[j];
i+=1;
j+=1;
}
}
cout<<"the final array is"<<endl;
for(i=0;i<n;i++)
{
cout<<" "<<arr[i]<<" ";
}
return 0;
}