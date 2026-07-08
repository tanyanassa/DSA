#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>array={2000,500,200,100,50,20,10,5,2,1};
int N=43;
int n=array.size();
int i;
vector<int>arr;
for(i=0;i<n;i++)
{
int divide=n/array[i];
if(divide==0)
{
i=i+1;
continue;
}
for(int j=0;j<divide;j++)
{
arr.push_back(array[i]);
}
n=n%array[i];
}
for(auto i : arr)
cout<<" "<<i<<" "<<endl;
return 0;
}