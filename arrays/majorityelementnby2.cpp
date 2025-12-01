#include<iostream>
#include<map>
using namespace std;
int main()
{
/*brute solution*/
/*TC-0(N2)SC-0(1)*/
int arr[7]={2,2,3,3,1,2,2};
int n=7;
for(int i=0;i<n;i++)
{
int count=0;
for(int j=0;j<n;j++){
if(arr[i]==arr[j]){count=count+1;}}
if(count>n/2){cout<<arr[i];break;}
}
cout<<endl;
/*better solution*/
/*TC-0(N logN)SC-0(N)*/
map<int,int>mpp;
for(int i=0;i<n;i++){
mpp[arr[i]]++;
if(mpp[arr[i]]>n/2){cout<<arr[i];break;}
}    
/*optimized approach*/
/*TC-0(N)SC-0(1)*/
int count=0;
int element;
for(int i=0;i<n;i++)
{
if(count==0){
element=arr[i];
count=count+1;
}
else if(arr[i]==element){count=count+1;}
else{count=count-1;}
}
count=0;
for(int i=0;i<n;i++)
{
if(arr[i]==element){count=count+1;}    
}
cout<<endl;
if(count>n/2){
cout<<element;
}
return 0;
}