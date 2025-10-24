#include<iostream>
using namespace std;
int main()
{
string part="abc";
string temp=" ";
string s;
getline(cin,s);
int i;
for(i=0;s[i]!='\0';i++)
{
temp.push_back(s[i]);
if(temp==part)
{
temp.pop_back();
temp.pop_back();
temp.pop_back();
}
}
return 0;
}