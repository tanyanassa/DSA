#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>arr={-8,2,3,-6,10};
int k=2;
vector<int>ans;
for(int i=0;i<k;i++)
{
if(arr[i]<0)
{
ans.push_back(arr[i]);
break;
}
}
for(auto i : ans)
{
cout<<i;
}
int n=arr.size();
for(int i=k;i<n;i++)
{

}
return 0;
}