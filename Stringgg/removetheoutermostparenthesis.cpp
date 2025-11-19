#include<iostream>
using namespace std;
int main()
{
string ans="";
cout<<"enter the string here"<<endl;
string s;
getline(cin,s);
int count=0;
for(int i=0;s[i]!='\0';i++)
{
if(s[i]=='(')
{
count=count+1;
if(count>1)
{
ans+=(s[i]);
}
}
else
{
if(count>1)
{
ans+=s[i];
}
count=count-1;
}
}
cout<<"the answer string is"<<ans;
return 0;
}