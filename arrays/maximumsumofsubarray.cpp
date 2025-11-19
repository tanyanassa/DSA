#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[7] = {2, 5, 1, 8, 2, 9, 1};
int n=7;
int k=3;
int maxsum=0;
int sum=0;
for(int i=0;i<k;i++)
{
sum+=arr[i];
maxsum=sum;
}
for(int i=k;i<n;i++)
{
sum=sum+arr[i]-arr[i-k];
maxsum=max(sum,maxsum);
}
cout<<"maxsum is"<<maxsum;
return 0;
}