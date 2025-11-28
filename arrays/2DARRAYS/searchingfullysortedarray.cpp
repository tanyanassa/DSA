#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<vector<int>>matrix;
matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
int m=matrix.size();
int n=matrix[0].size();
int low=0;
int high=(m*n)-1;
int target=1;
int row;
int column;
while(low<=high)
{
int mid=(low+high)/2;
row=mid/n;
column=mid%n;
if(matrix[row][column]==target)
{
cout<<"row"<<" "<<row<<endl;
cout<<"column"<<" "<<column<<endl;
break;
}
else if(matrix[row][column]>target)
{
high=mid-1;
}
else{
low=mid+1;
}
}
return 0;
}