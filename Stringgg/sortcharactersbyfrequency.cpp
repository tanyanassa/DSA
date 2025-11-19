#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
vector<char>ans;
cout<<"enter the string here";
string s;
getline(cin,s);
map<char,int>mpp;
int n;
n=s.length();
int i;
for(i=0;i<n;i++)
{
mpp[s[i]]+=1;
}

return 0;
}