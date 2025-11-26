#include<iostream>
using namespace std;
int main()
{
string s;
cout<<"enter the string s"<<endl;
getline(cin,s);
int position=-1;
int n=s.length();
for(int i=n-1;i>=0;i--)
{
if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0')
{
position=i;
break;
}
}
cout<<s.substr(0,position+1);
return 0;
}