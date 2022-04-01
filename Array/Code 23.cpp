#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i, j, k;
int rows1, cols1, rows2, cols2, res_rows, res_cols;
int mat1[5][5], mat2[5][5], res[5][5];
cout<<"\n Enter the number of rows in the first matrix : ";
cin>>rows1;
cout<<"\n Enter the number of columns in the first matrix : ";
cin>>cols1;
cout<<"\n Enter the number of rows in the second matrix : ";
cin>>rows2;
cout<<"\n Enter the number of columns in the second matrix : ";
cin>>cols2;
if(cols1 != rows2)
{
cout<<"\n The number of columns in the first matrix must be equal to the number of rows in the second matrix";
getch();
exit(0);
}
res_rows = rows1;
res_cols = cols2;
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
for(i=0;i<res_rows;i++)
{
for(j=0;j<res_cols;j++)
{
res[i][j]=0;
for(k=0; k<res_cols;k++)
res[i][j] += mat1[i][k] * mat2[k][j];
}
}
cout<<"\n The elements of the product matrix are ";
for(i=0;i<res_rows;i++)
{
cout<<"\n";
for(j=0;j<res_cols;j++)
cout<<res[i][j]<<" ";
}
return 0;
}
