#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cout<<"enter the value of n here"<<endl;
cin>>n;
int arr[n];
cout<<"enter the array elements"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
vector<int>pos;
vector<int>neg;
for(int i=0;i<n;i++)
{
if(arr[i]>0)
{
pos.push_back(arr[i]);
}
else
{
neg.push_back(arr[i]);
}
}
vector<int>nums;
int i=0;
int j=0;
while( i<pos.size() &&  j<neg.size())
{
nums.push_back(pos[i++]);
nums.push_back(neg[j++]);
}
cout<<"the final array is as the follows here : "<<endl;
for(auto i : nums)
{
cout<<" "<<i<<" ";
}
return 0;
}