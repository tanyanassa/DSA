#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
vector<int>answer;
stack<int>St;
vector<int>array={22,1,30,5,4};
int n=array.size();
for(int i=0;i<n;i++)
{
int element=array[i];
if(St.empty()){
St.push(element);
answer.push_back(-1);
}
else if(element<=St.top()){
answer.push_back(St.top());
St.push(element);
}
else if(element>St.top()){
while(St.top()>element){
St.pop();
}
answer.push_back(St.top());
St.push(element);
}
}
cout<<"The Final Answer Is"<<endl;
for(auto i : answer)
{
cout<<i<<endl;
}
return 0;
}