#include<iostream>
#include<stack>
using namespace std;
int main()
{
string s;
cout<<"enter the string here"<<endl;
getline(cin,s);
stack<char>st;
for(int i=0;i<s.length();i++)
{
st.push(s[i]);
}
string ans="";
while(!st.empty())
{
ans.push_back(st.top());
st.pop();
}
cout<<"the answer string is as the follows"<<endl;
cout<<" "<<ans<<" ";
return 0;
}