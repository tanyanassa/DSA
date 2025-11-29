#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr1[4]={1,3,5,7};
int arr2[5]={0,2,6,8,9};
int m=4;
int n=5;
int i=0;
int j=0;
vector<int>arr3;
while(i<m && j<n)
{
if(arr1[i]<arr2[j])
{
arr3.push_back(arr1[i]);
i=i+1;
}
else{
arr3.push_back(arr2[j]);
j=j+1;
}
}
while(i<m)
{
arr3.push_back(arr1[i]);
i=i+1;
}
while(j<n)
{
arr3.push_back(arr2[j]);
j=j+1;
}
for(int i=0;i<m;i++)
{

}
return 0;
}