#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
map<int,int>mpp;
vector<int>answer;
int arr[8]={1,1,1,3,3,2,2,2};
int n=8;
int value=n/3;
int i;
for(i=0;i<n;i++)
{
mpp[arr[i]]++;
}
for(auto i : mpp)
{
if(i.second>value)
{
answer.push_back(i.first);
}
}
cout<<"the final answer is : "<<endl;
for(auto i : answer)
{
cout<<" "<<i<<" "<<endl;
}
cout<<value;
return 0;
}