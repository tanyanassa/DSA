#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
string s;
cout<<"enter the string here"<<endl;
getline(cin,s);
unordered_map<char,int>mpp;
for(int i=0;s[i]!='\0';i++)
{
mpp[s[i]]+=1;
}
int n;
n=s.length();
vector<vector<char>>buckets(n+1);
for(auto i : mpp)
{
buckets[i.second].push_back(i.first);
}
for(int i=0;i<=n;i++)
{
sort(buckets[i].begin(),buckets[i].end());
}
vector<char>answer;
for(int i=n;i>=0;i--)
{
for(char ch : buckets[i])
{
answer.push_back(ch);
}
}
cout<<"the final output is as the follows :"<<endl;
for(auto i : answer)
{
cout<<" "<<i<<" ";
}
return 0;
}