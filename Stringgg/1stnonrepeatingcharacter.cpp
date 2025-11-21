#include<iostream>
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
mpp[s[i]]++;
}
cout<<"the map elements are as the follows here"<<endl;
for(auto i : mpp)
{
cout<<" "<<i.first<<" "<<i.second<<endl;
}
for(int i=0;s[i]!='\0';i++)
{
if(mpp[s[i]]==1)
{
cout<<" "<<i<<" "<<endl;
break;
}
}
return 0;
}