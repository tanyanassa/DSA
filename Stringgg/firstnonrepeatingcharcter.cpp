#include<iostream>
#include<map>
using namespace std;
struct Info
{
int index;
int frequency;
};
int main()
{
string s;
cout<<"enter string"<<endl;
getline(cin,s);
map<char,Info>mpp;
for(int i=0;s[i]!='\0';i++){
if(mpp.find(s[i])==mpp.end())
{
mpp[s[i]]={i,1};
}
else{
mpp[s[i]].frequency++;
}
}
cout<<"the map structure is"<<endl;
for(auto it:mpp)
{
cout<<it.first<<" "<<it.second.index<<" "<<it.second.frequency<<" "<<endl;
}

return 0;
}