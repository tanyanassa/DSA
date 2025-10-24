#include<iostream>
using namespace std;
int main()
{
string s;
getline(cin,s);
string temp="";
int i;
for(i=0;s[i]!='\0';i++)
{
if(s[i] == ' ')
{
temp.push_back('@');
temp.push_back('4');
temp.push_back('0');
}
else{
temp.push_back(s[i]);
}
}
cout<<temp;
return 0;
}