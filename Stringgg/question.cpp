#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<vector<int>>grid={{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
int m=grid.size();
int n=grid[0].size();
cout<<endl;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<" "<<grid[i][j]<<" ";
}
cout<<endl;
}
cout<<endl;
for(int i=0;i<m;i++)
{
int left=0;
int right=n-1;
while(left<right)
{
swap(grid[i][left],grid[i][right]);
left=left+1;
right=right-1;
}
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(grid[i][j]==0)
{
grid[i][j]=1;
}
else
{
grid[i][j]=0;
}
cout<<" "<<grid[i][j]<<" ";

}
cout<<endl;
}
return 0;
}