#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
int n=st.size();
int count=0;
cout<<"n"<<n/2<<endl;
vector<int>answer;
while(!st.empty())
{
if(count==n/2){st.pop();break;}
answer.push_back(st.top());
st.pop();
count=count+1;
}
for(auto it : answer)
{
cout<<it<<endl;
}
stack<int>temp=st;
cout<<endl;
while(!temp.empty()){
cout<<" "<<temp.top()<<" "<<endl;
temp.pop();
}    
for(auto it = answer.rbegin();it!=answer.rend();it++)
{
st.push(*it);
}
stack<int>finalanswer=st;
while(!finalanswer.empty()){
cout<<" "<<finalanswer.top();
finalanswer.pop();
}
return 0;
}