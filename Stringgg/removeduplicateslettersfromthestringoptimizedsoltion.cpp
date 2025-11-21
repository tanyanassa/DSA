#include<iostream>
using namespace std;
int main()
{
string ans="";
string s;
cout<<"enter the string here"<<endl;
getline(cin,s);
bool freq[256]={false};
for(int i=0;s[i]!='\0';i++)
{
if(!freq[s[i]])
{
freq[s[i]]=true;
ans.push_back(s[i]);
}
}
cout<<ans;
return 0;
}