#include<iostream>
#include<vector>
using namespace std;
void Merge(int arr[],int low,int mid,int high)
{
vector<int> k;
int i;
int j;
i=low;
j=mid+1;
while(i<=mid && j<=high)
{
if(arr[i]<=arr[j] && i<=high-1)
{
k.push_back(arr[i]);
i+=1;
}
if(arr[j]<arr[i] && j>=low+1)
{
k.push_back(arr[j]);
j+=1;
}
}
if(i>mid)
{
while(j<=high)
{
k.push_back(arr[j]);
j+=1;
}
}
else
{
while(i<=mid)
{
k.push_back(arr[i]);
i+=1;
}
}
for(i=low;i<=high;i++)
{
arr[i]=k[i-low];
}
}
void MergeSort(int arr[],int low,int high)
{
if(low<high)
{
int mid=(low+high)/2;
MergeSort(arr,low,mid);
MergeSort(arr,mid+1,high);
Merge(arr,low,mid,high);
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
MergeSort(arr,0,n-1);
cout<<"the final array is"<<endl;
for(i=0;i<n;i++)
{
cout<<" "<<arr[i]<<" ";
}
return 0;
}