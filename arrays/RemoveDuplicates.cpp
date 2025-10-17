#include<iostream>
using namespace std;
void RemoveDuplicates(int arr[],int n)
{
int i;
int j;
i=0;
j=i+1;
while(j<=n-1)
{
if(arr[i]==arr[j])
{
j+=1;
}
else{
arr[i+1]=arr[j];
i+=1;
j+=1;
}
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
RemoveDuplicates(arr,n);
cout<<"the final array is"<<endl;
for(i=0;i<n;i++)
{
cout<<" "<<arr[i]<<" ";
}
return 0;
}