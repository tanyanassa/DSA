#include<bits/stdc++.h>
using namespace std;
int main()
{
int ans=INT_MAX;
unordered_map<int,vector<int>>mpp;
vector<int>array={1,2,1,1,3,1};
int n=array.size();
for(int i=0;i<n;i++)
{
mpp[array[i]].push_back(i);
if(mpp[array[i]].size()>=3)
{
int n=mpp[array[i]].size();
int index3=mpp[array[i]][n-1];
int index2=mpp[array[i]][n-2];
int index1=mpp[array[i]][n-3];
ans=min(ans,2*(index3-index1));
}
}
cout<<"Answer Is As Here"<<ans<<" "<<endl;
return 0;
}