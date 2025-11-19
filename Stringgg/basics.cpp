#include<iostream>
#include<algorithm>
using namespace std;
int getlength(string names)
{
int count=0;
for(int i=0;names[i]!='\0';i++)
{
count=count+1;
}
return count;
}
bool CheckPalindrome(string s)
{
for(int i=0;i<s.length();i++)
{
s[i]=tolower(s[i]);
}
int start=0;
int end=s.length()-1;
while(start<end)
{
if(!isalnum(s[start])){start=start+1;continue;}
if(!isalnum(s[end])){end=end-1;continue;}
if(s[start]!=s[end])
{
return false;
}
start=start+1;
end=end-1;
}
return true;
}
int main()
{
/*char names[20];
cout<<"enter your name here"<<endl;
cin>>names;
cout<<names;
int count=0;
int i=0;
while(names[i]!='\0')
{
count=count+1;
}*/
/*cout<<" "<<"count is"<<" "<<endl;*/
/*cout<<"enter your name here"<<endl;
string s;
getline(cin,s);
cout<<" "<<s<<" ";
int length=s.length();
cout<<" "<<length<<" ";*/
/*char names[20];
cin>>names;
cout<<names;
int length=getlength(names);
cout<<"Length is"<<length<<endl;
string s;
getline(cin,s);
int count=0;
for(int i=0;s[i]!='\0';i++)
{
    count=count+1;
}
cout<<" "<<count<<" "<<endl;*/
string s;
cout<<"enter string s here"<<endl;
getline(cin,s);
int length=getlength(s);
cout<<" "<<"length is"<<length<<endl;
int i=0;
int j=length-1;
while(i<j)
{
swap(s[i],s[j]);
i=i+1;
j=j-1;
}
cout<<s;
int q;
q=CheckPalindrome(s);
cout<<"Check Palindrome"<<" "<<q<<" ";
return 0;
}