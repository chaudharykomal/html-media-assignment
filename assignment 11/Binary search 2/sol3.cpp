class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
vector<int> v;
int m=matrix.size(), n=matrix[0].size();
if(target<matrix[0][0]) return false;
if(target>matrix[m-1][n-1]) return false;
int row;
int low=1,high=matrix.size(),mid;
if(target<=matrix[0][n-1]) row=0;
else
{
while(low<high)
{
mid=(low+high)/2;
if(target==matrix[mid][n-1])
{
return true;
}
else if(target>matrix[mid][n-1] && target<matrix[mid+1]
[n-1])
{
row=mid+1;
break;
}
else if(target<matrix[mid][n-1] && target>matrix[mid-1]
[n-1])
{
row=mid;
break;
}

C++ & DSA

Assignment Solutions

else if(target<matrix[mid][n-1])
{
high=mid;
}
else if(target>matrix[mid][n-1])
{
low=mid;
}
}
}
low=0;
high=n;
cout<<"second loop"<<" "<<row<<endl;
while(low<=high)
{
int mid=(low+high)/2;
if(target==matrix[row][mid])
{
return true;
}
if(target>matrix[row][mid])
{
low=mid+1;
}
else if(target<matrix[row][mid])
{
high=mid-1;
}
}
return false;
}
};