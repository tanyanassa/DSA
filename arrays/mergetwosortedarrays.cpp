#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>answer;
int nums1[7]={-5,-2,4,5};
int nums2[3]={-3,1,8};
int m=4;
int n=3;
int i=0;
int j=0;
while((i<m)&&(j<n))
{
if(nums1[i]<nums2[j])
{answer.push_back(nums1[i]);
    i=i+1;
}
else{
answer.push_back(nums2[j]);
j=j+1;
}
}
while(i<m)
{
answer.push_back(nums1[i]);
i=i+1;
}
while(j<n)
{
answer.push_back(nums2[j]);
j=j+1;
}
for(auto i : answer)
{
cout<<" "<<i<<" ";
}nums1[7];
for(i=0;i<answer.size();i++)
{nums1[i]=answer[i];
}  
for(i=0;i<7;i++)
{cout<<" "<<nums1[i]<<" ";
}
return 0;
}
