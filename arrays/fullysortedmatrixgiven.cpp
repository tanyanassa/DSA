#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
int m=matrix.size();
int n=matrix[0].size();
int target=30;
int i;
int j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(matrix[i][j]==target)
{
cout<<" "<<i<<" "<<j;cout<<endl;
break;
}
}
}
return 0;
}