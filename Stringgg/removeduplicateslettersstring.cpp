#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
string s;
cout<<"enter the string here"<<endl;
getline(cin,s);
sort(s.begin(),s.end());
cout<<"after sorting the string we get is that"<<endl;
cout<<s<<endl;
int i=0;
int j=1;
for(j=1;j<s.size();j++)
{
if(s[i]!=s[j])
{
s[i+1]=s[j];
i=i+1;
}
}
cout<<"the final string is as the follows"<<endl;
cout<<s;
return 0;
}