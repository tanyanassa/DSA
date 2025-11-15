#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<vector<int>>matrix;
int n ;
cout<<"enter n";
cout<<endl;
cin>>n;
int arr[n];
cout<<"enter the array elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int target;
cout<<"enter target";
cin>>target;
sort(arr,arr+n);
int i;
int j;
for(int m=0;m<n;m++)
{
int fix=arr[m];
int more=target-fix;
i=m+1;
j=n-1;
if(m>0&&arr[m]==arr[m-1])
{
continue;
}
while(i<j)
{
if(arr[i]+arr[j]==more)
{
matrix.push_back({arr[i],arr[j],fix});
while(i<j && arr[i]==arr[i+1])
{
i+=1;
}
while(i<j&&arr[j]==arr[j+1])
{
j-=1;
}
i+=1;
j-=1;
}
else if(arr[i]+arr[j]>more)
{
j-=1;
}
else
{
i+=1;
}
}
}
for(auto &row:matrix)
{
for(auto &val:row)
{
cout<<" "<<val<<" ";
}
cout<<endl;
}
return 0;
}