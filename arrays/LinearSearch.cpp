#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int n,int target)
{
int i;
for(i=0;i<n;i++)
{
if(arr[i]==target)
{
return true;
}
}
return false;
}
int main()
{
int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int target;
cin>>target;
int q=LinearSearch(arr,n,target);
cout<<" "<<q<<" ";
return 0;
}