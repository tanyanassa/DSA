#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
set<int>set;
int nums1[4]={1,2,2,1};
int nums2[2]={2,2};
int n1=4;
int n2=2;
int i;
int j;
while(i<n1 && j<n2)
{
if(nums1[i]==nums2[j])
{
set.insert(nums1[i]);
i+=1;
j+=1;
}
else if(nums1[i]>nums2[j])
{
j+=1;
}
else
{
i+=1;
}
for(auto i : set)
{
cout<<i;
}
}
return 0;
}