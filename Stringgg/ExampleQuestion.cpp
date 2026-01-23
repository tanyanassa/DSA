#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<string>word1={"ab","c"};
int n=word1.size();
string answer;
for(int i=0;i<n;i++)
{
answer+=word1[i];
}
cout<<"the answer string is as follows : "<<answer<<endl;
return 0;
}