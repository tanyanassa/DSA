#include<iostream>
using namespace std;
int main()
{
cout<<"enter the string here"<<endl;
string s;
getline(cin,s);
string word="";
string ans="";
int n=s.length();
for(int i=n-1;i>=0;i++)
{
if(s[i]==' ')
{
ans=ans+word+" ";
word="";
}
else{
word=s[i]+word;
}
}
ans=ans+word;
cout<<"the answer string is as the follows :"<<ans;
return 0;
}