#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string>words={"abcw","baz","foo","bar","xtfn","abcdef"};
int n=words.size();
int i;
int j;
int maximum_length=INT_MIN;
for(i=0;i<n;i++)
{string w1=words[i];
for(j=i+1;j<n;j++)
{
string w2=words[j];
int i1=0;
int i2=0;
sort(w1.begin(),w1.end());
sort(w2.begin(),w2.end());
int n1=w1.length();
int n2=w2.length();
while(i1<n1 && i2<n2)
{
if(w1[i1]<w2[i2])
{i1=i1+1;}
else if(w1[i1]>w2[i2])
{i2=i2+1;}
else
{break;}
}
if(i1==n1||i2==n2)
{
maximum_length=max(maximum_length,n1*n2);
}
else{
}
}
}
cout<<"maximum length"<<maximum_length;
return 0;
}