#include<bits/stdc++.h>
using namespace std;
bool primt(int num)
{
if(num==1)
return false;
int i;
for(i=2;i<num;i++)
{
if(num%i==0)
{return false;}
}
return true;
}
int main()
{
int start=1;
int end=100;
int i;
vector<int>answer;
for(i=start;i<=end;i++)
{
int number=i;
if(primt(number))
{
if(number<=10)
{
answer.push_back(i);
}
else
{
while(number!=0&&primt(number%10))
{
number=number/10;
}
if(number==0)
answer.push_back(i);
}
}
}
for(auto i : answer)
cout<<" "<<i<<" "<<endl;
return 0;
}