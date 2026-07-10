#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="[1,2,3,4]";
int n=s.length();
int i;
vector<int>v;
for(i=0;i<n;i++)
{
if(isdigit(s[i]))
{
int answer=0;
while(isdigit(s[i]))
{
int digit=s[i]-'0';
answer=answer*10+digit;
i=i+1;
}
v.push_back(answer);
}
}
for(auto i : v)
cout<<i<<" ";
return 0;
}