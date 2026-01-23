#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>array={1,4,6,8,10,45};
int value=24;
int n=array.size();
int sum;
int i;
for(i=0;i<n-2;++i)
{
sum=value-array[i];
int start=i+1;
int end=n-1;
while(start<end)
{
if(array[start]+array[end]==sum){
cout<<"True"<<" "<<endl;
break;
}
else if(array[start]+array[end]>sum)
{
end=end-1;
}
else
{
start=start+1;
}
}
}
return 0;
}