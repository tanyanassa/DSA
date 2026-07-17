#include<bits/stdc++.h>
using namespace std;
bool Check_Prime(int number)
{
if(number==1)
{return false;}
int i;
for(i=2;i*i<=number;i++)
{
if(number%i==0)
{return false;}
}
return true;
}
int main()
{
int number;
cin>>number;
int a=Check_Prime(number);
cout<<a<<endl;
return 0;
}