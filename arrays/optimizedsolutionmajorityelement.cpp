#include<iostream>
using namespace std;
int main()
{
int arr[9]={1,1,1,1,2,2,2,3,2};
int n=9;
int count1=0;
int element1=-1;
int count2=0;
int element2=-1;
for(int i=0;i<n;i++){
if(count1==0 && arr[i]!=element2){
element1=arr[i];
count1=count1+1;
}
else if(count2==0 && arr[i]!=element1){
element2=arr[i];
count2=count2+1;
}
else if(element1==arr[i]){
count1=count1+1;
}
else if(element2==arr[i]){
count2=count2+1;
}
else{
count1=count1-1;
count2=count2-1;
}
}
cout<<"element 1"<<" "<<element1;
cout<<"element 2"<<" "<<element2;
return 0;
}