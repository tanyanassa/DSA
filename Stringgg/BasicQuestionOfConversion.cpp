#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>array1={1,3,5,7};
vector<int>array2={0,2,6,8,9};
int m=4;
int n=5;
vector<int>array3;
int i=0;
int j=0;
while(i<m && j<n)
{
if(array1[i]<array2[j])
{
array3.push_back(array1[i]);
i=i+1;
}
else
{
array3.push_back(array2[j]);
j=j+1;
}
}
if(i==m)
{while(j<n)
{
array3.push_back(array2[j]);
j=j+1;
}
}
else
{
while(i<m)
{
array3.push_back(array1[i]);
i=i+1;
}
}
for(i=0;i<m;i++)
{
array1[i]=array3[i];
}
for(i=m;i<(m+n);i++)
{
array2[i-m]=array3[i];
}
cout<<"Array 1"<<endl;
for(auto i : array1)
{cout<<i<<" ";}
cout<<endl;
cout<<"Array 2"<<endl;
for(auto i : array2)
{cout<<i<<" ";}
cout<<endl;
return 0;
}