#include<bits/stdc++.h>
using namespace std;
int main()
{
int max_sum=INT_MIN;
vector<int>nums={4,3,2,6};
int n=nums.size();
vector<int>arr;
for(int k=0;k<=(n-1);k++)
{
arr=nums;
int sum=0;
reverse(arr.begin(),arr.begin()+k);
reverse(arr.begin()+k,arr.end());
reverse(arr.begin(),arr.end());
int n1=arr.size();
for(int i=0;i<n1;i++)
sum=sum+(i*arr[i]);
max_sum=(max_sum,sum);
cout<<"the maximum sum is"<<endl;
cout<<max_sum;
}
return 0;
}