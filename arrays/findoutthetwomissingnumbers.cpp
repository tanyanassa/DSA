#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
/*elements are in the range of 1-n+2*/
int arr[6]={1,2,4,6,3,8};
int n=6;
/*brute force solution will be here*//*TC-0(N2) SC-0(1)*/
vector<int>answer;
int count;
for(int i=1;i<=n+2;i++){count=0;
for(int j=0;j<n;j++){
if(arr[j]==i){
count=count+1;
}
}
if(count==0){
answer.push_back(i);
}
}
cout<<"the final answer is"<<endl;
for(auto i : answer){
cout<<" "<<i<<" "<<endl;
}    
/*better solution using the hash map*//*TC=0(N)SC-0(N)*/
vector<int>ans;
int hash[9]={0};
for(int i=0;i<n;i++){
hash[arr[i]]++;
}
for(int i=1;i<=(n+2);i++){
if(hash[i]==0){
ans.push_back(i);
}
}
cout<<endl;
cout<<"the final answer is"<<endl;
for(auto i : ans)
{
cout<<" "<<i<<" "<<endl;
}
/*optimized solution using the basic maths*//*TC-0(N)SC-0(1)*/
cout<<endl;
int S=0;
int Sq=0;
for(int i=0;i<n;i++){
S=S+arr[i];
Sq=Sq+(arr[i]*arr[i]);
}
int Sn=1+2+3+4+5+6+7+8;
int Sqn=(1*1)+(2*2)+(3*3)+(4*4)+(5*5)+(6*6)+(7*7)+(8*8);
int val1=Sn-S;
int val2=Sqn-Sq;
int val3=((val1*val1)-val2)/2;
int Discriminant=(val1*val1)-(4*val3);
double root=sqrt(Discriminant);
double root1=((val1)+(root))/2.0;
double root2=((val1)-(root))/2.0;
cout<<"the root 1 is "<<" "<<int(root1)<<endl;
cout<<"the root 2 is "<<" "<<int(root2)<<endl;
cout<<endl;
return 0;
}