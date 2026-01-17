#include<iostream>
using namespace std;
class Stack{
public:
int top;
int *arr;
int size;
Stack (int size){
this->size=size;
arr=new int[size];
top=-1;
}
void push(int x)
{
if(top==size-1)
{
cout<<"stack overflow"<<endl;
}
else
{
top=top+1;
arr[top]=x;
}
}
void pop()
{
if(top<0)
{
cout<<"Stack Underflow"<<endl;
}
else
{
top--;
}
}
int peek()
{
if(top<0)
{
return 0;
}
else
{
return arr[top];
}
}
bool isempty()
{
if(top<0)
{
return true;
}
else{
return false;
}
}
};
int main()
{
Stack st(5);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.pop();
cout<<st.peek();
return 0;
}