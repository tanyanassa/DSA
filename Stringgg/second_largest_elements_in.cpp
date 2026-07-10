#include<bits/stdc++.h>
using namespace std;
int main()
{
set<int>s;
s.insert(1);
s.insert(1);
s.insert(2);
s.insert(3);
cout<<"SET"<<endl;
for(auto i : s)
cout<<i;
return 0;
}