#include<iostream>
using namespace std;
string removeleadingzeroesonly(string s)
{
while(s.length()>1 && s[0]=='0')
{
s.erase(0,1);
}
return s;
}
string removetrailingzeroesonly(string s)
{
while(s.length()>1 && s.back()=='0')
{
s.pop_back();
}
return s;
}
int main()
{
string s;
cout<<"enter the string here"<<endl;
getline(cin,s);
string ans1;
ans1=removeleadingzeroesonly(s);
cout<<"After Removing Leading Zeroes : "<<ans1;
string ans2;
ans2=removetrailingzeroesonly(s);
cout<<"After Removing Trailing Zeroes :"<<ans2;
return 0;
}