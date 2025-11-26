#include<iostream>
using namespace std;
int main()
{
string s;
cout<<"enter the string s"<<endl;
getline(cin,s);
int n=s.length();
char ans;
int pos;
for(int i=n-1;i>=0;i--)
{
if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9')
{
pos=i;
cout<<s[i];
break;
}
}
int i=0;
string answer;
while(i<=pos)
{
answer=answer+s[i];
i=i+1;
}
while(answer.length()>1 && answer[0]=='0')
{
answer.erase(0,1);
} 
cout<<"The Answer Is As"<<endl;
cout<<answer;
return 0;
}