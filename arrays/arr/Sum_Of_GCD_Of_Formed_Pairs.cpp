#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>nums={3,6,2,8};
int n=nums.size();
int i;
int maxi=INT_MIN;
vector<int>prefix(n,0);
for(i=0;i<n;i++)
{
if(nums[i]>maxi)
{maxi=nums[i];}
prefix[i]=gcd(maxi,nums[i]);
}
cout<<endl;
sort(prefix.begin(),prefix.end());
int sum=0;
i=0;
int j=n-1;
while(i<j)
{
sum=sum+gcd(prefix[i],prefix[j]);
i=i+1;
j=j-1;
}
cout<<sum;
return 0;
}