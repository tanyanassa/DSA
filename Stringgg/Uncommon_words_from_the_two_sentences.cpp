#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1="this apple is sweet";
string s2="this apple is sour";
int n1=s1.length();
int n2=s2.length();
unordered_map<string,int>mp;
string s;
for(int i=0;i<n1;i++)
{
if(s1[i]==' ')
{
mp[s]++;
s="";
}
else
{
s.push_back(s1[i]);
}
}
mp[s]++;
s="";
for(int i=0;i<n2;i++)
{
if(s2[i]==' ')
{
mp[s]++;
s="";
}
else
{
s.push_back(s2[i]);
}
}
mp[s]++;
vector<string>ss;
for(auto i : mp)
{
if(i.second==1)
ss.push_back(i.first);
}
for(auto i : ss)
cout<<i;
}
