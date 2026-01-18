#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&st,int count,int size,int x)
{
if(count==size)
{
st.push(x);
return;
}
int number;
number=st.top();
st.pop();
solve(st,++count,size,x);
st.push(number);
}
int main()
{
stack<int>st;
st.push(5);
st.push(4);
st.push(1);
st.push(7);
/*st.push(5);*/
int x;
cout<<"Enter X"<<endl;
cin>>x;
int count;
count=0;
int size;
size=st.size();
solve(st,count,size,x);
stack<int>temp=st;
cout<<"The Final Stack is "<<endl;
while(!temp.empty())
{
cout<<" "<<temp.top()<<" "<<endl;
temp.pop();
}
return 0;
}
