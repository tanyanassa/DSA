#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>start={1,3,0,5,8,5};
vector<int>end={2,4,6,7,9,9};
int n=start.size();
int i;
int count=1;
vector<pair<int,int>>v;
for(i=0;i<n;i++)
{
pair<int,int>s={start[i],end[i]};
v.push_back(s);
}
int previous_end=v[0].second;
for(i=1;i<n;i++)
{
int current_start=v[i].first;
if(previous_end<current_start)
{
count=count+1;
previous_end=v[i].first;
}
}
cout<<"Count :-"<<" "<<count<<endl;
return 0;
}