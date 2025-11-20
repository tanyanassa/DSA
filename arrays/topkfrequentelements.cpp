#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
int k=2;
vector<int>nums={1,1,1,2,2,3};
int n=nums.size();
unordered_map<int,int>mpp;
for(int i=0;i<n;i++)
{
mpp[nums[i]]+=1;
}
vector<vector<int>>buckets(n+1);
for(auto i:mpp)
{
buckets[i.second].push_back(i.first);
}     
vector<int>ans;
int j=0;
for(int i=n;i>=0&&ans.size()<k;i--)
{
for(auto i : buckets[i])
{
ans.push_back(i);
if(ans.size()==k)break;
}
}
cout<<"the answer is as : "<<endl;
for(auto i : ans)
{
cout<<" "<<i<<" ";
}
return 0;
}
