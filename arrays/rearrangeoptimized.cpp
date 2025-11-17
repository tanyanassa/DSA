#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int arr[n];
cout<<"enter the array elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
vector<int>ans(n);
int pos=0;
int neg=1;
for(int i=0;i<n;i++)
{
if(arr[i]>0)
{
ans[pos]=arr[i];
pos=pos+2;
}
else
{
ans[neg]=arr[i];
neg=neg+2;
}
}
for(auto i :ans)
{
cout<<" "<<i;
}
return 0;
}