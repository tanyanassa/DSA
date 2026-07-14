#include<bits/stdc++.h>
using namespace std;
void Generate_Options(vector<string>mp,string digits,int n, string path,int i,vector<string>&answer)
{
if(i==n)
{answer.push_back(path);
return;}
string anss=mp[digits[i]-'0'];
for(int j=0;j<anss.size();j++)
Generate_Options(mp,digits,n,path+anss[j],i+1,answer);
}
int main()
{
vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string digits="23";
int n=digits.size();
string path="";
vector<string>answer;
int i=0;
Generate_Options(mp,digits,n,path,0,answer);
for(auto i : answer)
cout<<i<<" ";
return 0;
}