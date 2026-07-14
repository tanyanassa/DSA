#include<bits/stdc++.h>
using namespace std;
int main()
{
int maximum_count=INT_MIN;
vector<int>nums={100,4,1,2,3,200};
int n=nums.size();
int i;
unordered_set<int>St;
for(i=0;i<n;i++)
St.insert(nums[i]);
for(i=0;i<n;i++)
{
if(St.find(nums[i]-1)==St.end())
{
int j=1;
int count=1;
while(St.find(nums[i]+j)!=St.end())
{count=count+1;
j=j+1;}
maximum_count=max(maximum_count,count);
}
}
cout<<"Maximum Count"<<maximum_count<<" "<<endl;
return 0;
}