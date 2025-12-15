#include<iostream>
#include<stack>
using namespace std;
int main()
{
int value=0;
stack<char>st;
string s;
getline(cin,s);
int n=s.length();
for(int i=0;i<n;i++)
{
if(s[i]=='('||s[i]=='{'||s[i]=='[')
{
st.push(s[i]);
}
else{
if(s[i]==')'){
if(st.top()=='('){st.pop();}
else{cout<<"false";value=1;break;}
}
else if(s[i]=='}'){
if(st.top()=='{'){st.pop();}
else{cout<<"false";value=1;break;}
}
else{
if(st.top()==']'){st.pop();}
else{cout<<"false";value=1;break;}
}
}
}if(value==0){
cout<<"True"<<endl;
cout<<"Valid Parenthesis"<<endl;
}
return 0;
}
