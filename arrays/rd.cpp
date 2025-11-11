#include<iostream>
#include<set>
using namespace std;
int main()
{
int arr[7]={1,1,2,2,2,3,3};
set<int>s;
/*for(int i=0;i<7;i++)
{
s.insert(arr[i]);
}
int i=0;
for(auto st:s)
{
arr[i]=st;
i++;
}
cout<<endl;
cout<<" i "<<i;
cout<<endl;*/
/*int i=0;
for(int j=1;j<7;j++)
{
if(arr[i]!=arr[j])
{
arr[i+1]=arr[j];
i++;
}
}
for(i=0;i<7;i++)
{
cout<<" "<<arr[i]<<" ";
}*/
int i=0;
int j=1;
while(j<7)
{
while(arr[i]==arr[j])
{
j++;
}
arr[i+1]=arr[j];
i++;
j++;
}
for(i=0;i<7;i++)
{
cout<<" "<<arr[i]<<" ";
}
return 0;
}