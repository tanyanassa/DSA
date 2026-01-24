#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int>array={-2,0,2,0,0,2};
/*sort(array.begin(),array.end());
int n=array.size();
int i;
int j;
int X=13;
vector<vector<int>>matrix;
for(i=0;i<n-2;i++)
{
for(j=i+1;j<n-1;j++)
{
int more=13-array[i]-array[j];
int start=j+1;
int end=n-1;
while(start<end){
int mid=start+(end-start)/2;
if(array[mid]==more){matrix.push_back({array[mid],array[i],array[j]});break;}
else if(array[mid]>more)
{
end=mid-1;
}
else
{
start=mid+1;
}
}
}
}
int m=matrix.size();
int n1=matrix[0].size();
for(int i=0;i<m;i++){for(int j=0;j<n1;j++){cout<<""<<matrix[i][j];}}*/
int n=array.size();
int X=0;
sort(array.begin(),array.end());
vector<vector<int>>matrix;
for(int i=0;i<n-2;i++)
{
if((i>0)&&(array[i]==array[i-1]))
{
continue;
}
int more=X-array[i];
int start=i+1;
int end=n-1;
while(start<end)
{
if(array[start]+array[end]==more)
{
matrix.push_back({array[start],array[i],array[end]});
while(start<end && array[start]==array[start+1])
{
start=start+1;
}
while(start<end &&(array[end]==array[end-1]))
{
end=end-1;
}
start=start+1;
end=end-1;
}
else if(array[start]+array[end]>more)
{
end=end-1;
}
else{
start=start+1;
}
}
}
for(auto i : matrix)
{
for(auto j : i)
{
cout<<" "<<j<<" "<<endl;
}
}
return 0;
}