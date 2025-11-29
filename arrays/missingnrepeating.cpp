#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
/*vector<int>ans;
map<int,int>mpp;*/
/*int n=5;
for(int i=0;i<n;i++){
mpp[arr[i]]++;
}
for(auto i:mpp){
if(i.second==2){
ans.push_back(i.first);
break;
}
}
for(int i=1;i<=n;i++){
if(mpp.find(i)==mpp.end()){
ans.push_back(i);
break;
}
}
cout<<"the final answer array"<<endl;
for(auto i : ans){
cout<<" "<<i<<" "<<endl;
}*/
/*int hash[7]={0};
for(int i=0;i<5;i++){
hash[arr[i]]++;
}
for(int i=1;i<=6;i++){
cout<<i<<" "<<hash[i]<<" "<<endl;
} 
for(int i=1;i<=6;i++){
if(hash[i]==0){
cout<<"missing number"<<i<<endl;
break;
}
for(int i=1;i<=6;i++){
if(hash[i]==2){
cout<<"repeating number"<<i<<endl;
break;
}
}
}*/
/*extreme brute force solution for this question is as follows :-*//*TC-O(N2)*/
/*int repeating;
int missing;
vector<int>answer;
for(int i=1;i<=6;i++){int count=0;
for(int j=0;j<n;j++){
if(arr[j]==i){
count=count+1;
}
if(count==2){
repeating=i;
}
if(count==0){
missing=i;
}
}
}
answer.push_back(repeating);
answer.push_back(missing);
cout<<"the final answer is : "<<endl;
for(auto i : answer){
cout<<" "<<i<<" "<<endl;
}*/
/*For The Better Solution*/
/*vector<int>answer;
int repeating=-1;
int missing=-1;
int hash[7]={0};
for(int i=0;i<n;i++){
hash[arr[i]]++;
}
for(int i=1;i<=n;i++){
if(hash[i]==0){
missing=i;
}
if(hash[i]==2){
repeating=i;
} 
if(repeating !=-1 && missing!=-1)
break;
}
answer.push_back(repeating);
answer.push_back(missing);
cout<<"The Answer Is As : "<<endl;
for(auto i : answer)
{
cout<<" "<<i<<" "<<endl;
}*/
/*optimized solution using mathematics*/
/*X-repeating number*/
/*y-missing number*/
/*int repeating=-1;
int missing=-1;
int sum=0;
for(int i=0;i<n;i++){
sum=sum+arr[i];
}
int sum_naturalnumbers=((n)*(n+1))/2;
int sumsquare=0;
for(int i=0;i<n;i++){
sumsquare=sumsquare+(arr[i]*arr[i]);
}
int sum_squarenaturalnumbers=((n)*(n+1)*(2*n+1))/6;
int val1=sum-sum_naturalnumbers;/*X-Y*/
/*int val2=sumsquare-sum_squarenaturalnumbers;/*X+Y*/
/*val2=val2/val1;
repeating=(val1+val2)/2;
missing=(val1-val2)/2 * (-1);
cout<<"the repeating number is"<<" "<<repeating<<endl;
cout<<"the missing number is"<<" "<<missing<<endl;*/
/*optimized soltuion using the xor gates now here*/
int arr[6]={3,5,4,1,1,2};
int n=6;
int xr=0;
for(int i=0;i<6;i++)
{
xr=xr^arr[i];
xr=xr^i;
} 
int bitno=0;
while(1){
if(xr&(1<<bitno)!=0){break;}
bitno++;
}
cout<<"bitno"<<bitno<<endl;
int zero=0;
int one=0;
for(int i=0;i<n;i++){
if(arr[i]&(1<<bitno)!=0){zero=zero^arr[i];}
else{one=one^arr[i];}
}
for(int i=1;i<=6;i++){
if(i&(1<<bitno)==0){one=one^i;}
else{zero=zero^i;}
}
int repeating=-1;
int missing=-1;
cout<<"one"<<one<<endl;
cout<<"zero"<<zero<<endl;
int count=0;
for(int i=0;i<n;i++){
if(arr[i]==one)
{count=count+1;
}
}
if(count==0){
repeating=zero;
missing=one;
}
if(count==2){
repeating=one;
missing=zero;
}
cout<<"the repeating number is"<<repeating<<endl;
cout<<"the missing number is"<<missing<<endl;
return 0;
}