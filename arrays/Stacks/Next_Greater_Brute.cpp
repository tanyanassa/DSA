#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>arr={8,6,4,7,4,9,10,8,12};
int n=arr.size();
stack<int>st;
st.push(0);
int i;
vector<int>ans(n,-1);
for(i=1;i<n;i++)
{
if(arr[i]>arr[st.top()]){             
while(!st.empty()&&arr[i]>arr[st.top()]){
ans[st.top()]=arr[i];
st.pop();
}
}
st.push(i);
}
for(auto i : ans)
cout<<" "<<i<<" "<<endl;
return 0;
}