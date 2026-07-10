#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
int n=arr.size();
int i;
int csum=0;
int msum=INT_MIN;
for(i=0;i<n;i++)
{
csum=csum+arr[i];
if(csum>msum)
msum=csum;
if(csum<0)
csum=0;
}
cout<<"maximum sum: -"<<msum<<" "<<endl;
/*prefix sum approach used*/
int sum=0;
unordered_map<int,int>mpp;
mpp[0]=-1;
int start=0;
for(i=0;i<n;i++)
{
sum=sum+arr[i];
if(mpp.find(sum-msum)!=mpp.end())
{
start=mpp[sum-msum];
break;
}
else{
mpp[sum]=i;
}
}
vector<int>answer;
int k;
for(k=start+1;k<=i;k++)
answer.push_back(arr[k]);
cout<<endl;
cout<<"Final Answer :-"<<endl;
for(auto i : answer)
cout<<i<<endl;
return 0;
}
