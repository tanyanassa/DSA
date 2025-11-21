#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<string>str={"apple","banana","grape","mango"};
sort(str.begin(),str.end());
int n=str.size();
string first=str[0];
int n1=first.size();
string last=str[n-1];
int n2=last.size();
vector<char>answer;
for(int i=0;i<max(n1,n2);i++)
{
if(first[i]==last[i])
{
answer.push_back(first[i]);
}
else
{
cout<<"no string matched here"<<endl;
cout<<"or the string matching ends here"<<endl;
break;
}
}
cout<<"the answer string is as the follows : "<<endl;
for(auto i : answer)
{
cout<<" "<<i<<" "<<endl;
}
return 0;
}

