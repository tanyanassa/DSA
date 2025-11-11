#include<iostream>
#include<vector>
using namespace std;
void mergesort(int arr[],int low,int high)
{
if(low<high)
{
int mid=(low+high)/2;
mergesort(arr,low,mid);
mergesort(arr,mid+1,high);
merge(arr,low,mid,high);
}
}
vector<int> merge(int arr[],int low,int mid,int high)
{
vector<int>k;
int i=low;
int j=high;
while(i<=low &7 j<=high)
{
if(arr[i]>=arr[j])
{
k.push_back(arr[j]);
j++;
}
else
{
k.push_back(arr[i]);
i++;
}
}
if(i>low)
{
while(j<=high)
{
k.push_back(arr[j]);
j+=1;
}
}
else
{
while(i>=low)
{
k.push_back(arr[i]);
i+=1;
}
}
return k;
}
int main()
{
int arr[5]={5,6,4,2,3};
vector<int> ans=mergesort(arr,0,4);
return 0;
}