#include<iostream>
#include<vector>
using namespace std;
int main()
{
/*vector<int>ans={1,2,3,4,5,6};
int n=ans.size();
vector<int>answer1(n);
answer1[0]=ans[0];
for(int i=1;i<n;i++)
{
answer1[i]=ans[i]+answer1[i-1];
}
cout<<"the final answer is as follows :"<<endl;
for(auto i : answer1)
{
cout<<" "<<i<<" "<<endl;
}
vector<int>answer2(n);
answer2[n-1]=ans[n-1];
for(int i=n-2;i>=0;--i)
{
answer2[i]=answer2[i+1]+ans[i];
}
cout<<"the final answer is as follows : "<<endl;
for(auto i : answer2){
cout<<" "<<i<<" "<<endl;
}*/
/*vector<int>array={3,4,-2,5,8,20,-10,8};
int n=array.size();
vector<int>array1(n);
int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+array[i];
}
sum=sum/2;
cout<<sum;
array1[0]=array[0];
int i;
for(i=1;i<n;i++){
array1[i]=array1[i-1]+array[i];
if(array1[i]==sum){break;}
}
int length;
length=i-0+1;
cout<<"length of the subarray"<<length<<endl;*/
/*vector<int>array={4,2,0,5,2,6,2,3};
int n=array.size();
vector<int>LeftMax(n);
vector<int>RightMax(n);
LeftMax[0]=0;
RightMax[n-1]=0;
for(int i=1;i<n;i++)
{
LeftMax[i]=max(LeftMax[i-1],array[i-1]);
}
cout<<"The Left Maximum is"<<endl;
for(auto i : LeftMax)
{
cout<<" "<<i<<" "<<endl;
}
for(int i=n-2;i>=0;i--)
{
RightMax[i]=max(RightMax[i+1],array[i+1]);
}
cout<<"The Right Maximum Is"<<endl;
for(auto i : RightMax)
{
cout<<" "<<i<<" "<<endl;
}
int value=0;
for(int i=0;i<n;i++)
{
int minimum=min(LeftMax[i],RightMax[i]);
if(array[i]>minimum){value=value+0;}
else
{
int answer=minimum-array[i];
value=value+answer;
}
}
cout<<"answer is"<<value;
return 0;*/
vector<int>array={4,2,0,5,2,6,2,3};
int n=array.size();
int largest=0;
int large=INT_MIN;
for(int i=0;i<n;i++)
{
if(large<array[i])
{
large=array[i];
largest=i;
}
}
cout<<"Large"<<large<<" "<<endl;
cout<<"Largest"<<largest<<" "<<endl;
int MaxLeft=0;
int MaxRight=0;
int sum=0;
for(int i=1;i<largest;i++)
{
MaxLeft=max(MaxLeft,array[i-1]);
int answer=MaxLeft-array[i];
if(answer<0){continue;}
sum=sum+answer;
}
for(int i=n-2;i>largest;--i)
{
MaxRight=max(MaxRight,array[i+1]);
int anss;
anss=MaxRight-array[i];
if(anss<0)
{
continue;
}
sum=sum+anss;
}
cout<<"sum is equals to"<<sum<<endl;
}
