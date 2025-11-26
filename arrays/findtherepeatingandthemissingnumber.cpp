#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
vector<int>answer;
int nums[5]={3,5,4,1,1};
int n=5;
map<int,int>mpp;
for(int i=0;i<n;i++)
{
mpp[nums[i]]++;
}
cout<<"the map is as :"<<endl;
/*for(auto i :mpp)
{
cout<<i.first<<" "<<i.second<<" ";
}
cout<<endl;*/
for(auto i : mpp)
{
if(i.second==2)
{
answer.push_back(i.first);
break;
}
}
for(int i=1;i<=n;i++)
{
if(mpp.find(i)==mpp.end())
{answer.push_back(i);break;
}
}
cout<<endl;
cout<<endl;
for(auto i : answer)
{
cout<<" "<<i<<" "<<endl;
}
cout<<endl;
cout<<endl;
return 0;
}
