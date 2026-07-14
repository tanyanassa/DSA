#include<bits/stdc++.h>
using namespace std;
int main()
{
unordered_set<int>st;
vector<int>nums={100,4,1,2,3,200};
int n=nums.size();
int max_count=INT_MIN;
int i=0;
for(i=0;i<n;i++)
st.insert(nums[i]);
int count=0;
for(i=0;i<n;i++)
{
if(st.find(nums[i]+1)!=st.end())
{
count=1;
int j=1;
while(st.find(nums[i]+j)!=st.end())
{count=count+1;
j=j+1;}
max_count=max(max_count,count);
}
}
cout<<"Max Count"<<max_count<<" "<<endl;
return 0;
} 