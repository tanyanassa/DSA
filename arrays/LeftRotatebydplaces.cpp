#include<iostream>
#include<vector>
using namespace std;
void LeftRotate(int arr[],int n,int d)
{
vector<int> temp;
int i;
for(i=0;i<d;i++)
{
temp.push_back(arr[i]);
}
for(i=d;i<n;i++)
{
arr[i-d]=arr[i];
}
int j;
j=0;
for(i=n-d;i<n;i++)
{
arr[i]=temp[j];
j+=1;
}
}
int main()
{
int n,i;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"entre the array elements"<<endl;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
int d;
cout<<"enter d"<<endl;
cin>>d;
LeftRotate(arr,n,d);
for(i=0;i<n;i++)
{
cout<<" "<<arr[i]<<" ";
}
return 0;
}