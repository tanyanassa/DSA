#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int breakingpoint(vector<int>&nums)
{
int point=-1;
int n=nums.size();
for(int i=n-2;i>=0;i--)
{
if(nums[i]<nums[i+1])
{
point=i;
break;
}
}
return point;
}
int larger(vector<int>nums,int breaking,int n)
{
int larger=-1;
for(int i=n-1;i>breaking;i--)
{
if(nums[breaking]<nums[i])
{
larger=i;
break;
}
}
return larger;
}
int main()
{
vector<int>nums={1,2,3,6,5};
int n=nums.size();
int breaking=breakingpoint(nums);
int largerno=larger(nums,breaking,n);
swap(nums[breaking],nums[largerno]);
reverse(nums.begin()+breaking+1,nums.end());
for(auto i : nums)
{
cout<<" "<<i<<" ";
}
return 0;
}