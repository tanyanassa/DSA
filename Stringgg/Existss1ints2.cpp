#include<iostream>
using namespace std;
bool CheckEqual(int arr1[],int arr2[])
{
int i;
for(i=0;i<26;i++)
{
if(arr1[i]!=arr2[i])
{
return false;
}
}
return true;
}
int main()
{
string s1;
string s2;
cout<<"enter s1"<<endl;
getline(cin,s1);
cout<<"enter s2"<<endl;
getline(cin,s2);
Bool Check(string s1,string s2)
{
int count[26]={0};
for(char ch : s1)
{
int index=ch-'a';
count[index]++;
}
int i;
/*for(i=0;i<26;i++)
{
cout<<" "<<count[i]<<" ";
}*/
i=0;
int windowsize;
windowsize=s1.length();
int count1[26]={0};
while(i<windowsize)
{
int index=s2[i]-'a';
count1[index]++;
i++;
}
if(CheckEqual(count1,count2))
{
return true;
}
while(i<s2.length())
{
int oldchar=s2[i-windowsize];
int index=oldchar-'a';
count2[index]--;
int newchar=s2[i];
index=newchar-'a';
count[index]++;
if(CheckEqual(count1,count2))
{
return true;
}
}
return false;
}
}