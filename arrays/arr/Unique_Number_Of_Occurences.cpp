#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>arr={1,2};
int n=arr.size();
int i;
unordered_map<int,int>mpp;
for(i=0;i<n;i++)
mpp[arr[i]]++;
vector<int>array;
for(auto i : mpp)
array.push_back(i.second);
sort(array.begin(),array.end());
for(auto i : array)
cout<<i<<" ";
int a=1;
for(i=0;i<array.size();i++)
{
if(array[i]!=i+1)
{
a=0;
}
}
cout<<" "<<a<<" "<<endl;
return 0;
}