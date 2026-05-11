#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>time={2};
int total_trips=1;
long long low=0;
long long high=1LL**(max_element(time.begin(),time.end()))*total_trips;
long long minimum=INT_MAX;
while(low<=high)
{
long long sum=0;
long long mid=(low)+(high-low)/2;
for(auto i : time)
sum=sum+(mid/i);
if(sum>=total_trips)
{
minimum=min(minimum,mid);
high=mid-1;
}
else
{
low=mid+1;
}
}
cout<<"minimum"<<minimum;
return 0;
}