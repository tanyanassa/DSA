#include<iostream>
using namespace std;
int main()
{
string s;
getline(cin,s);
int i;
int spacecount=0;
for(i=0;s[i]!='\0';i++)
{
if(s[i] == ' ')
{
spacecount+=1;
}
}
cout<<" ";
cout<<spacecount;
int originallength=s.length();
cout<<originallength;
cout<<endl;
int newlength=originallength+(2*spacecount);
cout<<newlength;
cout<<endl;
s.resize(newlength);
i=originallength-1;
int j=newlength-1;
while(i>=0)
{
if(s[i]==' ')
{
s[j--]='0';
s[j--]='4';
s[j--]='@';
i--;
}
else
{
s[j--]=s[i--];
}
}
cout<<s;
return 0;
}