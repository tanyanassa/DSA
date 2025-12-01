#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{/*
vector<int>answer;
int arr[8]={1,1,1,3,3,2,2,2};
int n=8;
int value=n/3;
for(int i=0;i<n;i++)
{
int count=0;
for(int j=0;j<n;j++)
{
if(arr[i]==arr[j]){count=count+1;}
}
if(count>value && find(answer.begin(),answer.end(),arr[i])==answer.end()){answer.push_back(arr[i]);}
if(answer.size()==2){break;}
}
cout<<"The Final Answer Is"<<endl;
for(auto i : answer){cout<<" "<<i<<" ";}*/
/*TC-O(N),SC-O(N)*//*as we are using a map data structure here in this case here only*/
/*for an unordered map data structure*/
map<int,int>mpp;
vector<int>answer;
int arr[8]={1,1,1,1,3,2,2,2};
int n=8;
int value=n/3 +1;
for(int i=0;i<n;i++){
mpp[arr[i]]++;
if(mpp[arr[i]]==value){answer.push_back(arr[i]);}
if(answer.size()==2){break;}
} 
cout<<"the answer vector is"<<endl;
for(auto i : answer){cout<<" "<<i<<" ";}
return 0;
}