#include<iostream>
using namespace std;
int main()
{
string s;
cout<<"enter the string here : "<<endl;
getline(cin,s);
int n=s.length();
string answer="";
int i;
for(i=0;i<n;i++)
{
if(!isdigit(s[i]))
{
answer.push_back(s[i]);
}
}
cout<<"the answer string is as :"<<answer;
return 0;
}