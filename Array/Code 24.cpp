#include <iostream>
#include <conio.h>
using namespace std;
void read_mat(int mat[5][5], int);
void display_mat(int mat[5][5], int);
int main()
{
int row;
int mat1[5][5];
cout<<"\n Enter the number of rows and columns of the matrix:";
cin>>row;
read_mat(mat1, row);
display_mat(mat1, row);
getch();
return 0;
}
void read_mat(int mat[5][5], int r)
{
int i, j;
for(i=0; i<r; i++)
{
for(j=0; j<r; j++)
{
if(i==j)
cout<<"0"<<" ";
else if(i>j)
cout<<"–1"<<" ";
else
cout<<"1"<<" ";
}
}
}
void display_mat(int mat[5][5], int r)
{
int i, j;
for(i=0; i<r; i++)
{
cout<<"\n";
for(j=0; j<r; j++)
cout<<mat[i][j]<<" ";
}
}
