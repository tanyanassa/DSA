#include<bits/stdc++.h>
using namespace std;
bool check(int n , int newx,int newy,vector<vector<int>>&grid,vector<vector<int>>&matrix)
{
if(newx>=0 && newx<=n-1 && newy>=0 && newy<=n-1)
{
if(grid[newx][newy]==1&&matrix[newx][newy]!=1)
{return true;}
else{
return false;
}
}
return false;
}
void build_answer(vector<vector<int>>&grid,vector<vector<int>>&matrix,string path,vector<string>&answer,int n,int start,int end)
{
/*base condition*/
if(start==n-1 && end == n-1)
{
answer.push_back(path);
return;
}
/*downward direction*/
if(check(n,start+1,end,grid,matrix))
{
matrix[start+1][end]=1;
build_answer(grid,matrix,path+'D',answer,n,start+1,end);
matrix[start+1][end]=0;
}
/*leftward direction*/
if(check(n,start,end-1,grid,matrix))
{
matrix[start][end-1]=1;
build_answer(grid,matrix,path+'L',answer,n,start,end-1);
matrix[start][end-1]=0;
}
/*rightward direction*/
if(check(n,start,end+1,grid,matrix))
{
matrix[start][end+1]=1;
build_answer(grid,matrix,path+'R',answer,n,start,end+1);
matrix[start][end+1]=0;
}
/*upward direction*/
if(check(n,start-1,end,grid,matrix))
{
matrix[start-1][end]=1;
build_answer(grid,matrix,path+'U',answer,n,start-1,end);
matrix[start-1][end]=0;
}
}
int main()
{
int n=4;
int start=0;
int end=0;
vector<vector<int>>grid(n,vector<int>(n,0));
grid={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1,}};
vector<vector<int>>matrix(n,vector<int>(n,0));
string path="";
vector<string>answer;
/*edge case :- agar source blocked ho ya phir agar destination hi blocked ho tb recursion ki zarurat hi nahi padhegi na */
/*aur maine 0,0 ko visited mark nahi kara hain to ye bhi krna hoga first cell ko visisted mark krna hoyega ab mereko*/
if(grid[0][0]=1)
{
matrix[0][0]=1;
build_answer(grid,matrix,path,answer,n,start,end);
}
for(auto i : answer)
cout<<i<<" "<<endl;
return 0;
}