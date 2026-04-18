#include<bits/stdc++.h>
using namespace std;
bool isSafe(int x , int y,vector<vector<int>>&matrix,vector<vector<int>>&visited,int n)
{
if(x>=0 && y>=0 && x<=n-1 && y<=n-1&& matrix[x][y]==1 && visited[x][y]!=1)
return true;
else
return false;
}
void solve(int x, int y ,  vector<vector<int>>matrix,int n,vector<vector<int>>&visited,string path,vector<string>&answer)
{
/*base case*/
if(x==n-1 && y==n-1)
{
answer.push_back(path);
return ;
}
/*Downward Leftward Rightward Upward */
/*Downward Movement*/
if(isSafe(x+1,y,matrix,visited,n))
{
path.push_back('D');
visited[x][y]=1;
solve(x+1,y,matrix,n,visited,path,answer);
path.pop_back();
visited[x][y]=0;
}
/*Leftward Movement*/
if(isSafe(x,y-1,matrix,visited,n))
{
path.push_back('L');
visited[x][y]=1;
solve(x,y-1,matrix,n,visited,path,answer);
path.pop_back();
visited[x][y]=0;
}
/*Rightward Movement*/
if(isSafe(x,y+1,matrix,visited,n))
{
path.push_back('R');
visited[x][y]=1;
solve(x,y+1,matrix,n,visited,path,answer);
path.pop_back();
visited[x][y]=0;
}
/*Upward Movement*/
if(isSafe(x-1,y,matrix,visited,n))
{
path.push_back('U');
visited[x][y]=1;
solve(x-1,y,matrix,n,visited,path,answer);
path.pop_back();
visited[x][y]=0;
}
}
int main()
{
vector<vector<int>>matrix={{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};
int m=matrix.size();
int n=matrix[0].size();
vector<vector<int>>visited(m,vector<int>(n,0));
vector<string>answer;
string path="";
solve(0,0,matrix,n,visited,path,answer);
for(auto i : answer)
cout<<" "<<i<<" "<<endl;
return 0;
}