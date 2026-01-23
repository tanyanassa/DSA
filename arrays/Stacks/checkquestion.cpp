#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
int main()
{
stack<int>st;
stack<int>answer;
vector<int>array={0,9,10,2,1,4,5};
int minvale=INT_MAX;
int n;
n=array.size();
for(int i=0;i<n;i++)
{
st.push(array[i]);
minvale=min(minvale,array[i]);
answer.push(minvale);
}
cout<<"answer 1"<<endl;
while(!st.empty()){cout<<" "<<st.top()<<" ";st.pop();}
cout<<"answer 2"<<endl;
while(!answer.empty()){cout<<" "<<answer.top()<<" ";answer.pop();}
return 0;
}