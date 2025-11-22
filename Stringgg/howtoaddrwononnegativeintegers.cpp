#include<iostream>
using namespace std;
int main()
{
string s1;
cout<<"enter the string one"<<endl;
getline(cin,s1);
string s2;
cout<<"enter the string two"<<endl;
getline(cin,s2);
int n1=s1.size();
int i=n1-1;
int n2=s2.size();
int j=n2-1;
int carry=0;
string result="";
while(i>=0||j>=0||carry)
{
int digit1=i>=0?s1[i]-'0':0;
int digit2=j>=0?s2[j]-'0':0;
int sum=digit1+digit2+carry;
int lastdigit=sum%10;
carry=sum/10;
result=char(lastdigit+'0')+result;
j-=1;
i-=1;
}
cout<<"the final string is as the follows"<<endl;
cout<<" "<<result<<" "<<endl;
return 0;
}