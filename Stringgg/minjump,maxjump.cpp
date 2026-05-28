#include<bits/stdc++.h>
using namespace std;
bool Check(int newx,int newy,int n,vector<vector<int>>&mat,vector<vector<bool>>&visited)
{
if(newx>=0 && newx<=n-1 && newy>=0 && newy<=n-1 && visited[newx][newy]!=1)
{
return true;
}
else
{
return false;
}
}
void solve(int start,int end,vector<vector<int>>&mat,int n, vector<vector<bool>>&visited,int currgcd,int &maximum)
{
if(start==n-1&&end==n-1)
{
maximum=max(maximum,currgcd);
return;
}
/*downward direction*/
if(Check(start+1,end,n,mat,visited))
{
visited[start][end]=1;
solve(start+1,end,mat,n,visited,currgcd=__gcd(currgcd,mat[start+1][end]),maximum);
visited[start][end]=0;
}
/*rightward direction*/
if(Check(start,end+1,n,mat,visited))
{
visited[start][end]=1;
solve(start,end+1,mat,n,visited,currgcd=__gcd(currgcd,mat[start][end+1]),maximum);
visited[start][end]=0;
}
}
int main()
{
vector<vector<int>>mat={{12,18,24},{30,36,48},{60,72,84}};
int n=3;
vector<vector<bool>>visited(n,vector<bool>(n,0));
int currgcd=mat[0][0];
int maximum=0;
solve(0,0,mat,n,visited,currgcd,maximum);
cout<<"Maximum"<<maximum<<endl;
return 0;
}