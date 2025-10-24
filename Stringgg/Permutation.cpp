#include<iostream>
using namespace std;
int main()
{
string s1;
getline(cin,s1);
string s2;
getline(cin,s2);
int i;
for(i=0;s2[i]!='\0';i++)
{
if(s2.find(s1)!= string::npos)
{
cout<<"Exists";
break;
}
}
if(s2[i]=='\0')
{
cout<<"Not Exists"<<endl;
}
return 0;
}