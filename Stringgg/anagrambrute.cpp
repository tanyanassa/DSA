#include<iostream>
#include<map>
using namespace std;
int main()
{
string s1;
getline(cin,s1);
string s2;
getline(cin,s2);
map<char,int>mpp1;
map<char,int>mpp2;
int n1=s1.length();
int n2=s2.length();
for(int i=0;i<n1;i++)
{
mpp1[s1[i]]+=1;
}
for(int i=0;i<n2;i++)
{
mpp2[s2[i]]+=1;
}
if(mpp1==mpp2)
{
cout<<"both the strings are anagram of each other"<<endl;
}
else{
cout<<"both the strings are not anagram of ech other"<<endl;
}
return 0;
}