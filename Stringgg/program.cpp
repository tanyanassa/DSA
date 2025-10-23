#include<iostream>
#include<map>
using namespace std;
int main()
{
string s;
cin>>s;
map<char,int>mpp;
for(int i=0;s[i]!='\0';i++)
{
mpp[s[i]]++;
}
for(auto i : mpp)
{
cout<<i.first<<" "<<i.second<<" ";
} 
int largest=0;
for(auto i : mpp)
{
if(i.second>largest)
{
largest=i.second;
}
}
cout<<endl;
cout<<" "<<largest<<" ";
for(auto i : mpp)
{
if(i.second==largest)
{
cout<<" "<<i.first<<" ";
break;
}
}
return 0;
}