#include<bits/stdc++.h>
using namespace std;
int main(){
string s="cbbd";
int n=s.length();
int i;
int maxi=INT_MIN;
int j;
for(i=0;i<n;i++){
string answer="";
for(j=i;j<n;j++){
answer+=s[j];
int n1=answer.size();
int m=0;
int n=answer.length()-1;
while(m<n){
if(answer[m]==answer[n]){
m=m+1;
n=n-1;
}
else{break;}
}
if(m>n||m==n){
maxi=max(maxi,n1);}
}
}
cout<<maxi;
return 0;
}