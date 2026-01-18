#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int>St;
St.push(1);
St.push(2);
St.push(3);
St.push(4);
int n=St.size();
cout<<"n"<<n<<endl;
while(!St.empty()){
cout<<" "<<St.top()<<endl;
}
return 0;
}