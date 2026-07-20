#include<bits/stdc++.h>
using namespace std;
int main(){
string s="eleetminicoworoep";
int n=s.length();
int i;
int mask=0;
unordered_map<char,int>mp;
int max_len=INT_MIN;
mp['a']=0;
mp['b']=1;
mp['c']=2;
mp['d']=3;
mp['e']=4;
unordered_map<int,int>mpp;
mpp[0]=-1;
for(i=0;i<n;i++){
if(s[i]=='a'||s[i]=='b'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
mask=mask^(1<<mpp[s[i]]);
}
if(mpp.find(mask)==mpp.end()){
mpp[mask]=i;
}
else
{
max_len=max(max_len,i-mpp[mask]-1);
}
}
cout<<" "<<max_len<<" "<<endl;
return 0;
}
     