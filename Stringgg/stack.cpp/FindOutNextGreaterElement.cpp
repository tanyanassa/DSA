#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>array={1,3,2,4};
vector<int>answer;int j;
int n=array.size();
for(int i=0;i<n;i++)
{
int temp=array[i];
for(j=i+1;j<n;j++)
{
if(temp<array[j])
{
answer.push_back(array[j]);
break;
}
}
if(j==n)
{answer.push_back(-1);
}
}
cout<<"the final answer vector is as : "<<endl;
for(auto i : answer)
{
cout<<" "<<i<<" "<<endl;
}
return 0;
}
