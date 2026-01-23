#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<char>St;
string str;
cout<<"Enter Your String Here"<<endl;
getline(cin,str);
int n=str.length();
int i;
for(i=0;i<n;i++)
{
if(str[i]=='('||str[i]=='{'||str[i]=='[')
{
St.push(str[i]);
}
else{
if(St.empty()){cout<<"NOT VALID"<<endl;break;}
if(str[i]==')'){
if(St.top()=='('){St.pop();}
else{cout<<"not valid"<<endl;break;}
}
else if(str[i]=='}'){
if(St.top()=='{'){St.pop();}
else{cout<<"not valid"<<endl;break;}
}
else{if(St.top()==']')
{St.pop();}
else{cout<<"not valid"<<endl;break;}
}
}
}if(St.empty()){
cout<<"valid parenthesis"<<endl;
}
return 0;
}