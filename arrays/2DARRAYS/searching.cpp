#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
int m=matrix.size();
int n=matrix[0].size();
int target=30;
int i;
int row=-1;
for(i=0;i<m;i++)
{
if(matrix[i][0]<=target && target<=matrix[i][n-1])
{
row=i;
break;
}
}
int low=0;
int high=n-1;
while(low<=high)
{
int mid=(low+high)/2;
if(matrix[row][mid]==target)
{
cout<<"element found here only"<<endl;
cout<<" "<<row<<" "<<mid<<" "<<matrix[row][mid]<<endl;
break;
}
else if(matrix[row][mid]>target)
{
high=mid-1;
}
else{
low=mid+1;
}
}
if(high<low)
{
cout<<"element not found here"<<endl;
}
return 0;
}