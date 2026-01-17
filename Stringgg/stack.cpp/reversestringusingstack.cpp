#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
string s;
cout<<"enter the string here"<<endl;
getline(cin,s);
stack<char>st;
int n=s.length();
int i;
for(i=0;i<n;i++)
{
st.push(s[i]);
}
vector<char>answer;
while(!st.empty())
{
answer.push_back(st.top());
st.pop();
}
for(auto i : answer)
{
cout<<i<<endl;
}
return 0;
}