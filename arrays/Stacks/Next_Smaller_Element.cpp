#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>arr={7,9,12,10,14,8,3,6,9};
int n=arr.size();
vector<int>array(n,-1);
int i;
stack<int>st;
st.push(0);
for(i=1;i<n;i++)
{
if(arr[st.top()]>arr[i]){
while(!st.empty()&&arr[st.top()]>arr[i]){
array[st.top()]=arr[i];
st.pop();
}
}
st.push(i);
}
for(auto i : array)
cout<<i<<endl;
return 0;
}