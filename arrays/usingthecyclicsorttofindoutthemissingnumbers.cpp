#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[8]={4,3,2,7,8,2,3,1};
int n=8;
int i=0;
while(i<n){
int correctposition=arr[i]-1;
if(arr[i]!=arr[correctposition]){
swap(arr[i],arr[correctposition]);
}else{i++;}
}
vector<int>answer;
for(int i=0;i<n;i++){
if(arr[i]!=i+1)
{answer.push_back(i+1);
}
}
for(auto i : answer){
cout<<" "<<i<<" "<<endl;
}
return 0;
}