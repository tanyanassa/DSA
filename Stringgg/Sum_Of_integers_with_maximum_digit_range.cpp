#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>nums={90,900};
int n=nums.size();
vector<int>answer;
int i;
int Maximum=INT_MIN;
for(i=0;i<n;i++)
{
int number=nums[i];
int maxi=INT_MIN;
int mini=INT_MAX;
while(number!=0)
{
int digit=number%10;
number=number/10;
if(digit>maxi)
{
maxi=digit;
}
if(digit<mini)
{
mini=digit;
}
}
int difference=maxi-mini;
if(Maximum<difference)
{
Maximum=difference;
}
answer.push_back(difference);
}
for(auto i : answer)
{
cout<<" "<<i<<" "<<endl;
}
cout<<"MAXIMUM"<<Maximum<<" "<<endl;
int sum=0;
for(i=0;i<n;i++)
{
if(answer[i]==Maximum)
{
sum=sum+nums[i];
}
}
cout<<endl;
cout<<"SUM"<<sum<<" ";
cout<<endl;
return 0;
}