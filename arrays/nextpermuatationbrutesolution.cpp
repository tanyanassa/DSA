#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<vector<int>>ans;
vector<int>nums={1,2,3};
do
{
for(auto x : nums)
{
cout<<x<<" ";
}
ans.push_back(nums);
cout<<endl;
} while (next_permutation(nums.begin(),nums.end()));
cout<<"ans"<<endl;
for(auto &v : ans)
{
for(auto i : v)
{
cout<<i<<" ";
}
cout<<endl;
}
vector<int>target={3,2,1};
int index=-1;
int i;
for(i=0;i<ans.size();i++)
{
if(ans[i]==target)
{
index=i;
break;
}
}
vector<int>nextpermutation;
if(index==ans.size()-1)
{
nextpermutation=ans[0];
}
else
{
nextpermutation=ans[index+1];
}
cout<<"The Next Permutation Is"<<endl;
for(auto i : nextpermutation)
{
cout<<" "<<i<<" ";
}
return 0;
}
