#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i, j;
int rows1, cols1, rows2, cols2, rows_sum, cols_sum;
int mat1[5][5], mat2[5][5], sum[5][5];
cout<<"\n Enter the number of rows in the first matrix : ";
cin>>rows1;
cout<<"\n Enter the number of columns in the first matrix : ";
cin>>cols1;
cout<<"\n Enter the number of rows in the second matrix : ";
cin>>rows2;
cout<<"\n Enter the number of columns in the second matrix : ";
cin>>cols2;
if(rows1 != rows2 || cols1 != cols2)
{
cout<<"\n Number of rows and columns of both matrices must be equal";
getch();
exit(0);
}
rows_sum = rows1;
cols_sum = cols1;
cout<<"\n Enter the elements of the first matrix ";
for(i=0;i<rows1;i++)
{
for(j=0;j<cols1;j++)
{
cin>>mat1[i][j];
}
}
cout<<"\n Enter the elements of the second matrix ";
for(i=0;i<rows2;i++)
{
for(j=0;j<cols2;j++)
{
cin>>mat2[i][j];
}
}
for(i=0;i<rows_sum;i++)
{
for(j=0;j<cols_sum;j++)
sum[i][j] = mat1[i][j] + mat2[i][j];
}
cout<<"\n The elements of the resultant matrix are ";
for(i=0;i<rows_sum;i++)
{
cout<<"\n";
for(j=0;j<cols_sum;j++)
cout<<sum[i][j]<<" ";
}
return 0;
}
