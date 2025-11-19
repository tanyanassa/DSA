#include<iostream>
#include<map>
using namespace std;
bool RotationOthers(string s,string goal)
{
int n1;
int n2;
n1=s.length();
n2=goal.length();
if(n1!=n2)
{
return false;
}
string temp=s+s;
if(temp.find(goal)!=string::npos)
{
return true;
}
return false;
}
int main()
{
cout<<"enter the string s"<<endl;
string s;
getline(cin,s);
cout<<"enter the goal string"<<endl;
string goal;
getline(cin,goal);
int q=RotationOthers(s,goal);
cout<<" "<<q<<" ";
return 0;
}