#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<char>St;
string s;
cout<<"enter the string here"<<endl;
getline(cin,s);
int n=s.length();
for(int i=0;i<n;i++)
{
St.push(s[i]);
}
string answer="";
while(!St.empty())
{
answer.push_back(St.top());
St.pop();
}
cout<<"the final answer is : "<<endl;
cout<<answer;
return 0;
}