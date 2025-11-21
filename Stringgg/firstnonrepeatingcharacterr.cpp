#include<iostream>
using namespace std;
int main()
{
string s;
cout<<"enter the string here"<<endl;
getline(cin,s);
int freq[26]={0};
for(int i=0;s[i]!='\0';i++) 
{
freq[s[i]-97]++;
}
for(int i=0;i<26;i++)
{
cout<<" "<<"freq[i]"<<freq[i]<<endl;
}
for(int i=0;s[i]!='\0';i++)
{
if(freq[s[i]-97]==1)
{
cout<<" "<<i<<" "<<endl;
break;
}
}
return 0;
}