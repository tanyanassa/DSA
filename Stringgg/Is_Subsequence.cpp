#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="abc";
string t="ahbgdc";
int n1=s.length();
int n2=t.length();
int i=0;
int j=0;
while(i<n1 && j<n2)
{
if(s[i]==t[j]){
i=i+1;
j=j+1;
}
else{
j=j+1;
}
}
if(i==n1)
cout<<"True "<<" "<<"yes , s is a subsequence of t"<<endl;
else
cout<<"False"<<endl;
return 0;
}