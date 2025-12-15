#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int>st;
string s;
cout<<"enter the expression here"<<endl;
getline(cin,s);
int n=s.length();
for(int i=0;i<n;i++)
{
char ch=s[i];
if(ch>='0' && ch<='9')
{
int a=ch-'0';
st.push(a);
}
else{
int ans;
int a=st.top();
st.pop();
int b=st.top();
st.pop();
if(s[i]=='+'){ ans=b+a;}
else if(s[i]=='-'){ ans=b-a;}
else if(s[i]=='*'){ ans=b*a;}
else if(s[i]=='/'){ans=b/a;}
else {ans=a*b;}
st.push(ans);
}
}
cout<<st.top()<<endl;
return 0;
}