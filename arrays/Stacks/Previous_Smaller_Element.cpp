#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>arr={4,13,11,5,9,7,8,6};
int n=arr.size();
int i;
vector<int>a(n,-1);
stack<int>st;
st.push(n-1);
for(i=n-2;i>=0;i--)
{
if(!st.empty()&&arr[i]<arr[st.top()])
{
while(!st.empty()&&arr[i]<arr[st.top()]){
a[st.top()]=arr[i];
st.pop();
}
}
st.push(i);
}
cout<<"The Final Array Is :- "<<endl;
for(i=0;i<n;i++)
cout<<" "<<a[i]<<" "<<endl;
return 0;
}